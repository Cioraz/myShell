#ifndef SHELL_H
#define SHELL_H

#include <string>
#include <vector>

class Shell{
public:
    Shell();
    ~Shell();
    void run();
    void parse();
    void execute();
    void print();
    void exit();

private:
    std::string line;
    std::vector<std::string> args;
    int status;

    std::string shell_read_line();
    std::vector<std::string> shell_split_line(std::string &line);
    int shell_execute(std::vector<std::string> args);

};

#endif
