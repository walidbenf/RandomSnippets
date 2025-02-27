#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int	main() {
	string str = "Hello, World!";
	reverse(str.begin(), str.end());
	cout << str << std::endl;
	return 0;
}
