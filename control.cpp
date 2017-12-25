//
//  control.cpp
//  CPP-Vectors
//
//  Created by ニキータオルロフ on 2017-12-25.
//  Copyright © 2017 ニキータオルロフ. All rights reserved.
//

#include "control.hpp"


control::control(){
    std::cout<<"Control created"<<std::endl;
}
void control::subtract(std::string vector1, std::string vector2){
   *(lst[vector1]) -= *(lst[vector2]);
}
void control::multiply(std::string vector1, std::string vector2){
    *(lst[vector1]) *= *(lst[vector2]);
}
void control::cross(std::string vector1, std::string vector2){
    (lst[vector1])->cross(*(lst[vector2]));
}
void control::dot(std::string vector1, std::string vector2){
    
}
void control::add(std::string vector1, std::string vector2){
   *(lst[vector1]) += *(lst[vector2]);
}
void control::create(int x, int y, int z, std::string name){
   lst.emplace(name, std::make_unique <vec> (x,y,z));    
}
void control::multiply(std::string vector1, int k){
    *(lst[vector1]) *= k;
}
void control::view(std::string vector1){
    std::cout << vector1 << ": ";
    std::cout << (lst[vector1])->getX() << std::endl;
   // std::cout << *(lst[vector1]);
}
void control::quit(){
    exit(0);
    
}
void control::help(){
    
}
