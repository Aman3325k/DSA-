#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //File ko open karna
    ofstream fout;
    fout.open("zoom.text"); //create kar dega fir open karega

    //Write kar sakta houn
    fout<<"Hello World";
    fout.close();//resources release kar paon
}