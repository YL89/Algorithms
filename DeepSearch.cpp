//use number 1-9 to fill the addition xxx + xxx = xxx i.e. 745 + 218 = 963
//each numbers only appears once
//output the total number of all the possible combinations

#include <iostream>

int number[9] = {0};
int book[9] = {0};
int total = 0;

void fillNext(int cellNo)
{

    if (cellNo == 10)
    {
        if ((100 * number[0] + 10 * number[1] + number[2] + 100 * number[3] + 10 * number[4] + number[5]) == (100 * number[6] + 10 * number[7] + number[8]))
        {
            total++;
            std::cout << total << ": " << number[0] << number[1] << number[2] << " + " << number[3] << number[4] << number[5] << " = " << number[6] << number[7] << number[8] << std::endl;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        if (book[i] == 0)
        {
            book[i] = 1;
            number[cellNo - 1] = i + 1;
            fillNext(cellNo + 1);
            book[i] = 0;
        }
    }
    return;
}

int main()
{

    fillNext(1);

    std::cout << "Total number of combinations: " << total / 2 << std::endl;

    return 0;
}