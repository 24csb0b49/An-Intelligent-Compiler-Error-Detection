#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool checkLexical(string line);
bool checkSyntax(string line);
bool checkSemantic(string line);
string classifyError(string line);

int main() {

    ifstream file("sample_program.txt");
    string line;
    int lineNumber = 1;

    if(!file){
        cout<<"Error opening file"<<endl;
        return 0;
    }

    while(getline(file,line)){

        if(!checkLexical(line))
            cout<<"Line "<<lineNumber<<" : "<<classifyError("Lexical")<<endl;

        else if(!checkSyntax(line))
            cout<<"Line "<<lineNumber<<" : "<<classifyError("Syntax")<<endl;

        else if(!checkSemantic(line))
            cout<<"Line "<<lineNumber<<" : "<<classifyError("Semantic")<<endl;

        lineNumber++;
    }

    file.close();

    return 0;
}
