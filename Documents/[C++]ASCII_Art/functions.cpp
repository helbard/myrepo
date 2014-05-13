#include "Header.h"



void sleep_for(int time)
{
    std::chrono::milliseconds dura( time );
    std::this_thread::sleep_for( dura );
}

void print_file(char name[])
{
    std::ifstream ifs;

    ifs.open(name, std::ifstream::in);

    char c = ifs.get();

    while(ifs.good()) {
      std::cout << c;
      c = ifs.get();
    }

    ifs.close();
}
