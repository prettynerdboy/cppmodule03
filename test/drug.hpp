#ifndef DRUG_HPP
# define DRUG_HPP

#include <iostream>

class Drug
{
    private:
        std::string  _type;
        int          _highLevel;
        virtual void _takeToSky();
        virtual void _badtrip();
    public:
        Drug(std::string &typef,int level);
        virtual ~Drug();
        void trip();
};


#endif