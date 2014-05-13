#include <fstream>
#include <iostream>

using namespace std;


int print_file(char name[])
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


int main()
{
    print_file("laughingman");

    return 0;
}
