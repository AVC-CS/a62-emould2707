//
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

int getRandom(void)
{
    // TODO
    return rand() % 100;
    // TODO
}

int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
    // TODO
    double mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;
    int closest = rdnum1;
    double minGap = fabs(rdnum1 - mean);
    if (fabs(rdnum2 - mean) < minGap) {
        closest = rdnum2;
        minGap = fabs(rdnum2 - mean);
    }
    if (fabs(rdnum3 - mean) < minGap) {
        closest = rdnum3;
    }
    return closest;
    // TODO
}
