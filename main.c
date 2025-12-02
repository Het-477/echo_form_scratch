#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        /*
        1 = file descriptor (0 stands for std input, 1 for std output, 2 for std error)
        argv = actually stores the arguments in form of individual characters like: "h" "e" "l" "l" ....
        argc = (can also stand for argument count) counts the no. of arguments + 1 (+ 1 is the file path)
        */
        write(1, argv[i], strlen(argv[i]));

        // to add spaces to printed string
        if (i < argc - 1)
        {
            write(1, " ", 1);
        }
    }

    write(1, "\n", 1);

    return 0;
}