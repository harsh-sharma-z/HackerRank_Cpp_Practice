#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    string str;
    cin >> str;
    int l=str.length();
    
    for(int i=0;i<l;i++)
    {
        char c;
        c=str[i];
        if(c==',')
            printf("\n");
        else
            printf("%c",str[i]);
    }
    return 0;
}
