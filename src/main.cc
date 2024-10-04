#include <iostream>
#include <cstdlib>
#include "shell.h"

int main(int argc, char *argv[]){
    Shell shell;
    shell.shell_split_line("Hello World!\n This is some file");

    return EXIT_SUCCESS;
}
