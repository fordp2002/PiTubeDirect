#include <inttypes.h>
#include <string.h>

//  SPHERE
//
//   10MODE5
//   20FORX=1TO19
//   30*FX3,4
//   40TIME=0
//   50S%=400
//   60VDU29,640;512;
//   70GCOL3,RND(7)
//   80MOVE 0,0
//   90FOR A=0 TO 126STEP.25: DRAWS%*SINA,S%*COSA*SIN(A*.95):NEXT
//  100*FX3,5
//  110PRINTTIME/100
//  120NEXT

static uint8_t sphere[] = {
   0x0d, 0x00, 0x0a, 0x06, 0xeb, 0x35, 0x0d, 0x00, 0x14, 0x0b, 0xe3, 0x58, 0x3d, 0x31, 0xb8, 0x31,
   0x39, 0x0d, 0x00, 0x1e, 0x0a, 0x2a, 0x46, 0x58, 0x33, 0x2c, 0x34, 0x0d, 0x00, 0x28, 0x07, 0xd1,
   0x3d, 0x30, 0x0d, 0x00, 0x32, 0x0a, 0x53, 0x25, 0x3d, 0x34, 0x30, 0x30, 0x0d, 0x00, 0x3c, 0x10,
   0xef, 0x32, 0x39, 0x2c, 0x36, 0x34, 0x30, 0x3b, 0x35, 0x31, 0x32, 0x3b, 0x0d, 0x00, 0x46, 0x0b,
   0xe6, 0x33, 0x2c, 0xb3, 0x28, 0x37, 0x29, 0x0d, 0x00, 0x50, 0x09, 0xec, 0x20, 0x30, 0x2c, 0x30,
   0x0d, 0x00, 0x5a, 0x2c, 0xe3, 0x20, 0x41, 0x3d, 0x30, 0x20, 0xb8, 0x20, 0x31, 0x32, 0x36, 0x88,
   0x2e, 0x32, 0x35, 0x3a, 0x20, 0xdf, 0x53, 0x25, 0x2a, 0xb5, 0x41, 0x2c, 0x53, 0x25, 0x2a, 0x9b,
   0x41, 0x2a, 0xb5, 0x28, 0x41, 0x2a, 0x2e, 0x39, 0x35, 0x29, 0x3a, 0xed, 0x0d, 0x00, 0x64, 0x0a,
   0x2a, 0x46, 0x58, 0x33, 0x2c, 0x35, 0x0d, 0x00, 0x6e, 0x0a, 0xf1, 0x91, 0x2f, 0x31, 0x30, 0x30,
   0x0d, 0x00, 0x78, 0x05, 0xed, 0x0d, 0xff
};

void copy_test_programs(uint8_t *memory) {
   memcpy(memory + 0x800, sphere, sizeof(sphere));
}




