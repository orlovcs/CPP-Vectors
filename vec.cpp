//
//  vec.cpp
//  CPP-Vectors
//
//  Created by ニキータオルロフ on 2017-12-25.
//  Copyright © 2017 ニキータオルロフ. All rights reserved.
//

#include "vec.hpp"



vec::vec(int x, int y, int z):i{std::make_unique<vecImpl>(x, y, z)} {}



vec::vec(const vec& other):
i{std::make_unique<vecImpl>
(other.getX(),other.getY(), other.getZ())} {}

vec& vec::operator+=(const vec& rhs){
    i->x = i->x + rhs.i->x;
    i->y = i->y + rhs.i->y;
    i->z = i->z + rhs.i->z;
    return *this;
}
vec& vec::operator-=(const vec& rhs){
    i->x = i->x - rhs.i->x;
    i->y = i->y - rhs.i->y;
    i->z = i->z - rhs.i->z;
    return *this;
}
vec& vec::cross(const vec rhs){
    i->x = (i->x * rhs.i->z) - (i->z * rhs.i->y);
    i->y = (i->z  * rhs.i->x) - (i->x * rhs.i->z);
    i->z = (i->x * rhs.i->y) - (i->y * rhs.i->x);
    return *this;
}
void vec::dot(const vec rhs){
    int dx = (i->x * rhs.i->x);
    int dy = (i->y  * rhs.i->y);
    int dz = (i->z * rhs.i->z);
    std::cout << "Dot product is: ";
    std::cout << dx + dy + dz << std::endl;
}
vec& vec::operator*=(const vec& rhs){
    i->x = i->x * rhs.i->x;
    i->y = i->y * rhs.i->y;
    i->z = i->z * rhs.i->z;
    return *this;
}
vec& vec::operator*=(int k){
    i->x = i->x * k;
    i->y = i->y * k;
    i->z = i->z * k;
    return *this;
}
int vec::getX() const{
    return i->x;
}
int vec::getY() const{
    return i->y;
}
int vec::getZ() const{
    return i->z;
}

std::ostream &operator<<(std::ostream &out, const vec &v) {
    out << v.getX() << ", " << v.getY() << ", " << v.getZ() << std::endl;
    return out;
}

