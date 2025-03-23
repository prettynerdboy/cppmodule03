#ifndef CANNABIS
#define CANNABIS

#include "drug.hpp"
#include <iostream>

class Cannabis :public Drug
{
    private:
        void _takeToSky();
        void _badtrip();
    public:
        Cannabis(std::string &type ,int level):Drug(type,level){};
        ~Cannabis();
        void manchii();
};

#endif