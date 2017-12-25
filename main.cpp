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
            else if(cmd=="q"){
                exit(0);
            }
            else if(cmd=="add"){

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
