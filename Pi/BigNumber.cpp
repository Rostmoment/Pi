#include <iostream>
#include <string>

using namespace std;

class BigNumber {

	private:
		uint8_t* bytes;
		long size;

	public:
		static const int BITS_IN_BYTE = 8;

		BigNumber(long size) {
			this->size = size;
			bytes = new uint8_t[size]{ 0 };
		}

		void SetBitsFromString(string bits) {
			int index = 0;
			for (char c : bits) {
				int byte = index / BITS_IN_BYTE;
				int bit = index % BITS_IN_BYTE; 


				if (c == '1') {
					bytes[byte] |= (1U << bit);
				}
				else if (c == '0') {
					bytes[byte] &= ~(1U << bit);
				}

				index++;
			}
		}

		
		string ToString() {
			string r = "";

			for (int i = 0; i < size; i++) {
				for (int bit = 0; bit < BITS_IN_BYTE; bit++) {
					if (bytes[i] & (1U << bit))
						r += '1';
					else
						r += '0';
				}
			}

			return r;
		}
};