#include <iostream>
#include <vector>

int main() {
  // 1-1. 変数Aを宣言し、適切な初期化をしなさい
  std::vector<std::vector<int>> A {{1,-2,3},{-4,5,-6},{7,-8,9}};

  std::cout << "Display elements of A\n";
  // 1-2. 範囲for文を使って、Aの要素を行列形式で標準出力しなさい
  for (const std::vector<int>& v : A) {
    for (int e: v) {
      std::cout<<e<<" ";
    }
    std::cout << "\n";
  }


  const int n{2}, m{3};
  // 2-1. 変数Bの宣言し、適切な初期化をしなさい
  std::vector B(n, std::vector(m,0));

  // 2-2. Bの要素に標準入力によって与えられた値を入れなさい
  std::cout << "Input elements of B\n";
  for (int i{}; i < n; i++) {
    for (int j{}; j < m; j++) {
      std::cin>>B[i][j]; // ヒント: 1行記述するだけ
    }
  }

  std::cout << "Display elements of B\n";
  // 2-3. Bの要素を行列形式で標準出力しなさい
  //      ただし、for文の条件式に、
  //      vectorのメンバ関数sizeを用いること
  //      ヒント: 複数行記述する
  for (size_t i{}; i<B.size(); i++){
    for (size_t j{}; j<B[i].size(); j++) std::cout << B[i][j] << " ";
    std::cout<<"\n";
  }


  return 0;
}