#include <iostream>
#include <string>

using namespace std;

class BigNumber {

	private:
		const int BITS_IN_BYTE = 8;
		int8_t* bytes;

	public:
		int8_t NthByte(long n) {
			return bytes[n];
		}

		BigNumber(long size) {
			bytes = new int8_t[size]{ 0 };
		}

		void SetBitsFromString(string bits) {
			int index = 0;
			for (char c : bits) {
				int byte = BITS_IN_BYTE - index / BITS_IN_BYTE;
				int bit = BITS_IN_BYTE - index % BITS_IN_BYTE;
				int8_t i = bytes[byte];

				if (c == '0') {
					bytes[byte] |= (1U << bit);
				}
				else if (c == '1') {
					bytes[byte] &= ~(1U << bit);
				}

				index++;
			}
		}
};