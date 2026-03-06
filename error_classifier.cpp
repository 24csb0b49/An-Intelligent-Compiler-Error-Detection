#include <iostream>
#include <string>

using namespace std;

string classifyError(string type){

    if(type == "Lexical")
        return "Lexical Error Detected";

    if(type == "Syntax")
        return "Syntax Error Detected";

    if(type == "Semantic")
        return "Semantic Error Detected";

    return "No Error";
}
