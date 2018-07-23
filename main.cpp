#include <iostream>
#include <sstream>
#include "third/pub.h"

int
main()
{
    std::cout << "Hello, World!" << std::endl;

    while(true)
    {
        int tmptag = 0;
        int iport = 11999;
        std::string serverip= "127.0.0.1";
        std::string savemapstr;
        std::stringstream tmpstream;
        tmpstream<<"//home//jacky//Downloads//test//" << tmptag << ".png";
        savemapstr = tmpstream.str();
        std::cout<<"send file : "<<savemapstr<<std::endl;

        if(1 == send_work(serverip.data(), iport, savemapstr.data()))
        {
            std::cout<<"send success!"<<std::endl;
        }
        tmptag++;
    }

    return 0;
}