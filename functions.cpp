#include <iostream>
#include <conio.h>
using namespace std;

void myFunction();
int multiplied(int x);
int sum(int x);

int main()
{
    int program;
    cout << "##########################################" << endl;
    cout << "#                                        #" << endl;
    cout << "#   To run the Function program enter 1  #" << endl;
    cout << "#   To run the Recursion program enter 2 #" << endl;
    cout << "#                                        #" << endl;
    cout << "##########################################" << endl;
    cin >> program;

    switch (program)
    {
    case 1:
    {
        cout << "\n##########################################" << endl;
        cout << "#                                        #" << endl;
        cout << "#             Your choose is             #" << endl;
        cout << "#          THE FUNCTION PROGRAM          #" << endl;
        cout << "#                                        #" << endl;
        cout << "##########################################" << endl;
        int y;
        cout << "\nEnter a number. \nIt will be multiplied by 5: ";
        cin >> y;
        int x = multiplied(y);

        for (int i = 0; i < multiplied(y); i++)
        {
            myFunction();
        }
        cout << "The program was executed " << multiplied(y) << " times.";

        cout << "\nPress any key to end the program . . ." << endl;
        _getch();
        cout << endl;
    }
    break;

    case 2:
    {
        cout << "##########################################" << endl;
        cout << "#                                        #" << endl;
        cout << "#             Your choose is             #" << endl;
        cout << "#         THE RECURSION PROGRAM          #" << endl;
        cout << "#                                        #" << endl;
        cout << "##########################################" << endl;
        cout << endl;
        int result = sum(10);
        cout << result;

        cout << "\nPress any key to end the program . . ." << endl;
        _getch();
        cout << endl;

        // return 0;
    }
    break;

    default:
    {
        cout << "##########################################" << endl;
        cout << "#                                        #" << endl;
        cout << "#                  ERROR                 #" << endl;
        cout << "#  I expected you will check this, miss  #" << endl;
        cout << "#            Try again later!            #" << endl;
        cout << "#                                        #" << endl;
        cout << "##########################################" << endl;

        cout << "\nPress any key to end the program . . ." << endl;
        _getch();
        cout << endl;
    }
    break;
    }

    return 0;
}

void myFunction()
{
    cout << "I just got executed!\n";
}

int multiplied(int x)
{
    return x * 5;
}

int sum(int x)
{
    if (x > 0)
    {
        return x + sum(x - 1);
    }
    else
    {
        return 0;
    }
}
