#include <stdint.h>
typedef struct { uint32_t sw; uint64_t a; } OBF;
// OBF guest_tbl[] = {
//   { 0x96e9a408, 0x2b7 },
//   { 0xa444f589, 0x587 },
//   { 0x557d900d, 0x287 },
//   { 0xb6b61d0e, 0x1fe },
//   { 0xd8492b94, 0x621 },
//   { 0x5e2256c4, 0x662 },
//   { 0x6cde8c20, 0x3bb },
//   { 0x3495512b, 0x56c },
//   { 0x295395b1, 0x5f8 },
//   { 0xc85cb441, 0x2a5 },
//   { 0xc76852c2, 0x40f },
//   { 0x952274c4, 0x269 },
//   { 0x799988e1, 0x172 },
//   { 0xfff026c8, 0x1ef },
//   { 0x2cd1c64b, 0x3d2 },
//   { 0x415a90ce, 0x198 },
//   { 0x895ff6d2, 0x5b6 },
//   { 0x229bf85a, 0x62d },
//   { 0x24e5955e, 0x5c9 },
//   { 0x3b40cbe0, 0x675 },
//   { 0x3c701fe1, 0x21c },
//   { 0xfd4e6b63, 0x1d1 },
//   { 0xa0679ce8, 0x3a0 },
//   { 0x42ae28ea, 0x296 },
//   { 0x4f9263eb, 0x60e },
//   { 0xe70bb2ed, 0x694 },
//   { 0xdd9325f2, 0x681 },
//   { 0x39f93b6a, 0x3ef },
//   { 0xbaab6361, 0x640 },
// };
// int guest_tbl_len = 29;

OBF guest_tbl[] = {
  { 0xc50b6060, 0x454 },
  { 0x9d1fe433, 0x3ed },
  { 0x54a15b03, 0x376 },
  { 0x8f6e2804, 0x422 },
  { 0x8aeef509, 0x389 },
  { 0x3493310d, 0x32c },
  { 0x59c33d0f, 0x3e1 },
  { 0x968630d0, 0x400 },
  { 0xef5bdd13, 0x435 },
  { 0x64d8a529, 0x3b8 },
  { 0x5f291a64, 0x441 },
  { 0x5de72dd, 0x347 },
  { 0xfc2ff49f, 0x3ce },
};
int guest_tbl_len = 13;

