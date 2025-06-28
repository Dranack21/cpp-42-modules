#include "PmergeMe.hpp"

unsigned long get_time_us()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000000 + tv.tv_usec;
}

std::vector<int> make_initial_vec(int argc, char *argv[])
{
	std::vector<int> vec;

	for(int i = 1; i < argc; i++)
		vec.push_back(std::atoi(argv[i]));
	return (vec);
}
std::deque<int> make_initial_deq(int argc, char *argv[])
{
	std::deque<int> deq;

	for(int i = 1; i < argc; i++)
		deq.push_back(std::atoi(argv[i]));
	return(deq);
}

size_t jacobsthal(size_t n) 
{
    size_t j0 = 0;
    size_t j1 = 1;
    size_t jn = 0;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    for (size_t i = 2; i <= n; ++i)
    {
        jn = j1 + 2 * j0;
        j0 = j1;
        j1 = jn;
    }
    return jn;
}

std::vector<int> insert_binary_vector(std::vector<int> &mainge, std::vector<int> &pending)
{
    size_t                          i;   ///STORES JACOBSTALS RESULT SO WE CAN INSERT IT///
    size_t                          j;
    std::vector<int>::iterator      it;
    std::vector<int>                jacob;

    if (pending.empty())
        return (mainge);
    j = 1;
    while (true)
    {
        i = jacobsthal(j);
        j++;
        if (i >= pending.size())
            break;
        jacob.push_back(i);
    }
    remove_duplicates_vector(jacob);
    for (size_t k = 0; k < jacob.size(); k++)
    {
        it = std::lower_bound(mainge.begin(), mainge.end(), pending[jacob[k]]); ////FINDS THE POSITION WHERE TO INSERT
        mainge.insert(it, pending[jacob[k]]);
    }
    for (size_t idx =  0; idx < pending.size(); idx++) ///ON MARQUE EN FALSE LES TRUCS DEJA INSEREE CAD LES TRUCS QUI ONT UN INDICE DE JACOB
    {
        bool inserted = false;
        for (size_t jidx = 0; jidx < jacob.size(); ++jidx)
        {
            if (jacob[jidx] == static_cast<int>(idx))
            {
                inserted = true;
                break;
            }
        }
        if (!inserted)
        {
            it = std::lower_bound(mainge.begin(), mainge.end(), pending[idx]);
            mainge.insert(it, pending[idx]);
        }
    }
    return mainge;
}

std::deque<int> insert_binary_deque(std::deque<int> &mainge, std::deque<int> &pending)
{
    size_t                          i;   ///STORES JACOBSTALS RESULT SO WE CAN INSERT IT///
    size_t                          j;
    std::deque<int>::iterator      it;
    std::deque<int>                jacob;

    if (pending.empty())
        return (mainge);
    j = 1;
    while (true)
    {
        i = jacobsthal(j);
        j++;
        if (i >= pending.size())
            break;
        jacob.push_back(i);
    }
    remove_duplicates_deque(jacob);
    for (size_t k = 0; k < jacob.size(); k++)
    {
        it = std::lower_bound(mainge.begin(), mainge.end(), pending[jacob[k]]); ////FINDS THE POSITION WHERE TO INSERT
        mainge.insert(it, pending[jacob[k]]);
    }
    for (size_t idx =  0; idx < pending.size(); idx++) ///ON MARQUE EN FALSE LES TRUCS DEJA INSEREE CAD LES TRUCS QUI ONT UN INDICE DE JACOB
    {
        bool inserted = false;
        for (size_t jidx = 0; jidx < jacob.size(); ++jidx)
        {
            if (jacob[jidx] == static_cast<int>(idx))
            {
                inserted = true;
                break;
            }
        }
        if (!inserted)
        {
            it = std::lower_bound(mainge.begin(), mainge.end(), pending[idx]);
            mainge.insert(it, pending[idx]);
        }
    }
    return mainge;
}



std::vector<int> sort_recursive_vec(std::vector<int> &input)
{
	std::vector<int>	pending;
	std::vector<int>	mainge;

	if (input.size() <= 1)
		return input;
	for (size_t i = 0; i < input.size(); i += 2)
	{
		int a = input[i];
		if (i + 1 >= input.size())
		{
			pending.push_back(a);
			break;
		}
		int b = input[i + 1];
		if (a > b)
		{
			mainge.push_back(a);
			pending.push_back(b);
		}
		else
		{
			mainge.push_back(b);
			pending.push_back(a);
		}
	}
	mainge = sort_recursive_vec(mainge);
	mainge = insert_binary_vector(mainge, pending);
	return (mainge);
}



std::deque<int>  sort_recursive_deque(std::deque<int> &input)
{
	std::deque<int>		pending;
	std::deque<int>		mainge;

	if (input.size() <= 1)
		return input;
	for (size_t i = 0; i < input.size(); i += 2)
	{
    	int a = input[i];
    	if (i + 1 >= input.size())
    	{
        	pending.push_back(a);
        	break;
    	}
    	int b = input[i + 1];
		if (a > b)
		{
			mainge.push_back(a);
			pending.push_back(b);
		}
		else
		{
			mainge.push_back(b);
			pending.push_back(a);
		}
	}
	mainge = sort_recursive_deque(mainge);
	mainge = insert_binary_deque(mainge, pending);
	return (mainge);
}



void remove_duplicates_vector(std::vector<int> &vec)
{
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        std::vector<int>::iterator next = it;
        ++next;
        while (next != vec.end())
        {
            if (*next == *it)
                next = vec.erase(next);
            else
                ++next;
        }
    }
}

void remove_duplicates_deque(std::deque<int> &vec)
{
    for (std::deque<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        std::deque<int>::iterator next = it;
        ++next;
        while (next != vec.end())
        {
            if (*next == *it)
                next = vec.erase(next);
            else
                ++next;
        }
    }
}