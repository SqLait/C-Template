#include "strings.h"
#include "alloc.h"
#include "debug.h"
#include <string.h>

string c_strmrg(Allocator *a, string ogStr, string appendStr) {
    u32 strLen = ogStr.len + appendStr.len;
    char *buffer = a->alloc(a, strLen + 1);
    memcpy(buffer, ogStr.str, ogStr.len);
    memcpy(buffer + ogStr.len, appendStr.str, appendStr.len);

    return (string) {
        buffer,
        strLen,
        true
    };
}

/*Destroy a count based string*/
void c_strdestr(Allocator *a, string *src) {
    if (src->is_heap) {
        a->free(a, src->str);
        *src = (string) {};
    } else {
        *src = (string) {};
    }
}

/*Compares 2 strings to each other.*/
bool c_strcmp(string *str1, string *str2) {
    if (str1->len != str2->len)
        return false;

    for (int i = 0; i < str1->len; i++) {
        if (str1->str[i] != str2->str[i])
            return false;
    }
    return true;
}

/*Copies src string into dest string*/
void c_strcpy(Allocator *a, string *src, string *dest) {
    if (src->len == dest->len) {
        for (int i = 0; i < src->len; i++) {
            dest->str[i] = src->str[i];
        }
    } else if (src->len > dest->len) {
        if (a == nullptr) {
            fprintf(stderr, "Error in c_strcpy: tried to increase size of dest but a nullptr was passed as an allocator.");
            return;
        }
    }
}
