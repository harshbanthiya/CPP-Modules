
#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
class Array
{
	private:
		T* 		arr;
		size_t 	size;
	public:
		Array (void) : arr(NULL), size(0) {}
		Array (int size) : arr(new T[size]), size(size) {}
		Array (const Array& rhs) {*this = rhs;}
		~Array (void) {delete [] arr;}

		Array&	 operator=(const Array& rhs)
		{
			if (this == &rhs) {return *this;}
			
			arr = new T[rhs.size];
			size = rhs.size;

			for (size_t i = 0; i < size; i++)
				arr[i] = rhs.arr[i];
			return (*this);
		}

		T&	operator[](int elem)
		{
			if (elem > -1 && static_cast<int>(elem) < size)
				return (arr[elem]);
			else
				throw ElemOutOfArray();
		};

		int	size(void)
		{
			return (size);
		}

		class ElemOutOfArray : public std::exception
		{
			public:
				virtual const char * what (void) const throw() {return "Element number is out of the array";}
		};
};

#endif