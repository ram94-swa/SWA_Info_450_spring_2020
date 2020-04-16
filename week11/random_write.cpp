#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;


int main()
{
    ofstream random;
    if (!random) { //print the text below if random is null!!
        return 1;
    }

    random.open("randoms.txt");
    random << "This program generates a list of 1,000 random integers and writes them to a file." << endl;

    srand (time(0));

    for(int x = 1; x < 1000; x++)
    {
        random << 1 + (rand() % 999) << endl;
    }

    random.close();

    return 0;
}
