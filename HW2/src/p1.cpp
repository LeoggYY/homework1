#include <iostream>
#include <vector>

using namespace std;

void gg(vector<int>& set, vector<int>& x, int index) {
    if (index == set.size()) {
        cout << "{ ";
       for (int i = 0; i < x.size(); ++i) {
            int num = x[i];
            cout << num << " ";
    }
            cout << "}" << endl;
        return;
    }
    //不包含當前元素
    gg(set, x, index + 1);

    //包含當前元素
    x.push_back(set[index]);
    gg(set,x, index + 1);

    
    x.pop_back();
}

int main() {
    vector<int> set = { 1, 2, 3, 4, 5 };
    vector<int> x;

    cout << "集合的冪集為:" << endl;
    gg(set, x, 0);

    return 0;
}
