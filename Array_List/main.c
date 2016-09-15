//
//  main.c
//  Array_List
//
//  Created by Han Sol Lee on 9/14/16.
//  Copyright © 2016 Solly. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "../ArrayList.h"
#include "Point.h"

int main(int argc, const char * argv[]) {
    // init arrayList
    List list;
    Point compPos;
    Point *ppos;
    
    L_Init(&list);
    
    // save 4 Points
    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    L_Insert(&list, ppos);
    
    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 2, 2);
    L_Insert(&list, ppos);
    
    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 1);
    L_Insert(&list, ppos);
    
    ppos = (Point*)malloc(sizeof(Point));
    SetPointPos(ppos, 3, 2);
    L_Insert(&list, ppos);
    
    // print saved list
    printf("Current number of data: %d \n", L_Count(&list));
    
    if(L_First(&list, &ppos)) {
        ShowPointPos(ppos);
        
        while(L_Next(&list, &ppos)) {
            ShowPointPos(ppos);
        }
    }
    
    printf("\n");
    
    // delete xpos == 2 in point
    compPos.xpos = 2;
    compPos.ypos = 0;
    
    if(L_First(&list, &ppos)) {
        if(CompPoint(ppos, &compPos) == 1) {
            ppos=L_Remove(&list);
            free(ppos);
        }
        while(L_Next(&list, &ppos)) {
            if(CompPoint(ppos, &compPos) == 1) {
                ppos=L_Remove(&list);
                free(ppos);
            }
        }
    }
    
    // print data of point after remove
    printf("Current number of data: %d \n", L_Count(&list));
    
    if(L_First(&list, &ppos)) {
        ShowPointPos(ppos);
        
        while(L_Next(&list, &ppos)) {
            ShowPointPos(ppos);
        }
    }
    
    printf("\n");
    
    return 0;
}
