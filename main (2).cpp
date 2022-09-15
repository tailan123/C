
#include <iostream>

using namespace std;

int main()
{
    
    float a,b,c;
    int i;
    
    cout << "insira o primeiro numero"<<endl;
    cin>>a;
    cout << "insira o segundo numero"<<endl;
    cin>>b;
    cout << "insira o terceiro numero"<<endl;
    cin>>c;
    cout << "digite: 1 para crescente ou 2 para decrescente ou 3 para o maior entre os dois"<<endl;
    cin>>i;
    
    if(i==1 ){
        if(a>b && b>c){
    cout<< "os numeros em ordem crescente sao:  "<< c << ","<< b<<","<<a << endl;
    }
    else if (c>b && b>a){
    cout<< "os numeros em ordem crescente sao:  "<< a  << ","<< b<<","<<c << endl;
    }
    else if (b>c && c>a){
    cout<< "os numeros em ordem crescente sao:  "<< a <<","<< c <<","<<b << endl;
    }
    else if (a>b && c>b && a>c ){
    cout<< "os numeros em ordem crescente sao:  "<< b << ","<< c<<","<<a << endl;
    }
    else if (c>b && a>b && c>a ){
    cout<< "os numeros em ordem crescente sao:  "<< b << ","<< a<<","<<c << endl;
    }
    else if (b>a && a>c && b>c ){
    cout<< "os numeros em ordem crescente sao:  "<< c << ","<< a<<","<<b << endl;
    }
    }
    
    if(i==2 ){
        if(a>b && b>c){
    cout<< "os numeros em ordem decrescente sao:  "<< a << ","<< b<<","<<c << endl;
    }
    else if (c>b && b>a){
    cout<< "os numeros em ordem decrescente sao:  "<< c  << ","<< b<<","<<a << endl;
    }
    else if (b>c && c>a){
    cout<< "os numeros em ordem decrescente sao:  "<< b <<","<< c <<","<<a << endl;
    }
    else if (a>b && c>b && a>c ){
    cout<< "os numeros em ordem decrescente sao:  "<< a << ","<< c<<","<<b << endl;
    }
    else if (c>b && a>b && c>a ){
    cout<< "os numeros em ordem decrescente sao:  "<< c << ","<< a<<","<<b << endl;
    }
    else if (b>a && a>c && b>c ){
    cout<< "os numeros em ordem decrescente sao:  "<< b << ","<< a<<","<<c << endl;
    }
    }
    
    if(i==3 ){
        if(a>b && b>c){
    cout<< "os numeros em ordem crescente com o maior no meio sao:  "<< c << ","<< a<<","<<b << endl;
    }
    else if (c>b && b>a){
    cout<< "os numeros em ordem crescente com o maior no meio sao:  "<< a  << ","<< c<<","<<b << endl;
    }
    else if (b>c && c>a){
    cout<< "os numeros em ordem crescente com o maior no meio sao:  "<< a <<","<< b <<","<<c << endl;
    }
    else if (a>b && c>b && a>c ){
    cout<< "os numeros em ordem crescente com o maior no meio sao:  "<< b << ","<< a<<","<<c << endl;
    }
    else if (c>b && a>b && c>a ){
    cout<< "os numeros em ordem crescente com o maior no meio sao:  "<< b << ","<< c<<","<<a << endl;
    }
    else if (b>a && a>c && b>c ){
    cout<< "os numeros em ordem crescente com o maior no meio sao:  "<< c << ","<< b<<","<<a << endl;
    }
    }
    
    return 0;
    
}
