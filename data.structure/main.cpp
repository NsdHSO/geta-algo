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

struct Rectangle {
    int length;
    int breadth;
};



void swap(int &p, int &b){
    int temp;
    temp = p;
    p = b;
    b = temp;
}

int area (struct Rectangle r ){
    return r.length * r.breadth;;
}

int perimeter(struct Rectangle r){
    return 2*(r.length*r.breadth);
}

struct Rectangle initalizeStruct(struct Rectangle *str){
    cout<<"ENTER Lenght"<<endl;
    cin>>str->length;
    
    cout<<"ENTER breadth"<<endl;
    cin>>str->breadth;
    return *str;
};

int main(int argc, const char * argv[]) {
    
    Rectangle r ={0,0};
    
    initalizeStruct(&r);

    
    int areaS = area(r);
    int peri =perimeter(r);
    
    cout<<"AREA: "<< areaS<<endl<<"PERI: "<<peri<<endl;
    return 0;
}
