/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:21:33 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/28 12:24:41 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
class Array
{
	private:
		T* 		arr;
		size_t 	_size;
	public:
		Array (void) : arr(NULL), _size(0) {}
		Array (int size) : arr(new T[size]), _size(size) {}
		Array (const Array& rhs) {*this = rhs;}
		~Array (void) {delete [] arr;}

		Array&	 operator=(const Array& rhs)
		{
			if (this == &rhs) {return *this;}
			
			arr = new T[rhs._size];
			_size = rhs._size;

			for (size_t i = 0; i < _size; i++)
				arr[i] = rhs.arr[i];
			return (*this);
		}

		T&	operator[](int elem)
		{
			if (elem > -1 && static_cast<unsigned int>(elem) < _size)
				return (arr[elem]);
			else
				throw ElemOutOfArray();
		};

		int	size(void)
		{
			return (_size);
		}

		class ElemOutOfArray : public std::exception
		{
			public:
				virtual const char * what (void) const throw() {return "Element number is out of the array";}
		};
};

#endif