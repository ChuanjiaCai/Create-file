//
//  main.cpp
//  second
//
//  Created by jack on 16/5/28.
//  Copyright © 2016年 jack. All rights reserved.
//   creates a new file
//
//#include <iostream>
//#include<fstream>
//using namespace std;
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    ofstream  myfile("example.doc");
//    if(myfile.is_open())
//    {
//        myfile<<"this is a line.\n";
//        myfile<<"this is another line.\n";
//        myfile.close();
//        
//    }
//    else
//        cout<<"unable to open file";
//    
//    std::cout << "Hello, World!\n";
//    return 0;
//}

//reading a doc file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string line;
    ifstream myfile("example.doc");
    if(myfile.is_open())
    {
        while(getline(myfile,line))
        {
            cout<<line<<'\n';
            
        }
        myfile.close();
    }
    else
        cout<<"unable to open file";
    return 0;
}