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

class vec{
    int x,y,z;
public:
    vec(int x, int y, int z);
    vec& operator+=(const vec& rhs){
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        this->z = this->z + rhs.z;
        return *this;
    }
    vec& operator-=(const vec& rhs){
        this->x = this->x - rhs.x;
        this->y = this->y - rhs.y;
        this->z = this->z - rhs.z;
        return *this;
    }
    vec& cross(const vec rhs){
        this->x = (this->x * rhs.z) - (this->z * rhs.y);
        this->y = (this->z  * rhs.x) - (this->x * rhs.z);
        this->z = (this->x * rhs.y) - (this->y * rhs.x);
        return *this;
    }
    void dot(const vec rhs){
        int dx = (this->x * rhs.x);
        int dy = (this->y  * rhs.y);
        int dz = (this->z * rhs.z);
        std::cout << "Dot product is: ";
        std::cout << dx + dy + dz << std::endl;
    }
    vec& operator*=(const vec& rhs){
        this->x = this->x * rhs.x;
        this->y = this->y * rhs.y;
        this->z = this->z * rhs.z;
        return *this;
    }
    vec& operator*=(int k){
        this->x = this->x * k;
        this->y = this->y * k;
        this->z = this->z * k;
        return *this;
    }
    int getX() const{
        return x;
    }
    int getY() const{
        return y;
    }
    int getZ() const{
        return z;
    }
    


//std::ostream& operator<<(std::ostream& out, const vec& v){
//    out << v.getX() << ", " << v.getX() << ", " << v.getX() << std::endl;
//    return out;
    
};




#endif /* vec_hpp */


