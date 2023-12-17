
#pragma once

void cilk_reducer_zero(void *v);
void cilk_reducer_plus(void *l, void *r);
void max_reducer_identity(void *view);
void max_reducer_reduce(void *left, void *right);
