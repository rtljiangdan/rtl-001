#ifndef LW_DEBUG_H
#define LW_DEBUG_H

#define LW_ASSERT(_condition_) \
{ \
	BOOL condition = (_condition_) ? TRUE : FALSE; \
	if(!condition) \
	{ \
		int a = 0; \
		printf("%d", a / 0); \
	} \
}

#define LW_PRINT	printf
#endif
