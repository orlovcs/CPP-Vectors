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

class control{
    
public:
    control(){std::cout<<"Control created"<<std::endl;}
    
    void quit();
    void help();
    
    
};


#endif /* control_hpp */
