#include<iostream>
using namespace std;

int main(){
    int i=1, Even=0, Odd=0;
    

    while(i!=0){
        cout << "Enter an integer: ";
        cin >> i;
        if (i==0){
            cout << "#Even numbers = " << Even <<"\n";
            cout << "#Odd numbers = " << Odd;
            return 0;
        }
        if(i%2==0){
        Even++;
    }
     if(i%2==1){
        Odd++;
    }
    
    }


    
    cout << "#Even numbers = " << Even <<"\n";
    cout << "#Odd numbers = " << Odd;
    return 0;
}
