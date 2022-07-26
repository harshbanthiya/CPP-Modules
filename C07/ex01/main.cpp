#include "iter.hpp"

int main()
{
    std::string arr[5];

	arr[0] = "Itssa";
	arr[1] = "me";
	arr[2] = "Mario";
	arr[3] = "Light Saber";
	arr[4] = "Obi Wan";

	iter(arr, static_cast<size_t>(5), &putstr);

	int arr_int[7] = {0, 1, 2, 3, 4, 5, 6};

	iter(arr_int, static_cast<size_t>(7), &putstr);

	return (0);
}