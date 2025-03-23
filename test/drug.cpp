#include "drug.hpp"

Drug::Drug(std::string &type, int level)
{
    this->_type = type;
    this->_highLevel = level;
    std::cout << "hello I'm " << this->_type << " ! I'm not dangerous !" << std::endl;
}

void Drug::_badtrip()
{
    std::cout << "i am " << this->_type << " but ... who are you ,where are you?" << std::endl;
}

//virtual
Drug::~Drug()
{
    std::cout << "hahaha, I know that you need me" << std::endl;
}

void Drug::_takeToSky(void)
{
    std::cout << "take you to the sky !" << std::endl;
}

void Drug::trip()
{
    if(this->_highLevel>10)
        this->_takeToSky();
    else if(this->_highLevel<0)
        this->_badtrip();
    else
        std::cout<<"I'm sober... " <<std::endl;
}