#include <iostream>
using namespace std;

int main(){

    //Declare variable value assigned 
    string studentID="PP12213";
    string studentname="23";
    int studentage=75;
    char studentgrade='B';
    string studentgender="male";
    int studentfee=12345;

    cout<<"studentID "<<studentID<<endl;
    cout<<"studentname "<<studentname<<endl;
    cout<<"studentage "<<studentage<<endl;
    cout<<"studentgrade "<<studentgrade<<endl;
    cout<<"studentgender "<<studentgender<<endl;
    cout<<"studentfee "<<studentfee<<endl;

    //Declare default variable 
    string ID;
    string name;
    int age;
    char grade;
    string gender;
    int fee;

    cout<<"enter ID : "<<endl;
    cin>>ID;
    cout<<"enter name : "<<endl;
    cin>>name;
    cout<<"enter age : "<<endl;
    cin>>age;
    cout<<"enter grade : "<<endl;
    cin>>grade;
    cout<<"enter gender : "<<endl;
    cin>>gender;
    cout<<"enter fee : "<<endl;
    cin>>fee;

    cout<<"STUDENT INFORMATION BELOW : \n";
    cout<<"Student ID: "<<ID<<endl;
    cout<<"Student name: "<<name<<endl;
    cout<<"Student age: "<<age<<endl;
    cout<<"Student grade: "<<grade<<endl;
    cout<<"Student gender: "<<grade<<endl;
    cout<<"Student fee: "<<fee<<endl;

    
    return 0;
}