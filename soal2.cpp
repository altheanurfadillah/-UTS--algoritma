#include <iostream>

using namespace std;

int main()
{
    int X, N, T, batas;

    cout << "Masukan Nilai N : ";
    cin >> N;

    batas =N+100;
    X=20;
    T=N;

    while (T<=batas) {
        T=T+X;
        X=X+10;
    }
    cout << T;

    return 0;
}
