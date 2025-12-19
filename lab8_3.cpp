#include <iostream>
using namespace std;

string character(int age, int height, int bounty){
    if(age <= 25){
        if(height < 100)
            return "Your character = Chopper";
        else if(height < 180)
            return "Your character = Usopp";
        else if(bounty > 1100000000)
            return "Your character = Zoro";
        else
            return "Your character = Sanji";
    }
    else if(age <= 60){
        if(bounty > 500000000)
            return "Your character = Jinbe";
        else
            return "Your character = Franky";
    }
    else
        return "Your character = Brook";
}

int main(){
    int age, height = 0, bounty = 0;

    cout << "Enter your age: ";
    cin >> age;

    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;

        if(height >= 180){
            cout << "Enter your bounty: ";
            cin >> bounty;
        }
    }
    else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty;
    }

    cout << character(age, height, bounty);
}
