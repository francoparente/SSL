#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#pragma once

typedef enum{
    FDT,
    CAD,
    SEP
    }Token;

Token get_token();