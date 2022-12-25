#include <iostream>
using namespace std ; 
int main () 
{
    int no1 = 0 ;
    int no2 = 1 ;
    int number , result; 
    cout << "Enter your number = " ; 
    cin >> number ; 
    
    if (number < 0 ){
        cout << "You can't get fibonacci series form a negative number ! " << endl ;
    }

    else if (number == 1 ){
        cout << no1 << endl ; 
        cout << no2 << endl ; 
    }

    else {
        cout << no1 << endl ; 
        cout << no2 << endl ; 
        for (int i = 2 ; i <= number ; i++){
            result = no1 + no2 ; 
            no1 = no2 ; 
            no2 = result ;
        
            cout << result << endl ; ; 
        } 
    }
}