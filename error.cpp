#include <cstdlib>
#include <iostream>

int main()
{
    int error_line

    if(1==1)
    {
        std::cerr<<"SUCCESS"<<std::endl;
        return EXIT_SUCCESS;
    }
    else
    {
        std::cerr<<"FAILURE"<<std::endl;
        return EXIT_FAILURE;
    }
}
