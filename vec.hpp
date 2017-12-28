//
//  vec.hpp
//  CPP-Vectors
//
//  Created by ニキータオルロフ on 2017-12-25.
//  Copyright © 2017 ニキータオルロフ. All rights reserved.
//

#ifndef vec_hpp
#define vec_hpp
#include <iostream>
#include <string>
#include "vecImpl.cpp"

class vecImpl;

class vec{
    const std::unique_ptr<vecImpl> i;
public:
    vec(int x, int y, int z);
    vec(const vec& other);
    vec& operator+=(const vec& rhs);
    vec& operator-=(const vec& rhs);
    vec& cross(const vec rhs);
    void dot(const vec rhs);
    vec& operator*=(const vec& rhs);
    vec& operator*=(int k);
    int getX() const;
    int getY() const;
    int getZ() const;


};

std::ostream &operator<<(std::ostream &out, const vec &v);




#endif /* vec_hpp */


