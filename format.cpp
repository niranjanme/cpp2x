// <std::format> support is from fmt 
// Add lib {fmt} to run 
#include <iostream>
#include <fmt/core.h>
#include <cassert>
using namespace std;
class C{
	int i;
public:
	C() = default;
	int getI() const {
		return i;
	}
};

int main() {
	string s0 = fmt::format("{}", 42); // value of s0 is "42"
    string s1 = fmt::format("{0:b} {0:d} {0:o} {0:x}", 42); // value of s1 is "101010 42 52 2a"
    string s2 = fmt::format("{0:#x} {0:#X}", 42); // value of s2 is "0x2a 0X2A"
    string s3 = fmt::format("{:L}", 1234); // value of s3 can be "1,234"

    cout << s0 << endl << s1 <<endl << s2 <<endl << s3;
	return 0;
}
