#include <iostream>
using namespace std;

int main(){
    int number;

    cin>>number;
    if( number > 95){
        cout<<"Gradet A"<<endl;
    }
     
    cin>>number;
     if(number > 80 && number <= 95){
        cout<<"Grade B"<<endl;
    }
    else{
        cout<<"Grade C";
    }

    
}