//
//  main.c
//  10-6
//
//  Created by MacBook Air on 2023/11/12.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE* fp;
    char c;
    
    fp = fopen("sample.txt", "r");
    if(fp == NULL)
    {
        printf("failed to open\n");
        return 0;
    }
    
    while((c=fgetc(fp)) !=EOF)
    {
        putchar(c);
    }
    
    fclose(fp);
    
    return 0;
}
