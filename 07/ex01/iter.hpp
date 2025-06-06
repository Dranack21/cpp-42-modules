#pragma once

#include <iostream>

template <typename T, size_t N>
size_t arraySize(T(&) [N])
{
	return N;
}

template <typename T>
void	iter(T *a, size_t n, void(*fc)(T&))
{
	for(size_t i = 0; i < n; i++)
	{
		fc(a[i]);
	}
};


template <typename T>
void	iter(T *a, size_t n, void(*fc)(const T&))
{
	for(size_t i = 0; i < n; i++)
	{
		fc(a[i]);
	}
};