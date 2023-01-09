//
//  main.cpp
//  data.structure
//
//  Created by David Nechiforel on 07.01.2023.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Rectangle {
public:
    int length;
    int breadth;
    
    int area ( ){
        return length * breadth;;
    }

    int perimeter(){
        return 2*(length*breadth);
    }

    void initalizeStruct(){
        cout<<"ENTER Lenght"<<endl;
        cin>>length;
        
        cout<<"ENTER breadth"<<endl;
        cin>>breadth;
    };

};



void swap(int &p, int &b){
    int temp;
    temp = p;
    p = b;
    b = temp;
}


int main(int argc, const char * argv[]) {
    
    Rectangle r ={0,0};
    
    r.initalizeStruct();

    
    int areaS = r.area();
    int peri =r.perimeter();
    
    cout<<"AREA: "<< areaS<<endl<<"PERI: "<<peri<<endl;
    return 0;
}
