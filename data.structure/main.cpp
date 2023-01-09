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
void swap(int &p, int &b){
    int temp;
    temp = p;
    p = b;
    b = temp;
}

int main(int argc, const char * argv[]) {
    int length=0, breadth=0;
    
    cout<<"ENTER Lenght"<<endl;
    cin>>length;
    
    cout<<"ENTER breadth"<<endl;
    cin>>breadth;
    
    int area = length * breadth;
    int peri = 2 *(length+breadth);
    
    cout<<"AREA: "<< area<<endl<<"PERI: "<<peri<<endl;
    return 0;
}
