#ifndef RADICAL_H
#define RADICAL_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "disk.h"
#include "struct.h"
#include <math.h>

    typedef struct radix radix;

    enum errors {
        NO_ERROR = 0,
        ERROR
    };

    radix radical(radix *data, int *err);

#endif // RADICAL_H
