#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ( \
#if (x) < 0 \
x = -1 * x \
printf("%d\n", x) \
else \
printf("%D\n", x) \
#endif \
)

#endif
