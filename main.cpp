#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <clocale>

using namespace std;

void devTime1(void)
{
    unsigned int counter = 1;
    time_t timer;

    while (1) {
        timer = time(NULL);

        printf("Now is %s", ctime(& timer));
        cout << counter++ << endl << endl;
    }
}

void devTime2(void)
{
    cout << clock() << endl;
}

int main(void)
{
    cout << "Hello again, C++" << endl;

    devTime2();

    return EXIT_SUCCESS;
}
