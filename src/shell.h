#ifndef SHELL_H
#define SHELL_H

#include <string>
#include <vector>
using namespace std;

class Shell{
public:
    Shell();
    ~Shell();
    void run();
    void parse();
    void print();
    void exit();

private:
    string line;
    vector<string> args;
    int status;

    string shell_read_line();
    vector<string> shell_split_line(string &line);
    int shell_execute(vector<string> &args);

};

#endif
