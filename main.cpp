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
            std::cout << "Enter command or help for more information" << std::endl;
            std::string cmd;
            std::cin >> cmd;
            
            if(cmd=="create"){ //move all this to cntrl
                int x,y,z;
                std::cout << "Enter X,Y,Z Coordinates (JUST NUMBERS)" << std::endl;
                std::cin >> x >> y >> z;
                std::string name;
                std::cout << "Enter Name" << std::endl;
                std::cin >> name;
                cntrl.create(x,y,z,name);
                std::cout << "Created vector:" << std::endl;
                std::cout << "Name: " << name << std::endl;
                std::cout << "Values: ";
                cntrl.view(name);
            }
            else if(cmd=="multiply"){
                std::string vec1;
                std::string vec2;
                std::cout << "Enter first vector name" << std::endl;
                std::cin >> vec1;
                std::cout << "Enter second vector name" << std::endl;
                std::cin >> vec2;
                cntrl.multiply(vec1, vec2);
            }
            else if(cmd=="k multiply"){
                std::string vec1;
                int k;
                std::cout << "Enter first name" << std::endl;
                std::cin >> vec1;
                std::cout << "Enter scalar value k" << std::endl;
                std::cin >> k;
                cntrl.multiply(vec1, k);
            }
            else if(cmd=="subtract"){
                std::string vec1;
                std::string vec2;
                std::cout << "Enter first name" << std::endl;
                std::cin >> vec1;
                std::cout << "Enter second name" << std::endl;
                std::cin >> vec2;
                cntrl.subtract(vec1, vec2);
            }
            else if(cmd=="add"){
                std::string vec1;
                std::string vec2;
                std::cout << "Enter first name" << std::endl;
                std::cin >> vec1;
                std::cout << "Enter second name" << std::endl;
                std::cin >> vec2;
                cntrl.add(vec1, vec2);
            }
            else if(cmd=="dot"){
                std::string vec1;
                std::string vec2;
                std::cout << "Enter first name" << std::endl;
                std::cin >> vec1;
                std::cout << "Enter second name" << std::endl;
                std::cin >> vec2;
                cntrl.dot(vec1, vec2);
            }
            else if(cmd=="cross"){
                std::cout << "Enter first name" << std::endl;
                std::string vec1;
                std::string vec2;
                std::cin >> vec1;
                std::cout << "Enter second name" << std::endl;
                std::cin >> vec2;
                cntrl.cross(vec1, vec2);
            }
            else if(cmd=="view"){
                std::cout << "Enter Name" << std::endl;
                std::string vec1;
                std::cin >> vec1;
                std::cout << "Values: ";
                cntrl.view(vec1);
            }
            else if(cmd=="help"){ //read from file
                cntrl.help();
                
            }
            else if(cmd=="list"){
                cntrl.list();
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
