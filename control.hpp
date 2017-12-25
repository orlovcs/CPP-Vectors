//
//  control.hpp
//  CPP-Vectors
//
//  Created by ニキータオルロフ on 2017-12-25.
//  Copyright © 2017 ニキータオルロフ. All rights reserved.
//

#ifndef control_hpp
#define control_hpp
#include <iostream>
#include <string>
#include <map>
#include "vec.hpp"
class control{
    std::map<std::string, vec*> lst;
    //map of vector pointers w/ string name
public:
    control(){std::cout<<"Control created"<<std::endl;}
    
    void quit();
    void help();
    void add(std::string vector1, std::string vector2); //implement a way to add infinite vectors after
    void subtract(std::string vector1, std::string vector2);
    void cross(std::string vector1, std::string vector2);
    void dot(std::string vector1, std::string vector2);
    void multiply(std::string vector1, int k);
    void multiply(std::string vector1, std::string vector2);
    void create(int x, int y, int z, std::string name);
};


#endif /* control_hpp */
