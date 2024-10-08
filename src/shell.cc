#include "shell.h"
#include <string>
#include <vector>
#include <iostream>

#define EOF (-1)
using namespace std;

Shell::Shell(){
    status=1;
}

Shell::~Shell(){
}

void Shell::run(){
    do{
        std::cout<<"> ";
        line=shell_read_line();
        args=shell_split_line(line);
        status=shell_execute(args);
    }while(status);
}

void Shell::parse(){

}

void Shell::print(){

}

void Shell::exit(){

}

string Shell::shell_read_line(){
    string buffer="";
    char curr_char;

    while(true){
        curr_char=getchar();
        if(curr_char==EOF || curr_char=='\n'){
            break;
        }else{
            buffer.push_back(curr_char);
        }
    }

    return buffer;
}

vector<string> Shell::shell_split_line(string &line){
    string curr_line=line;
    string buffer="";
    int line_length=line.length();
    vector<string> parsedTokens;
    for(int i=0;i<line_length;i++){
        if(line[i]==' ' || line[i]=='\r' || line[i]=='\n'){
            if(!buffer.empty()){
                parsedTokens.push_back(buffer);
                buffer.clear();
            }
        }
        else{
            buffer+=line[i];
        }
    }

    if(!buffer.empty()){
        parsedTokens.push_back(buffer);
    }
    for(auto it:parsedTokens) cout<<it<<endl;   //DEBUG
    return parsedTokens;
}

int Shell::shell_execute(vector<string> &args){
    return 1;
}
