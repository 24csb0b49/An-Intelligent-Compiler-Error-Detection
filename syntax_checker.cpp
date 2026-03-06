#include <iostream>
#include <string>

using namespace std;

bool checkSyntax(string line){

    if(line.find(";") == string::npos){
        cout<<"Syntax Error: Missing semicolon"<<endl;
        return false;
    }

    return true;
}
