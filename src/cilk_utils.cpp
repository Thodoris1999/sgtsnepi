
#include "cilk_utils.hpp"
#include "types.hpp"

#include <limits>
#include <algorithm>

void cilk_reducer_zero(void *v) {
  *(coord *)v = 0;
}

void cilk_reducer_plus(void *l, void *r) {
  *(coord *)l += *(coord *)r;
}

void max_reducer_identity(void *view) { *(coord *)view = std::numeric_limits<coord>::lowest(); }

void max_reducer_reduce(void *left, void *right) {
  *(coord *)left = std::max(*(coord *)left, *(coord *)right);
}
