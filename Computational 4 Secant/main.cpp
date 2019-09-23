//
//  main.cpp
//  Computational 4 Secant
//
//  Created by Divyansh Rastogi on 03/09/19.
//  Copyright © 2019 Divyansh Rastogi. All rights reserved.
//

#include <iostream>
#include <math.h>

//#include<bits/stdc++.h>
using namespace std ;


double func(int a,int b,int c, int d, double x)
{
    return a*x*x*x + b*x*x + c*x + d;
}

void secant(int a,int b,int c, int d,double m, double n, double ERROR)
{
   /* if (func(a,b,c,d,m) * func(a,b,c,d,n) >= 0)
    {
        cout << "You have not assumed right m and n \n either the roots lie outside the interval [m,n] or one of the interval is root itself\n";
        return;
    }*/
    
    double o = m;
    int cnt=0;
    while (abs(n-m) >= ERROR)
    {
        if (cnt) cout << '*';
        //o = (m+n)/2;
        o=(m*func(a,b,c,d,n)-n*func(a,b,c,d,m))/(func(a,b,c,d,n)-func(a,b,c,d,m));
        
        
        if (func(a,b,c,d,o) == 0.0)
        {//cout << '*';
            break;}
        
        //else if (func(a,b,c,d,o)*func(a,b,c,d,m) < 0)
        //    n = o;
       // else
          //  m = o;
        else  {m =n; n = o;}
       // cout << m-n << endl;
        cnt++;
    }
    cout << "\nThe value of root is : " << o << "\nNo. of iterations : "<< cnt<<endl;
    
}


int main()
{
    
    int fn,a,b,c,d,E;
    double m,n,ERROR;
    cout << "\t\t\t\t SECANT METHOD\n\t\t\t\t***************\n\n";
    cout<<"\n\nPlease enter the of decimal places wanted in roots : ";
    cin>>E;
    ERROR = pow(10,-(E+1));
    cout << ERROR << endl;
    cout<<"\nPress\tFor\n1.   \tLinear\n2.   \tQuadratic\n3.   \tCubic\n";
    cout << "\nEnter your choice : ";
    cin>>fn;
    switch(fn)
    {
        case 1:
            cout<<"\nEnter the values of a,b in (ax+b=0) : ";
            cin>>c>>d;
            cout<<"\nEnter the intervals (m,n) in which the roots may lie : ";
            cin>>m>>n;
            secant(0,0,c,d,m,n,ERROR);
            break;
        case 2:
            cout << "\nEnter the values of a,b,c in (ax^2+bx+c=0) : ";
            cin >> b >> c >> d;
            cout<<"\nEnter the intervals (m,n) in which the roots may lie : ";
            cin>>m>>n;
            secant(0,b,c,d,m,n,ERROR);
            break;
        case 3:
            cout<<"\nEnter the values of a,b,c,d in (ax^3+bx^2+cx+d=0) : ";
            cin>>a>>b>>c>>d;
            cout<<"\nEnter the intervals (m,n) in which the roots may lie : ";
            cin>>m>>n;
            secant(a,b,c,d,m,n,ERROR);
            break;
        default:
            cout<<"\nPlease enter a valid choice...!!!\n";
            break;
    }
    
    return 0;
}
