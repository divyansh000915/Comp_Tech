

#include <iostream>
# include <math.h>
using namespace std;

int convdtob (int decm) // Decimal to Binary
{
    int bin=0;
    int p=1;
    while (decm>0)
    {
        int r=decm%2;
        bin += r*p;
        p=p*10;
        decm/=2;
    }
    return bin;
}

int convbtod (int bin) // Binary to Decimal
{
    int dec=0;
    int p=0;
   
    while (bin)
    {
        
        dec += pow(2,p)*(bin%10);
      
        bin/=10;
    
        p++;
    }
    return dec;
}


int main()
{
    
    int binary, decimal;
    cout << "\n Enter the decimal no. : ";
    cin >> decimal;
    cout << "\n Entered deciaml in binary representation : " << convdtob(decimal) << endl;

    cout << "\n Enter the binary no. : ";
    cin >> binary;
  
    cout << "\n Entered binary in decimal representation : " << convbtod (binary) << endl;
    
    return 0;
}

