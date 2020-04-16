#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;


int main()
{
    ofstream random;
    if (!random) { //if random is null then print below text
        return 1;
    }

    random.open("randoms.txt");
    random << "This is a random number genartor code" << endl;

    srand (time(0));

    for(int x = 1; x < 1000; x++)
    {
        random << 1 + (rand() % 999) << endl;
    }

    random.close();

    return 0;
}