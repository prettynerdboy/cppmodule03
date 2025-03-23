#include "drug.hpp"
#include "cannabis.hpp"
int main(void)
{
    std::cout << "input drug name >>";
    std::string type;
    std::getline(std::cin,type);
    int level;
    std::cout <<"input drug level >>";
    std::cin >> level;
    std::cin.ignore();

    Drug c =Drug(type,level);
    c.trip();

    std::cout << "input cannabis name >>";
    std::string type2;
    std::getline(std::cin,type2);
    int level2;
    std::cout <<"input drug level >>";
    std::cin >> level2;
    std::cin.ignore();

    Cannabis a =Cannabis(type2,level2);
    a.trip();
}