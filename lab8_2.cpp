#include <iostream>
#include <string>
using namespace std;

int main(){
    string name , mov , day ,smth;
    int id;
    
//input name  include space

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n" << "?????: "; 
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl ;
    
//input id and calculate gear of entaneer
    
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << (id/10000000)-12 <<". I have a free movie ticket for you." << endl;

//movie name

    cout << "Fahsai: Let's go to the cinema together!!!" << "\n" << "Fahsai: What movie do you want to watch?" << endl ;
    cout << name <<": ";
    getline(cin,mov);

//time to see movie
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name <<": ";
    getline(cin,day);
    cout << "Fahsai: " << day <<"....that is OK!!! I'm looking forward to watching " << mov << " with you." << endl;
//say something hahaha
    cout << name <<": ";
    getline(cin,smth);

//end of situation
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";

    return 0;
//All done!
}	