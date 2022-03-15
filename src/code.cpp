#include <cpp11.hpp>

void buggy_fill(cpp11::writable::doubles& x, double value) {
  R_xlen_t size = x.size();

  for (R_xlen_t i = 1; i <= size; ++i) {
    x[i] = value;
  }
}

[[cpp11::register]]
cpp11::writable::doubles buggy_init(cpp11::integers size) {
  R_xlen_t c_size = static_cast<R_xlen_t>(size[0]);
  cpp11::writable::doubles out(c_size);
  buggy_fill(out, 2);
  return out;
}
