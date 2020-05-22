#include <iostream>

using namespace std;

long double ciag(int n)
{
    if(n == 0)
    {
        return 0.5;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return (ciag(n-2)-ciag(n-1))*ciag(n-2);
    }
}

int main()
{
    cout << "Podaj do ktorego wyrazu wyswietlic: ";
    int koniec;
    cin >> koniec;
    
    while(koniec < 0)
    {
        cout << "Koniec ciagu nie może byc mniejszy od zera. Podaj go ponownie: ";
        cin >> koniec;
    }

    for(int i = 0; i <= koniec; i++)
    {
        cout << "Wyraz [" << i << "]: " << ciag(i) << endl;
    }

    return 0;
}
