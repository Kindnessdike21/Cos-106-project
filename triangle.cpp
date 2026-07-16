#include <iostream>
using namespace std;

int main() {
    double angle1, angle2, angle3;
    cout <<"enter first angle:";
    cin>> angle1;
    cout <<"enter second angle:";
    cin>> angle2;

    angle3 =180 -(angle1 + angle2);

    if (angle1 <=0|| angle2 <=0 ||angle3 <=0){
        cout <<"invalid triangle angles."<< endl;
    }
    else if (angle1==90 || angle2== 90||angle3 ==90){
        cout<< "the triangle is a right-angled triangle."<<endl;
        cout<<"third angle ="<< angle3 <<"degrees"<<endl;
    }
    else{
        cout<<"the triangle is NOT a right-angled triangle."<<endl;
        cout<<"third angle="<<angle3<<"degrees"<<endl;
    }
    return 0;
}