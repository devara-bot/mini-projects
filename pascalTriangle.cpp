#include <iostream>

using namespace std;

int main(){
    int baris, kons=1, spasi;
    int i, j;
    cout << "Input number of rows: ";
    cin >> baris;

    for(i = 0;i < baris; i++){
        for(spasi = 1; spasi<=baris-i; spasi++)
            cout << "  ";

        for(j = 0;j <= i; j++){
            if (j==0 || i==0)
                kons=1;
            else
               kons=kons*(i-j+1)/j;

            cout << kons << "   ";
        }
        cout << "\n";
    }

    return 0;
}
