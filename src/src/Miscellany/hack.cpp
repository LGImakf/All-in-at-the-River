#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("lzcnt,popcnt")
const int BS = 16 << 20;
char buf[BS], *ptr = buf, *top = buf;
__inline int my() {
	if (ptr == top) {
		ptr = buf;
		if ((top = buf + fread(buf, 1, BS, stdin)) == buf) return -1; }
	return *ptr++; }
bitset._Find_first();bitset._Find_next(idx);
struct HashFunc{size_t operator()(const KEY &key)const{}};
