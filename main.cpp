#include <cstdio>
#include <ctime>
#include <iostream>

using namespace std;

void debugTime(void)
{
    unsigned int counter = 1;
    time_t timer;

    while (1) {
        timer = time(NULL);

        printf("Now is %s", ctime(& timer));
        cout << counter++ << endl << endl;
    }
}

int main(void)
{
    cout << "Hello again, C++" << endl;
    debugTime();

    return 0;
}
