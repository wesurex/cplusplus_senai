#include <iostream>
#include <vector>
using namespace std;

int evenOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is even" << endl;
        return 1;
    }
    else
    {
        cout << n << " is odd" << endl;
        return 0;
    }
    return 0;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int countEven = 0;
    int countOdd = 0;
    for (int n : numbers)
    {
        int pairCount = evenOdd(n);
        if (pairCount == 1)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout << "Total even numbers: " << countEven << endl;
    cout << "Total odd numbers: " << countOdd << endl;
    return 0;
}
