//
//  ArrayList.c
//  Array_List
//
//  Created by Han Sol Lee on 9/14/16.
//  Copyright © 2016 Solly. All rights reserved.
//

#include <stdio.h>
#include "ArrayList.h"

void L_Init(List *plist) {
    (plist -> numOfData) = 0;
    (plist -> curPosition) = -1;
}

void L_Insert(List *plist, Data data) {
    if(plist -> numOfData > LIST_LEN) {
        puts("exceed MAX_NUM of data");
        return ;
    }
    
    plist -> arr[plist->numOfData] = data;
    (plist -> numOfData)++;
}

int L_First(List *plist, Data *pdata) {
    if(plist -> numOfData == 0) {
        return FALSE;
    }
    (plist -> curPosition) = 0;
    *pdata = plist -> arr[0];
    return TRUE;
}

int L_Next(List *plist, Data *pdata) {
    if(plist -> curPosition >= (plist -> numOfData)-1) {
        return FALSE;
    }
    (plist -> curPosition)++;
    *pdata = plist -> arr[plist->curPosition];
    return TRUE;
}

Data L_Remove(List *plist) {
    int rpos = plist -> curPosition;    // index for the remove
    int num = plist -> numOfData;
    int i;
    Data rdata = plist -> arr[rpos];    // temp data for remove
    
    for(i=rpos; i<num-1; i++) {
        plist -> arr[i] = plist -> arr[i+1];
    }
    
    (plist -> numOfData)--;     // total data - 1
    (plist -> curPosition)--;   // current postion -1 becuase of removal
    return rdata;               // return removed data
}

int L_Count(List *plist) {
    return plist -> numOfData;
}
