#include<iostream>
#include<string>
using namespace std;
int String2Int(const string& str){
    int length = str.length();
    if (length < 0)
    {
        cout << "Invalid" << endl;
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < length; ++i)
    {
        int tmp = str[i] - 'A';
        if (tmp >= 26 || tmp <0)
        {
            cout << "Invalid" << endl;
            return -1;
        }
        sum = sum * 26 + tmp +1;
    }
    return sum;
}


int main(){
    string str;
    while(getline(cin, str))
        cout << str << ":" << String2Int(str) << endl;
        return 0;
}