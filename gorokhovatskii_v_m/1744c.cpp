#include <iostream>
#include <string>

void solve() {
	int n;
	char tmp;
  std::cin >> n >> tmp;
	std::string s;
  std::cin >> s;
	s += s;
	int f = 0;
	int j = 0;
  int ans = 0;

  for (int i = 0; i < 2 * n; i++) {

    if (!f && i >= n)
    	  break;

    if (s[i] == tmp && !f) {
    		f = 1;
    		j = i;
    }
    if (s[i] == 'g' && f) {

    		f = 0;
        if (i-j > ans){
            ans = i - j;
        }
    }
    }
  std::cout << ans << std::endl;
}

int main() {
	std::ios_base::sync_with_stdio(0);
  int t = 1;
  std::cin >> t;
  while(t--) {
      solve();
  }
      return 0;
}
