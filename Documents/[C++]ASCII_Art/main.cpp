/************************************************************************
*    Learning Programm                                                  *
*                                                                       *
*Date: Jan. 2014                                                        *
*                                                                       *
*- while-Schleife                                                       *
*- switch-Anweisung                                                     *
*- Pointer (int *pi;), nicht wircklich notwending wird aber zur         *
*    übung trotzdem verwendet                                           *
*************************************************************************/

#include "Header.h"

using namespace std;

int mai()
{

//Variablendeklaration
int x=0;
char cAnswer;

//Zählvariable mit Zeiger dazu(können nicht innerhalb von switch-Anweisungen deklariert werden)
int i;
int *pi = &i;

while (x==0)
{
//ClearScreen();
//source logo

	std::cout << "Do you know the laughingman? (y/n) or press q for quit";
    std::cin >> cAnswer;

	switch (cAnswer) {
		case 'y':
            std::cout << "You said - Yes\n";
            print_file("laughingman");
            break;
		case 'n':
            std::cout << "You said - No\n";
            break;
		case 'q':
            //ClearScreen();
            for(i=3;i>=0;i--)
            {
                std::cout << "You are leaving in " << *pi << "\n";  //*pi Zeiger auf i
                if(i==0)
                  {x=1;}else
                  {sleep_for(1000);}
            }
            break;
		default:
            //ClearScreen();
            std::cout << "This is not an answer!\n";
            sleep_for(3000);
            break;
    }
}

//ClearScreen();


    return 0;
}
