#include <unistd.h>

int main(int argc, char **argv)
{
    int i;


    if (argc == 2)
    {
        i = 0;
        while(argv[1][i])
        {
            if ((argv[1][i] == 'z') || (argv[1][i] == 'Z'))
                argv[1][i] -= 25;
            else if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] == 'Z'))
                argv[1][i] += 1;
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}