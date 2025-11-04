#include <iostream>
#include <vector>
using namespace std;

// 功能：計算平均值
double calculateAverage(const vector<int> &numbers)
{
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }
    return static_cast<double>(sum) / numbers.size();
}

int main()
{
    vector<int> data = {10, 20, 30, 40, 50};
    cout << "平均值: " << calculateAverage(data) << endl;
    return 0;
}
