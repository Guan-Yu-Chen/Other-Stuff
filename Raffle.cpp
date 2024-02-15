#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

int main() {
    system("chcp 65001");
    double x;
    bool bingo = false;
    int times;
    double TestTimes = 10000000.0;
    int bingo_10 = 0;
    int bingo_20 = 0;
    int bingo_30 = 0;
    int bingo_32 = 0;
    int bingo_40 = 0;
    srand(time(0));

    for(int i = 0 ; i < TestTimes ; i++)
    {
        times = 0;
        bingo =false;
        while(!bingo)
        {
            x = rand() / (double) RAND_MAX;
            if(x <= 0.05)
            {
                bingo = true;
            }
            times++;
        }

        if(times <= 10)
        {
            bingo_10++;
        }
        if(times <= 20)
        {
            bingo_20++;
        }
        if(times <= 30)
        {
            bingo_30++;
        }
        if(times <= 32)
        {
            bingo_32++;
        }
        if(times <= 40)
        {
            bingo_40++;
        }
    }

    cout << "10抽以內中的機率: " << bingo_10/TestTimes << endl;
    cout << "20抽以內中的機率: " << bingo_20/TestTimes << endl;
    cout << "30抽以內中的機率: " << bingo_30/TestTimes << endl;
    cout << "40抽以內中的機率: " << bingo_40/TestTimes << endl;

    cout << "\n32抽沒中的機率: " << 1 - (bingo_32/TestTimes) << endl;


    return 0;
}
