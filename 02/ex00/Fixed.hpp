class Fixed
{
	private:
		int _fixed_value;
		static const int _fractionalbits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &other);
		int getRawBits(void);
		void setRawBits(int const raw);
} ;
