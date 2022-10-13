#ifndef PINTOS_FIXED_POINT_ARITHMETIC_H
#define PINTOS_FIXED_POINT_ARITHMETIC_H

#define FIXED_POINT_BINARY_POINT 14
#define FIXED_POINT_F (1<<FIXED_POINT_BINARY_POINT)
typedef int fixed_point;

// Convert int to fixed_point
#define FP(N) ((fixed_point) N * FIXED_POINT_F)
// Round logic
#define FP_ROUND_FLOOR(X) (X / FIXED_POINT_F)
#define FP_ROUND_NEAREST(X) (X>=0 ? ((X + FIXED_POINT_F / 2) / FIXED_POINT_F) : ((X - FIXED_POINT_F / 2) / FIXED_POINT_F))
// Add logic
#define FP_ADD(X, Y) (X + Y)
#define FP_ADD_INT(X, N) (X + N * FIXED_POINT_F)
// Sub logic
#define FP_SUB(X, Y) (X - Y)
#define FP_SUB_INT(X, N) (X - N * FIXED_POINT_F)
// Multiply
#define FP_MUL(X, Y) ((((int64_t) X) * Y) / FIXED_POINT_F)
#define FP_MUL_INT(X, N) (X * N)
// Divide
#define FP_DIV(X, Y) ((((int64_t) X) * FIXED_POINT_F) / Y)
#define FP_DIV_INT(X, N) (X / N)

#endif //PINTOS_FIXED_POINT_ARITHMETIC_H
