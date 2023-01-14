#include <array>
#include <iostream>
#include <list>
#include <stack>

enum Fruit
{
    Apricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    std::array<std::string, Fruit_Count> fruits;
    fruits[Apricot]   = "apricot";
    fruits[Cherry]    = "cherry";
    fruits[Mango]     = "mango";
    fruits[Raspberry] = "raspberry";
}

void try_lists()
{
    std::list<int> l1;
    std::list<int> l2;
    std::list<int> l3;
    std::list<int> l4;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    l2.push_back(4);
    l2.push_back(5);
    l2.push_back(6);

    l3.push_back(7);
    l3.push_back(8);
    l3.push_back(9);

    l4.push_back(10);
    l4.push_back(11);
    l4.push_back(12);

    l1.merge(l2);
    l1.sort();
    l3.merge(l4);
    l3.sort();

    auto it = l1.begin();
    std::advance(it, l1.size() / 2);
    l1.splice(it, l3);

    for (auto it = l1.begin(); it != l1.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}

void try_stacks()
{
    // std::stack<int, std::vector<int>> s1;
    // s1.emplace(0);
    // s1.emplace(1);
    // s1.emplace(2);

    std::vector<int>                  v { 0, 1, 2 };
    std::stack<int, std::vector<int>> s2 { v };
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}