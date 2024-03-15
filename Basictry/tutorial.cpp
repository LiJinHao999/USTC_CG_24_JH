#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    double inputValue;
    cout << "请输入要开平方的数";
    cin >> inputValue;
    const double outputValue = sqrt(inputValue);
    cout << inputValue << "的平方根的值" 
              << " 是： " << outputValue
              << endl;
    return 0;
}