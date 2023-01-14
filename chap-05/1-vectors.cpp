#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main()
{
    // std::vector<int> tab { 4, 0 }; // { 4, 0 }
    // std::vector<int> tab(4, 0); // { 0, 0, 0, 0 }

    // int array[] = { 0, 1, 2, 3, 4, 5 };

    // std::vector<int> part(&array[2], &array[5]);
    // std::vector<int> full(array, array + 6);

    // for (const auto val : part)
    // {
    //     std::cout << val << std::endl;
    // }

    // for (const auto val : full)
    // {
    //     std::cout << val << std::endl;
    // }

    // INSERTION

    // std::vector<int> values { 1, 2, 3 };
    // std::cout << "2nd element is " << values[1] << std::endl;
    // values[2] = 8;
    // std::cout << "Last element has changed to " << values[2] << std::endl;

    // std::vector<int> full(array, array + 6);

    // for (size_t left = 0, right = full.size() - 1; left < right; left++, right--)
    // {
    //     std::swap(full[left], full[right]);
    // }

    // for (const auto val : full)
    // {
    //     std::cout << val << std::endl;
    // }

    // std::vector<int> values = { 1, 2, 3 };

    // for (auto it = values.begin(); it != values.end(); it += 2)
    // {
    //     it = values.insert(it, *it);
    // }

    // SUPPRESSION

    // std::vector<int> values = { 1, 2, 3 };

    // while (!values.empty())
    // {
    //     values.pop_back();
    // }

    // std::vector<int> values = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // values.erase(values.begin() + 2, values.begin() + 7);

    // auto it = values.begin();

    // for (; it != values.end(); ++it)
    // {
    //     if (*it == 9)
    //     {
    //         break;
    //     }
    // }

    // if (it != values.end())
    // {
    //     values.erase(it);
    // }

    // auto it = std::find(values.begin(), values.end(), 9);
    // if (it != values.end())
    // {
    //     values.erase(it);
    // }

    // OPERATIONS GLOBALES

    std::vector<int> values = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // values.assign(5, 2);
    // values.assign({ 0, 2, 32, -4, 3 });
    values.clear();

    // AFFICHAGE
    for (auto it = values.begin(); it != values.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}