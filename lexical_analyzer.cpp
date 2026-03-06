#include <iostream>
#include <cctype>
using namespace std;

bool checkLexical(string line){

    for(char ch : line){

        if(!(isalnum(ch) || ch==' ' || ch=='=' || ch==';' || ch=='+' || ch=='-' || ch=='*' || ch=='/')){
            cout<<"Lexical Error: Invalid character "<<ch<<endl;
            return false;
        }

    }

    return true;
}
