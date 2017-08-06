#ifndef LW_DEF_H
#define LW_DEF_H

typedef int BOOL;
#undef TRUE
#undef FALSE
#define TRUE	(1)
#define FALSE	(0)

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;

#undef NULL
#define NULL	((void*)0)

#endif
