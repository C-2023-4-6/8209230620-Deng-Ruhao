#include<iostream>
using namespace std;

int parseHex(const char* const hexString) 
{
    int dec = 0;
    //for (int c = 0; c < sizeof(*hexString) / sizeof(char); c++)不行，因为第一个sizeof算的是数组里第一个元素的长度 结果为1
    for (int c = 0; c < strlen(hexString); c++)
    {   
        int digit = 0;
        if (hexString[c] >= '0' &&hexString[c] <= '9') {
            digit = hexString[c] - '0';
        }
        else if (hexString[c] >= 'A' &&hexString[c] <= 'F') {
            digit = hexString[c] - 'A' + 10;
        }
        else if (hexString[c] >= 'a' && hexString[c] <= 'f') {
            digit = hexString[c] - 'a' + 10;
        }
        else {
            cout << "无效的16进制数字" << endl;
            return 0; 
        }
        dec = dec * 16 + digit;
    }
    return dec;

}

int main()
{
    char num_16[20] = { 0 };
    cin >> num_16;
    cout<< parseHex(num_16);
    return 0;
}