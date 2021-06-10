#include <iostream>

using namespace std;

int main(){
    while(true){
        int num;
        cout <<"Display a multiplication table press 1. "<<endl;
        cout << "Double a value press 2."<< endl;
        cout << "Exit press 3. ";
        cin >> num;
        if (num == 1 ){
            cout <<"Call python multiplication funciton here";//Change to name of python function
        }
        else if(num == 3){
            cout << "call python doube a value function here"; // chang to name of python function
        }
        else if (num == 3){
            break;
        }
        else{
            cout <<"Only Numbers 1,2,3 are Allowed!";
        }
    }
    return 0;
}
