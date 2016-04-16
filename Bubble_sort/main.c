//
//  main.c
//  Bubble_sort
//
//  Created by 王亓泰 on 16/4/16.
//  Copyright © 2016年 WangQitai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    int a[10] = {5,1,3,9,7,6,4,2,0,8};
    
    for (int i = 0; i<10; i++) {
        printf("%d\n",a[i]);
    }
    
    for (int i = 0; i < 10-1; i++) {
        for (int j = 0; j<10-i-1; j++) {
            if (a[j]>a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    
    
    for (int i = 0; i<10; i++) {
        printf("%d\n",a[i]);
    }
    
    return 0;
}
