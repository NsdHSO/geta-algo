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

struct Student{
    char firstName[25];
    char lastName[25];
    char address[50];
};

int * newArray(int length){
    int *p = (int *)malloc(sizeof(int) * length);
    return p;
}

 void name(struct Student *student){
     student->lastName[0]='t';
    

    
 };

int sumNaturalNumb(int n){
    if(n>0){
        return sumNaturalNumb(n-1)+n ;
    }
    return 0;
}

int power (int x, int n){
    if(n<=0){
        return 1;
    }
    return power(x, n-1) * x;
}

int powe2(int x, int n){
    if(n<=0){
        return 1;
    }
    if(n%2==0){
        return powe2(x*n, n/2);
    }
    return x*powe2(x*n, (n-1)/2);
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return factorial(n-1)*n;
}

double taylorSer (double x,double number){
    static double p =1, f = 1;
    double r;
    if(number == 0){
        return 1;
    }
    r = taylorSer(x, number-1);
    p = p*x;
    f = f * number;
    return r + p/f;
}

double taylorWithHorner(double x, double number){
    static double sum = 1;
    if(number == 0 ){
        return sum;
    }
    sum = 1 + (x/number * sum);
    return taylorWithHorner(x, number - 1 );
}

int fibonaci(int number){
    if(number ==1){
        return 1;
    }
    return fibonaci(number - 1) + number;;
}
static float recureCall[] ={};

void initList(int number, int length,float  numbers[]){
    int i = 0;
    while (i <= length) {
        numbers[i] = number;
        i++;
    }
}

int fiv ( int number){
    
    if(number <= 1){
        recureCall[number] = number;
        return number;
    }
    else{
        if(recureCall[number-2] == -1){
            recureCall[number-2] = fiv(number-2);
        }
        if(recureCall[number -1]== -1){
            recureCall[number-1] = fiv(number-1);
        }
        return recureCall[number-2] + recureCall[number -1];
    }

}
int main(int argc, const char * argv[]) {
    int d;
    cout<<"ENTER Fibonaci Number"<<endl;
    cin>>d;
    initList(-1,d-1 ,recureCall);
    
    cout<<fiv(d)<<endl;
    for (int i = 0 ; i< d-1; i++){
        cout<<recureCall[i]<<' ';
    }
    return  0;
    
    
}
