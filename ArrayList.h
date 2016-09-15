//
//  ArrayList.h
//  Array_List
//
//  Created by Han Sol Lee on 9/14/16.
//  Copyright © 2016 Solly. All rights reserved.
//
#include "Point.h"

#ifndef ArrayList_h
#define ArrayList_h

#define TRUE 1
#define FALSE 0

// ArrayList Definition
#define LIST_LEN 100
typedef Point *Data;

typedef struct _ArrayList {
    Data arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;

// List of Function for ArrayList
typedef ArrayList List;

void L_Init(List *plist);
void L_Insert(List *plist, Data data);

int L_First(List *plist, Data *pdata);
int L_Next(List *plist, Data *pdata);

Data L_Remove(List *plist);
int L_Count(List *plist);


#endif /* ArrayList_h */
