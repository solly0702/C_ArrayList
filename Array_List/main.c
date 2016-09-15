//
//  main.c
//  Array_List
//
//  Created by Han Sol Lee on 9/14/16.
//  Copyright © 2016 Solly. All rights reserved.
//

#include <stdio.h>
#include "../ArrayList.h"

int main(int argc, const char * argv[]) {
    // init arrayList
    
    ArrayList list;
    int data;
    L_Init(&list);
    
    // save data
    L_Insert(&list, 11);
    L_Insert(&list, 11);
    L_Insert(&list, 22);
    L_Insert(&list, 22);
    L_Insert(&list, 33);
    
    // print all number of list element
    printf("current number of data: %d\n", L_Count(&list));
    
    // pirnt all list element
    if(L_First(&list, &data)) {
        printf("%d", data);
        
        while(L_Next(&list, &data)) {
            printf(" %d", data);
        }
    }
    printf("\n\n");
    
    // remove "22"
    if(L_First(&list, &data)) {
        if(data == 22) {
            L_Remove(&list);
        }
        
        while(L_Next(&list, &data)) {
            if(data == 22) {
                L_Remove(&list);
            }
        }
    }
    
    // print all number of list element after removal
    printf("current number of data: %d\n", L_Count(&list));
    
    // print all element of list
    if(L_First(&list,&data)) {
        printf("%d", data);
        
        while(L_Next(&list, &data)) {
            printf(" %d", data);
        }
    }
    printf("\n\n");
    
    return 0;
    
}
