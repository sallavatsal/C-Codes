//
//  lcmGcd.c
//  ccccccccccccc
//
//  Created by Vatsal Salla on 6/13/18.
//  Copyright © 2018 Vatsal Salla. All rights reserved.
//

#include <stdio.h>

int main() {

    int i, num1, num2, LCM=1, GCD=1;
    
    printf("Enter two number: \n");
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    for(i = 2; i <= num1 && i <= num2; i++){
        
        if(num1%i == 0 && num2%i == 0){
            GCD = i ;
        }

        else
            continue;
    }
    
    LCM = num1*num2/GCD;
    
    printf("LCM = %d \t GCD = %d\n", LCM, GCD);
}
