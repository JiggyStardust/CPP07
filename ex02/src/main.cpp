#include "../inc/Array.hpp"

#define MAX_VAL 750
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

	//subjects main()


	std::cout << "\nSUBJECT MAIN\n";

	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

}