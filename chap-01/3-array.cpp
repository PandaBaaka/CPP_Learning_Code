#include <iostream>
#include <vector>

// int main()
int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cerr << "Wrong number of arguments." << std::endl;
        return -1;
    }

    int array_size = std::stoi(argv[1]);

    if (array_size <= 0)
    {
        std::cerr << "Expected strictly positive value for array size." << std::endl;
        return -1;
    }

    // std::cout << "The given size is " << array_size << std::endl;

    // int array[] = { 0, 1, 2, 3 };
    // int array[50] = {};

    // for (int i = 0; i < 50; i++)
    // {
    //     array[i] = i + 1;
    // }

    // for (int i = 0; i < 4; ++i)
    // {
    //     std::cout << array[i] << std::endl;
    // }

    std::vector<int> array;

    for (int i = 0; i < array_size; i++)
    {
        array.emplace_back(i + 1);
    }

    for (int value : array)
    {
        std::cout << value << std::endl;
    }

    return 0;
}
