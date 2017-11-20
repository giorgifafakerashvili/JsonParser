#ifndef JSONPARSER_STRBUFFER_H
#define JSONPARSER_STRBUFFER_H

#include <stdlib.h>

typedef struct {
    char *value;
    size_t length;   /* bytes used */
    size_t size;     /* bytes allocated */
} strbuffer_t;


#endif //JSONPARSER_STRBUFFER_H
