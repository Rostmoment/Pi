class BigNumber {

	private:
		__int8 bytes[];

	public:
		BigNumber(long size) {
			bytes[size] = {};
		}
};