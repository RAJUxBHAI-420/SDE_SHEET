/*
	Given an integer numRows, return the first numRows of Pascal's triangle.

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]

Constraints:

1 <= numRows <= 30
*/
#include <iostream>
#include <vector>
using namespace std;
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>>result;
      for(int i=0;i<numRows;i++){
        vector<int>row(i+1,1);
        for(int j=1;j<i;j++){
           row[j] = result[i-1][j] + result[i-1][j-1];
        }
        result.push_back(row);
      }
      return result;
    }
int main() {
    int num_rows = 5;
    vector<vector<int>> result = generate(num_rows);

    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}