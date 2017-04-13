//////////////////////////////////////////////////////////
//Random Password generator (PayPal, Blockchain, Skrill)//
//Coded by nef0s                                       //
////////////////////////////////////////////////////////


/////////////////////
#include "stdafx.h"//
#include <iostream>//
#include <string>  //
#include <cstdlib> //
#include <ctime>   //
/////////////////////
using namespace std;
static const char alphanum[] =
//////////////////////////////////
"0123456789"                   //
"!#$%&/()=?*+'~^|\}{[]><;:-_,."//
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"   //
"abcdefghijklmnopqrstuvwxyz";  //
/////////////////////////////////
int stringLength = sizeof(alphanum) - 1;

char genRandom()
{
    return alphanum[rand() % stringLength];
}

int main()
{
    srand(time(0));
    for(int z=0; z < 21; z++)

    {
        cout << genRandom();

    }
	cout<<"         "<<endl;
	system("pause");
    return 0;

}
