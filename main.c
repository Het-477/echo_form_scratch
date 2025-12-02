#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        /*
        1 = file descriptor (0 stands for std input, 1 for std output, 2 for std error)
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