#include <iostream>
using namespace std;

void myFunctionEng();
void myFunctionPl();
int multiplied(int x);
int factorial(int x);

int main()
{
    int l;
    cout << "###########################################" << endl;
    cout << "#                                         #" << endl;
    cout << "#          Choose your language/          #" << endl;
    cout << "#           Wybierz swój język            #" << endl;
    cout << "#                                         #" << endl;
    cout << "#            English - enter 1            #" << endl;
    cout << "#           Polski - wprowadź 2           #" << endl;
    cout << "###########################################" << endl;
    cin >> l;
    while (l != 1 && l != 2)
    {
        cout << "ERROR! Enter 1 or 2\nERROR! Wprowadź 1 lub 2: ";
        cin >> l;
    }
    if (l == 1)
    {
        cout << "ENGLISH" << endl;
    }
    if (l == 2)
    {
        cout << "POLSKI";
    }

    int program, z;
    if (l == 1)
    {
        cout << "\n##########################################" << endl;
        cout << "#                                        #" << endl;
        cout << "#   To run the Function program enter 1  #" << endl;
        cout << "#   To run the Recursion program enter 2 #" << endl;
        cout << "#                                        #" << endl;
        cout << "##########################################" << endl;
    }
    if (l == 2)
    {
        cout << "\n#################################################" << endl;
        cout << "#                                               #" << endl;
        cout << "#    Żeby uruchomić program funkcji wprowadź 1  #" << endl;
        cout << "#  Żeby uruchomić program rekurencji wprowadź 2 #" << endl;
        cout << "#                                               #" << endl;
        cout << "#################################################" << endl;
    }
    cin >> program;
    while (program != 1 && program != 2)
    {
        if (l == 1)
        {
            cout << "ERROR! Enter 1 or 2: ";
        }
        if (l == 1)
        {
            cout << "ERROR! Wprowadź 1 lub 2: ";
        }
        cin >> program;
    }

    switch (program)
    {
    case 1:
    {
        if (l == 1)
        {
            cout << "\n##########################################" << endl;
            cout << "#                                        #" << endl;
            cout << "#             Your choose is             #" << endl;
            cout << "#          THE FUNCTION PROGRAM          #" << endl;
            cout << "#                                        #" << endl;
            cout << "##########################################" << endl;
        }
        if (l == 2)
        {
            cout << "\n##########################################" << endl;
            cout << "#                                        #" << endl;
            cout << "#              Twój wybór to             #" << endl;
            cout << "#             PROGRAM FUNKCJI            #" << endl;
            cout << "#                                        #" << endl;
            cout << "##########################################" << endl;
        }
        int y;
        if (l == 1)
        {
            cout << "\nEnter a number. \nIt will be multiplied by 5: ";
        }
        if (l == 2)
        {
            cout << "\nWprowadź liczbę. \nBędzie ona pomnożona przez 5: ";
        }
        cin >> y;
        int x = multiplied(y);

        for (int i = 0; i < multiplied(y); i++)
        {
            if (l == 1)
            {
                myFunctionEng();
            }
            if (l == 2)
            {
                myFunctionPl();
            }
        }
        if (l == 1)
        {
            cout << "The program was executed " << multiplied(y) << " times.";
        } 
        if (l == 2)
        {
            cout << "Program został wykonany " << multiplied(y) << " razy.";
        }
    }
    break;

    case 2:
    {
        if (l == 1)
        {
            cout << "\n##########################################" << endl;
            cout << "#                                        #" << endl;
            cout << "#             Your choose is             #" << endl;
            cout << "#         THE RECURSION PROGRAM          #" << endl;
            cout << "#                                        #" << endl;
            cout << "##########################################" << endl;
        }
        if (l == 2)
        {
            cout << "\n##########################################" << endl;
            cout << "#                                        #" << endl;
            cout << "#              Twój wybór to             #" << endl;
            cout << "#            PROGRAM REKURENCJI          #" << endl;
            cout << "#                                        #" << endl;
            cout << "##########################################" << endl;
        }
        cout << endl;

        if (l == 1)
        {
            cout << "Enter a number to calculate a factorial: ";
        }
        if (l == 2)
        {
            cout << "Wprowadź liczbę żeby policzyć silnie: ";
        }
        cin >> z;

        int result = factorial(z);
        if (l == 1)
        {
            cout << "Factorial of " << z << " is " << result;
        }
        if (l == 2)
        {
            cout << "Silnia z " << z << " to " << result;
        }
    }
    break;
    }
    cout << endl << endl;

    return 0;
}

void myFunctionEng()
{
    cout << "I just got executed!\n";
}
void myFunctionPl()
{
    cout << "Zostałem wykonany!\n";
}

int multiplied(int x)
{
    return x * 5;
}

int factorial(int x)
{
    if (x > 0)
    {
        return x * factorial(x - 1);
    }
    else
    {
        return 1;
    }
}
