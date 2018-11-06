#include <iostream>

using namespace std;

int main()
{

    int A, B, X, Y;

    cout << "Masukan Nilai A :";
    cin >> A;
    cout << "Masukan Nilai B :";
    cin >> B;

    X=A;
    Y=B;

    while (X!=Y){
        if (X<Y)
            X=X+A;
        else
            Y=Y+B;
    }

    cout << X;

    return 0;
}
