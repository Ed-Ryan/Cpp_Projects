#include<iostream>
#include<fstream>
#include<string>
using namespace std;

bool IsLoggedIn() {
    string username, password, user, pass;
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;

    ifstream read("filePath\\"+username+ ".txt");
    getline(read, user);
    getline(read,pass);

    if(user == username && pass == password) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    while(1){
        int choice;
        cout<<"1: Register"<<endl<<"2:Login"<<endl<<"Your choice: ";
        cin>>choice;
        if(choice == 1) {
            string username, password;
            cout<<"Select desired username: ";
            cin>>username;
            cout<<"Select desired password: ";
            cin>>password;

            ofstream file;
            file.open("filePath\\"+username+".txt"));
            file<<username<<endl<<password;
            file.close();

            main();
        }
        else if(choice ==2) {
            bool status = IsLoggedIn();

            if(!status) {
                cout<<"False Login! Try again..."<<endl;
                return 0;
            }
            else {
                cout<<"Succesfully logged in!"<<endl;
                return 1;
            }
            break;
        }
        else {
            cout<<"You almost got away with it..."<<endl;
        }
    }
}