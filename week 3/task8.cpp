#include<iostream>
using namespace std;
main()
{
double KB;
double Bytes;
double MB;
double Bit;
cout <<" Enter Bits : ";
cin  >> Bit;
Bytes= 8*Bit;
cout << Bit << " is equal to " << Bytes << "Bytes";
KB = Bit*8000 ;
cout << Bit  << " is equal to " << KB << "KB";
MB = Bit * 8000000;
cout << Bit  << " is equal to " << MB << "MB";





}