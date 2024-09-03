#include <iostream>
using namespace std;

int main ()
{
    int n1, n2;
    int N, New;
    int i = 0;

    cin >> n1 >> n2;
    cin >> N;

    cout << n1 << "\t" << n2 << "\t";
    for (int i =0; i < N; i++){
        New = n1 + n2;
        n1 = n2;
        n2 = New;
        cout << New << " ";
    }

}
