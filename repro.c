#define _GNU_SOURCE 
#include <endian.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

uint64_t r[2] = {0xffffffffffffffff, 0xffffffffffffffff};
void loop()
{
	long res = 0;
	res = syscall(__NR_socket, 0x10, 3, 6);
	if (res != -1)
		r[0] = res;
*(uint64_t*)0x20000340 = 0x20000000;
*(uint16_t*)0x20000000 = 0x10;
*(uint16_t*)0x20000002 = 0;
*(uint32_t*)0x20000004 = 0;
*(uint32_t*)0x20000008 = 0;
*(uint32_t*)0x20000348 = 0xc;
*(uint64_t*)0x20000350 = 0x20000040;
*(uint64_t*)0x20000040 = 0x20000240;
*(uint32_t*)0x20000240 = 0xb8;
*(uint16_t*)0x20000244 = 0x13;
*(uint16_t*)0x20000246 = 0x101;
*(uint32_t*)0x20000248 = 0;
*(uint32_t*)0x2000024c = 0;
*(uint32_t*)0x20000250 = htobe32(0xe0000002);
*(uint8_t*)0x20000260 = 0xfe;
*(uint8_t*)0x20000261 = 0x80;
*(uint8_t*)0x20000262 = 0;
*(uint8_t*)0x20000263 = 0;
*(uint8_t*)0x20000264 = 0;
*(uint8_t*)0x20000265 = 0;
*(uint8_t*)0x20000266 = 0;
*(uint8_t*)0x20000267 = 0;
*(uint8_t*)0x20000268 = 0;
*(uint8_t*)0x20000269 = 0;
*(uint8_t*)0x2000026a = 0;
*(uint8_t*)0x2000026b = 0;
*(uint8_t*)0x2000026c = 0;
*(uint8_t*)0x2000026d = 0;
*(uint8_t*)0x2000026e = 0;
*(uint8_t*)0x2000026f = 0;
*(uint16_t*)0x20000270 = htobe16(0);
*(uint16_t*)0x20000272 = htobe16(0);
*(uint16_t*)0x20000274 = htobe16(0);
*(uint16_t*)0x20000276 = htobe16(0);
*(uint16_t*)0x20000278 = 0xa;
*(uint8_t*)0x2000027a = 0;
*(uint8_t*)0x2000027b = 0;
*(uint8_t*)0x2000027c = 0;
*(uint32_t*)0x20000280 = 0;
*(uint32_t*)0x20000284 = 0;
*(uint64_t*)0x20000288 = 0;
*(uint64_t*)0x20000290 = 0;
*(uint64_t*)0x20000298 = 0;
*(uint64_t*)0x200002a0 = 0;
*(uint64_t*)0x200002a8 = 0;
*(uint64_t*)0x200002b0 = 0;
*(uint64_t*)0x200002b8 = 0;
*(uint64_t*)0x200002c0 = 0;
*(uint64_t*)0x200002c8 = 0;
*(uint64_t*)0x200002d0 = 0;
*(uint64_t*)0x200002d8 = 0;
*(uint64_t*)0x200002e0 = 0;
*(uint32_t*)0x200002e8 = 0;
*(uint32_t*)0x200002ec = 0;
*(uint8_t*)0x200002f0 = 0;
*(uint8_t*)0x200002f1 = 0;
*(uint8_t*)0x200002f2 = 0;
*(uint8_t*)0x200002f3 = 0;
*(uint64_t*)0x20000048 = 0xb8;
*(uint64_t*)0x20000358 = 1;
*(uint64_t*)0x20000360 = 0;
*(uint64_t*)0x20000368 = 0;
*(uint32_t*)0x20000370 = 0;
	syscall(__NR_sendmsg, r[0], 0x20000340, 0);
	res = syscall(__NR_socket, 0xa, 0x80003, 2);
	if (res != -1)
		r[1] = res;
*(uint16_t*)0x200000c0 = 0xa;
*(uint16_t*)0x200000c2 = htobe16(0);
*(uint32_t*)0x200000c4 = 0;
*(uint8_t*)0x200000c8 = 0;
*(uint8_t*)0x200000c9 = 0;
*(uint8_t*)0x200000ca = 0;
*(uint8_t*)0x200000cb = 0;
*(uint8_t*)0x200000cc = 0;
*(uint8_t*)0x200000cd = 0;
*(uint8_t*)0x200000ce = 0;
*(uint8_t*)0x200000cf = 0;
*(uint8_t*)0x200000d0 = 0;
*(uint8_t*)0x200000d1 = 0;
*(uint8_t*)0x200000d2 = 0;
*(uint8_t*)0x200000d3 = 0;
*(uint8_t*)0x200000d4 = 0;
*(uint8_t*)0x200000d5 = 0;
*(uint8_t*)0x200000d6 = 0;
*(uint8_t*)0x200000d7 = 0;
*(uint32_t*)0x200000d8 = 0;
	syscall(__NR_connect, r[1], 0x200000c0, 0x1c);
*(uint64_t*)0x200067c0 = 0;
*(uint32_t*)0x200067c8 = 0;
*(uint64_t*)0x200067d0 = 0x20000000;
*(uint64_t*)0x200067d8 = 0;
*(uint64_t*)0x200067e0 = 0x20000180;
*(uint64_t*)0x200067e8 = 0;
*(uint32_t*)0x200067f0 = 0;
*(uint32_t*)0x200067f8 = 0;
*(uint64_t*)0x20006800 = 0;
*(uint32_t*)0x20006808 = 0;
*(uint64_t*)0x20006810 = 0x20000000;
*(uint64_t*)0x20006818 = 0x2c8;
*(uint64_t*)0x20006820 = 0x20000000;
*(uint64_t*)0x20006828 = 0;
*(uint32_t*)0x20006830 = 0;
*(uint32_t*)0x20006838 = 0;
	syscall(__NR_sendmmsg, r[1], 0x200067c0, 0x3ffffffffffffdf, 0);
}

int main()
{
	syscall(__NR_mmap, 0x20000000, 0x1000000, 3, 0x32, -1, 0);
	loop();
	return 0;
}
