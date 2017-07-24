//
//  main.cpp
//  testcpp
//
//  Created by Jiayu li on 2017-07-23.
//  Copyright © 2017 Jiayu li. All rights reserved.
//

#include <iostream>



#include <stdio.h>
typedef int (*ADDPROC)(int,int);
int funcadd(int i1, int i2) {
    return i1+i2;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int i1=100;
    char str[10] ="12345abcd";
    char c = 'a';
    int i2 = funcadd(100,200);
    
    int * p = NULL;
    p = &i2;
    printf("%d %s %d %d\n",i1,str,i2,*p);
    
    *p =5000;
    printf("%d %d\n",i2,*p);
    
    ADDPROC padd;
    padd = funcadd;
    int i3 = padd(20,2);
    printf("%d\n",i3);
    for (int j=1;j<=100;j++) {
        printf("%d\n",j);
    }
    
    int i4 = 0;
    try
    {
        int i6=0xffffff;
        int i7=0xffffff;
        short i5 = i6*i7;
        printf("no error %d\n",i5);
    }
    catch(...) {
        printf("error occurs!");
        
    }
    printf("abc\n");
    return 0;
}

