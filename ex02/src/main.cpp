#include "../inc/Array.hpp"

int main(void)
{
	std::cout << "CONSTRUCTION WITHOUT A PARAMETER\n";

	Array<int> test1;

	std::cout << "INDEXES OF ARRAY: (out of bounds)\n";
	try{
		std::cout << "[0]: " << test1[0] << ", [1]: " << test1[1] << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nCONSTRUCTION WITH A VALID PARAMETER\nArray<std::string>\n";

	Array<std::string> test2(5);

	std::cout << "INDEXES OF ARRAY: 2nd out of bounds\n";
	try{
		std::cout << "[0]: " << test2[0] << ", [5]: " << test2[5] << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}

		std::cout << "\nCONSTRUCTION WITH A VALID PARAMETER\nArray<int>\n";

	Array<int> test3(5);

	std::cout << "INDEXES OF ARRAY: 2nd out of bounds\n";
	try{
		std::cout << "[0]: " << test3[0] << ", [5]: " << test3[5] << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nCOPY CONSTRUCTOR\n";

	test2[0] = "Hei";
	std::cout << "test2[0]: " << test2[0] << std::endl;

	Array<std::string> test4(4);
	test4 = test2;

	std::cout << "test4[0]: " << test4[0] << std::endl;


}