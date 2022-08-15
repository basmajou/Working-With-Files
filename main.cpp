/*
This program read & write data on file
Written by Basma Yousef
Last modification: 16 - 8 - 2022
*/

#include <iostream>
#include <fstream>    //to use objects to handle with files

using namespace std;

int main()
{
    //initialization & definition data
    int e,a = 6;
    char f,b = 'c';
    double j,c = 4.4;
    string h,d = "faly";

    //initialization streams objects to handle with file
    ofstream printonfile;
    ifstream readfile;

    //Create a new text file
    printonfile.open("Try.txt");

    //Write data to "Try" file
    printonfile<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d;

    //Close "Try" file
    printonfile.close();

    //Open "Try" file
    readfile.open("Try.txt");

    //Read data from "Try" file
    readfile>>e>>f>>j>>h;

    //Close "Try" file
    readfile.close();

    //Print data
    cout<<e<<"\n"<<f<<"\n"<<j<<"\n"<<h<<"\n";

    return 0;
}
