#include "shell.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Shell::Shell(){
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

void Shell::execute(){

}

void Shell::print(){

}

void Shell::exit(){

}

string shell_read_line(){

}

vector<string> shell_split_line(string &line){

}

int shell_execute(vector<string> &args){

}
