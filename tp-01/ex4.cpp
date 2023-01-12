#include <iostream>
#include <vector>

std::vector<unsigned int> count_lower(const std::string& in)
{
    std::vector<unsigned int> res(26);
    for (auto c : in)
    {
        res[c - 'a']++;
    }
    return res;
}

void display_lower_occ(const std::vector<unsigned int>& occ)
{
    for (unsigned int i = 0; i < occ.size(); i++)
    {
        std::cout << char('a' + i) << ": " << occ.at(i) << std::endl;
    }
}

int main()
{
    std::string fullInput;
    std::string input;
    bool        quit { false };

    while (!quit)
    {
        std::cin >> input;
        fullInput += input;
        if (input == "QUIT")
        {
            quit = true;
        }
    }

    auto occ = count_lower(fullInput);
    display_lower_occ(occ);

    return 0;
}