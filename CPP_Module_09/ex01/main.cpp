#include "RPN.hpp"

int main(int ac, char **av)
{
    RPN n;

    if (ac != 2)
        n.exitError();
    n.processInput(av[1]);
    return 0;
}
