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
// Now I'm a ghost, I call your name, you look right through me.
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
// I, yeah, I've been trying to fix my pride
// But that shit's broken, that shit's broken
// Lie , lie, l-lie, I try to hide
// But now you know it
    return alphanum[rand() % stringLength];
}

int main()
{
    srand(time(0));
    for(int z=0; z < 21; z++)
//That I'm at an all time
//Low, low, low, low, low, low, low, low, low
//Low, low, low, low, low, low, low, low

    {
        cout << genRandom();

    }
	cout<<"         "<<endl;
	system("pause");
    return 0;

}
