
#include <iostream>
#include "NormalDistribution.h"

using namespace std;
 
int main()
{
    CNormalDistribution cn;

    double x = -3;
    for(int i = 0; i < 6000; i++)
    {
        x += 0.001;
        cout << "std normal:" << x << "," << cn.get_stdNormalProbability(x) << endl;
        cout << "normal    :" << x << ","  << cn.get_NormalProbability(x, 2.5, 8) << endl;
    }

    return 0;
}