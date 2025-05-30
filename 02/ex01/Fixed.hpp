class Fixed
{
	private:
		int _fixed_value;
		static const int _fractionalbits = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &other);

		int getRawBits(void);
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt (void)const;
} ;



111111111 111111111111
5441111111111111111111
0000000000000000000010
1111111111111111111111




111111111111111111111