#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
    //required libraries


using namespace std;

int main()
{
    string firstname;    //string, char and int variables
    string lastname;
    char eat;
    string admin;
    int i=0;

    top:
    i++;
    cout << "*************************************" << endl;
    cout << "*  Welcome to Manu's Food Machine!  *" << endl;
    cout << "*Prepares Delicious Items Instantly!*" << endl; //appropriate opening screen
    cout << "*************************************" << endl;



    cout << "Hello, please enter your first name: ";   //asks user for first and last name
    cin >> firstname;

    cout << "Please enter your last name: ";
    cin >> lastname;


    cout << "\n\nHi " << firstname << " " << lastname << ", let's get started. The following are the available menu options:\n" << endl;
    cout << " Menu Choices\t\t\tPrices" << endl;
    cout << " R - Rice Pilaf\t\t\t$5.00" << endl;
    cout << " A - Anna Potatoes\t\t$2.25" << endl;                //offers user the menu choice
    cout << " T - Tuna on Toast\t\t$7.00" << endl;
    cout << " G - Grilled Cheese Sandwich\t$6.75" << endl;
    cout << " S - Veggie Samosa\t\t$1.00" << endl;
    cout << " D - Soft Drinks\t\t$1.25" << endl;


    cout << "\nWhat would you like to eat? (Please enter corresponding letter): ";
    cin >> eat;                                                      // asks user what they would like to eat

    while(firstname=="Kent"&& lastname=="Armstrong"&& eat=='K')
    {
        cout << "The machine has been shut down." << endl; // the machine will shut down after admin enter his name and "K"
        exit(EXIT_FAILURE);
    }

    if(eat=='r'|| eat=='R')    //if statements to display deposit amount and let him/her know the food is being prepared
    {
        cout << "Please deposit $5.00 into the machine, Your delicious Rice Pilaf is currently being prepared!" << endl;
    }
    else if(eat=='a'|| eat=='A')
    {
        cout << "Please deposit $2.25 into the machine, Your delicious Anna Potatoes is currently being prepared!" << endl;
    }
    else if(eat=='t'|| eat=='T')
    {
        cout << "Please deposit $7.00 into the machine, Your delicious Tuna on Toast is currently being prepared!" << endl;
    }
    else if(eat=='g'|| eat=='G')
    {
        cout << "Please deposit $6.75 into the machine, Your delicious Grilled Cheese Sandwich is currently being prepared!" << endl;
    }
    else if(eat=='s'|| eat=='S')
    {
        cout << "Please deposit $1.00 into the machine, Your delicious Veggie Samosa is currently being prepared!" << endl;
    }
    else if(eat=='d'|| eat=='D')
    {
        cout << "Please deposit $1.25 into the machine, Your Soft Drink is currently being prepared!" << endl;
    }
    else
    {
        cout << "That is not a proper menu choice. I'll assume that you are not hungry." << endl;   //error message
    }

    if(i==1000)  //machine will shut down after 1000 customers
    {
        cout << "\nThe machine needs to rebuild its resources. The machine has been shut down." << endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        cout << "\nI will now help the next person." << endl; //program will continue to help the next person
        system ("PAUSE");
        system("CLS"); //clears the screen
        goto top;    //goto loop to reorder food
    }

    return 0;
}
