//
//  main.cpp
//  CPP-Vectors
//
//  Created by ニキータオルロフ on 2017-12-25.
//  Copyright © 2017 ニキータオルロフ. All rights reserved.
//

#include <iostream>
#include <string>
#include "control.hpp"
int main(int argc, const char * argv[]) {
    control cntrl;

    while(true){
        while(std::cin){
            std::string cmd;
            std::cin >> cmd;
            
            if(cmd=="q"){
                exit(0);
            }
            else if(cmd=="create"){
                int x,y,z;
                std::cin >> x >> y >> z;
                std::string name;
                std::cin >> name;
                cntrl.create(x,y,z,name);
                
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
            else if(cmd=="h"){
                cntrl.help();            }
            else if(cmd=="q"){
                cntrl.quit();
            }
            else{
                std::cout << "Invalid Command" << std::endl;
                std::cout << "Try Again" << std::endl;
            }
            
        }
        
    }
    
}
