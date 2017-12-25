//
//  main.cpp
//  CPP-Vectors
//
//  Created by ニキータオルロフ on 2017-12-25.
//  Copyright © 2017 ニキータオルロフ. All rights reserved.
//


#include "control.hpp"
//#include <iostream>
//#include <string>

int main(int argc, const char * argv[]) {
    control cntrl;

    while(true){
        while(std::cin){
            std::string cmd;
            std::cin >> cmd;
            
            if(cmd=="create"){
                int x,y,z;
                std::cout << "Enter X,Y,Z" << std::endl;
                std::cin >> x >> y >> z;
                std::string name;
                std::cout << "Enter Name" << std::endl;
                std::cin >> name;
                cntrl.create(x,y,z,name);
                std::cout << "Created " << name << ": ";
                cntrl.view(name);
            }
            else if(cmd=="multiply"){
                std::string vec1;
                std::string vec2;
                std::cin >> vec1;
                std::cin >> vec2;
                cntrl.multiply(vec1, vec2);
            }
            else if(cmd=="k multiply"){
                std::string vec1;
                int k;
                std::cin >> vec1;
                std::cin >> k;
                cntrl.multiply(vec1, k);
            }
            else if(cmd=="subtract"){
                std::string vec1;
                std::string vec2;
                std::cin >> vec1;
                std::cin >> vec2;
                cntrl.subtract(vec1, vec2);
            }
            else if(cmd=="add"){
                std::string vec1;
                std::string vec2;
                std::cin >> vec1;
                std::cin >> vec2;
                cntrl.add(vec1, vec2);
            }
            else if(cmd=="dot"){
                std::string vec1;
                std::string vec2;
                std::cin >> vec1;
                std::cin >> vec2;
                cntrl.dot(vec1, vec2);
            }
            else if(cmd=="cross"){
                std::string vec1;
                std::string vec2;
                std::cin >> vec1;
                std::cin >> vec2;
                cntrl.cross(vec1, vec2);
            }
            else if(cmd=="view"){
                std::string vec1;
                std::cin >> vec1;
                cntrl.view(vec1);
            }
            else if(cmd=="help"){
                cntrl.help();
                
            }
            else if(cmd=="quit"){
                cntrl.quit();
            }
            else{
                std::cout << "Invalid Command" << std::endl;
                std::cout << "Try Again" << std::endl;
            }
            
        }
        
    }
    
}
