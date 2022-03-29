#ifndef __GIRL__
#define __GIRL__


#include<iostream>
#include<string>

class Girl{
    private:
    std::string name_;

    public:
        Girl(const std::string &name) : name_(name){}

        std::string GetName() const noexcept {return name_;}

};
#endif