#include <iostream>
#include <iomanip>
#include <time.h>
#include "problem9.cpp"

using namespace std;

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 500; i++)
    {
        int random = rand() % 100;

        insert(random, "Shajie", random, random);
    }
    display();
}