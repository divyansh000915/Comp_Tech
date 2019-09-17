//
//  main.cpp
//  Computational 5 Errors
//
//  Created by Divyansh Rastogi on 11/09/19.
//  Copyright © 2019 Divyansh Rastogi. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
   // std::cout << "Hello, World!\n";
    float tval, cval;
    cout << "\nEnter the True Value : ";
    cin >> tval;
    cout << "\nEnter the Calculated Value : ";
    cin >> cval;
    float abserr = abs(cval-tval);
    float relerr = abserr/tval;
    float pererr = relerr*100;
    cout <<"\nAbsolute Error : " <<  abserr << endl << "\nRelative Error : " << relerr << endl << "\nPrecentage Error : " << pererr << '%' << endl;
    return 0;
}
