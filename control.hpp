//
//  control.hpp
//  CPP-Vectors
//
//  Created by ニキータオルロフ on 2017-12-25.
//  Copyright © 2017 ニキータオルロフ. All rights reserved.
//

#ifndef control_hpp
#define control_hpp
#include "vec.hpp"
#include <fstream>
#include <memory>
#include <map>
//#include <string>

class control{
    std::map<std::string, std::unique_ptr<vec> > lst;
public:
    control();
    void subtract(std::string vector1, std::string vector2);
    void multiply(std::string vector1, std::string vector2);
    void cross(std::string vector1, std::string vector2);
    void dot(std::string vector1, std::string vector2);
    void add(std::string vector1, std::string vector2); //implement a way to add infinite vectors after
    void create(int x, int y, int z, std::string name);
    void multiply(std::string vector1, int k);
    void view(std::string vector1);
    void list();
    void quit();
    void help();
    ~control(){
        lst.clear();
    }
};


#endif /* control_hpp */
