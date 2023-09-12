#include <iostream>
#include <unordered_set>
#include<string>

int main()
{
	int N, ans = 0;
	std::unordered_set<std::string> vars;
	std::string elem;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> elem;
		if (vars.find(elem) == vars.end()) {
			vars.insert(elem);
			ans++;
		}
	}
	std::cout << ans;
	return 0;
}
