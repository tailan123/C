
#include <iostream>

using namespace std;

int main()
{
    int N, i = 0;
    float E, den = 1, num = 1;
    cout << "Valor de N" << endl;
    cin >> N;
    
    do{
        den = den * (i + 1) ;
        E = E +(num / den);
        
     i++;   
    }while(i <= N);
    cout << E;
    

    return 0;
}