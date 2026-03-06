#include <iostream>
#include <set>

using namespace std;

set<string> declaredVariables;

bool checkSemantic(string line){

    if(line.find("int") != string::npos){

        string var = line.substr(4,1);
        declaredVariables.insert(var);

    }

    if(line.find("=") != string::npos){

        string var = line.substr(0,1);

        if(declaredVariables.find(var) == declaredVariables.end()){

            cout<<"Semantic Error: Undeclared variable "<<var<<endl;
            return false;

        }

    }

    return true;
}
