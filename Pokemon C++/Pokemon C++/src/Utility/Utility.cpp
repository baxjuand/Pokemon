//
//  Utility.cpp
//  Pokemon C++
//
//  Created by David Bayona on 12/04/25.
//
#include "Utility.hpp"
#include <iostream>
#include <limits>
using namespace std;

namespace N_Utility
{

void Utility::clearConsole()
{
    (void)system("clear");
    //Will not work as I'm on a mac.
}

void N_Utility::Utility::waitForEnter()
{
    cout << "(Press Enter to continue)" << endl;
    cin.get();
}

void Utility::clearInputBuffer()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

}
