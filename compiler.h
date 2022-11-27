
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

#if defined WINDOWS
#include <direct.h>
#else
#include <unistd.h>
#endif

#define SIZE 10240


char* keywords[26] = {
    "main",   "if",       "then",   "while",  "do",     "static", "defualt",
    "do",     "int",      "double", "struct", "break",  "else",   "long",
    "swtich", "case",     "typedf", "char",   "return", "const",  "float",
    "short",  "continue", "for",    "void",   "sizeof"
};

enum {
    Num = 128, Fun, Sys, Glo, Loc, Id,
    Char, Else, Enum, If, Int, Return, Sizeof, While,
    Assign, Cond, Lor, Lan, Or, Xor, And, Eq, Ne, Lt,
    Gt, Le, Ge, Shl, Shr, Add, Sub, Mul, Div, Mod, Inc, Dec, Brak,
    Var, Separator, Keyw, Other
};

typedef struct node {
    int  key;
    int  type;
    char value[12];
    struct node* next;
}node;