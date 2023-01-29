//This Program is written by Yuvraj Singh(@yuvrajSingh175)

#include<iostream>
#include<cmath>

using namespace std;

void log(){
    float val = 0.0;
    cout<<"Enter the value to calculate log(x): "<<endl;
    cin>>val;
    cout<<"log("<<val<<") = "<<log(val)<<endl;
};

void arithmetic(){
    float x = 0.0;
    float y = 0.0;
    int opn = 0;

    cout<<"Enter first number: "<<endl;
    cin>>x;
    cout<<"Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division"<<endl;
    cin>>opn;
    cout<<"Enter second number: "<<endl;
    cin>>y;

    cout<<"Your Result is: "<<endl;
    switch (opn)
    {
    case 1:
        cout<<(x+y)<<endl;
        break;
    case 2:
        cout<<(x-y)<<endl;
        break;
    case 3:
        cout<<(x*y)<<endl;
        break;
    case 4:
        cout<<(x/y)<<endl;
        break;
    default:
        cout<<"Bruh! Your Entered an invalid operation -_-"<<endl;
        break;
    }

}

void expo(){
    float base = 0.0;
    float expo = 0.0;

    cout<<"Enter base: "<<endl;
    cin>>base;
    cout<<"Enter exponent: "<<endl;
    cin>>expo;
    cout<<base<<" raised to power "<<expo<<" is "<<pow(base, expo)<<endl;
}

int main(){
    int operation = 0;
    char choice = 'Y';
    cout<<"Hello User!\n*** Welcome to this advance calculator ***\nWith this calculator you can perform Arithmetic operations,logarithmic operations and exponential operations."<<endl;
    cout<<"Press 1 for arithmetic operation\nPress 2 for logarithmic operation\nPress 3 for exponential operation"<<endl;
    while(choice == 'Y'){
        cin>>operation;
        switch (operation)
        {
        case 1:
            arithmetic();
            break;
        case 2:
            log();
            break;
        case 3:
            expo();
            break;
        
        default:
            cout<<"You should Press a Valid Operation\nDon't Worry Though!\nNew Operations will be added in the next commit to this repository ;)"<<endl;
            break;
        }
        cout<<"You still got homework left and wanna continue using the calculator??"<<endl;
        cout<<"Press Y to Continue and N to Stop"<<endl;
        cin>>choice;
        if(choice=='N'){
            break;
        }
    }
    return 0;
}