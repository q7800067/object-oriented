#include<iostream>
#include<string>
using namespace std;
#include<deque>
#include<set>
class conpare {
	bool operator()(int v1,int v2) {
		return v1 > v2;
	}

};
void test() {
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	set<int, conpare>s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(40);
	for (set<int, conpare>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;


}
int main() {
	test();
}



