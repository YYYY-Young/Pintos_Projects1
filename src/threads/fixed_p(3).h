#ifndef FIXED_POINT_H
#define FIXED_POINT_H

#define fp_t int
#define P 17
#define Q 14
#define F 1<<(Q)


#define INT_ADD(x, n) (x) + (n) * (F)
#define INT_SUB(x, n) (x) - (n) * (F)
#define CONVERT_TO_FP(x) (x) * (F)
#define CONVERT_TO_INT_ZERO(x) (x) / (F)
#define CONVERT_TO_INT_NEAR(x) ((x) >= 0 ? ((x) + (F) / 2) / (F) : ((x) - (F) / 2) / (F))
#define FP_MUL(x, y) ((int64_t)(x)) * (y) / (F)
#define FP_DIV(x, y) ((int64_t)(x)) * (F) / (y)



#define ADD(x,y)                  ((x)+(y))
#define SUB(x,y)                  ((x)-(y))
#define MUL(x,n)                    ((x)*(n))
#define DIV(x,n)                      ((x)/(n))

#endif 
