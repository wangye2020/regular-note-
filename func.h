#pragma once
#include<stdint.h>
typedef unsigned long long  UINT64;
 struct  mystruct{
    int a;
    char c;
    int b;
    
};
struct timestuff_t {
    int8_t hours;
    uint32_t micros;
    uint16_t seconds;
}timestuff_t;
typedef struct  mystruct mystruct;
typedef struct timestuff_t timestuff_t;