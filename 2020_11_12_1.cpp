#include <iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
    /*Start your code here*/
    char* a;
    int* b;
    int* q;
    char* t;

    int i = 0, s = 0;
    a = new char[100];
    q = new int[10];
    b = new int[10];
    char u[100];
    cin.getline(a, 80, '\n');
    
    while (a[i]) {
        while (a[i]&&isspace(a[i]))++i;
        if (!a[i])break;
        b[s] = i;
        s += 1;
        while (a[i]&&!isspace(a[i]))++i;
    }
    cin >> u;
    for (i = 0; i < s; ++i) {
        q[i] = u[i]-'0';
    }
    cout << s<<endl;
    for (i = 0; i < s; ++i) {
        t = a + b[q[i]];
        for (; !isspace(*t)&&*t; t++) {
            cout << *t;
        }
        cout << ' ';
    }
    /*end your code*/
    delete[] a;
    delete[] q;
    delete[] b;
    return 0;
}
