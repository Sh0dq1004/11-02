#include <iostream>
#include <vector>
using std::vector;

int n{1}, m{1};

/* 1. 関数 input の定義と実装
関数名: input
仮引数: なし
戻り値の型: vector<vector<int>>
処理内容:
    n 行 m 列行列に相当する変数 matrix を宣言し、
    matrix の各要素は標準入力によって与えられる値を入れて、matrix を返す。
*/
vector<vector<int>> input() {
  auto matrix{vector<vector<int>>(n,vector<int>(m,0))};
  // 指示：必ず範囲for文を用いること
  // 空欄あ
  for (int i{};i<n;i++){
    for (int j{};j<m;j++) std::cin>>matrix[i][j];
  }
  return matrix;
}


/* 2. 関数 print の定義と実装
関数名: print
仮引数: 一個
  - 第一引数
    - 仮引数名: matrix
    - 型: const 付きの vector<vector<int>> のリファレンス
戻り値の型: void
処理内容:
    第一引数 matrix の要素を行列形式のように標準出力する。
*/
// 空欄い
void print(const vector<vector<int>>& matrix){
    for (const vector<int>& v: matrix){
        for (int e:v) std::cout<<e<<" ";
        std::cout<<"\n";
    }
}


/* 3. 関数 plus の定義と実装
関数名: plus
仮引数: 二個
  - 第一引数
    - 仮引数名: A
    - 型: const 付きの vector<vector<int>> のリファレンス
  - 第二引数
    - 仮引数名: B
    - 型: const 付きの vector<vector<int>> のリファレンス
戻り値の型: vector<vector<int>>
処理内容:
    第一引数 A と 第二引数 B を行列として見なす。
    n 行 m 列行列に相当する変数 C を宣言する。
    足し算C=A+Bを求めて、Cを返す。
*/
// 空欄う
vector<vector<int>> plus(const vector<vector<int>>& A, const vector<vector<int>>& B){
    auto resMatrix{vector<vector<int>>(n,vector<int>(m,0))};
    for (int i{};i<n;i++){
        for (int j{};j<m;j++) resMatrix[i][j]=A[i][j]+B[i][j];
    }
    return resMatrix;
}


int main() {
  // 行列のサイズに相当する大域変数n, mはキーボードの入力によって与えられる。
  // ただし、入力された値が1未満である、または変換不可能な値であるならば、
  // 直ちにプログラムを停止させる。
  std::cout << "Input n and m: ";
  std::cin >> n >> m;
  if (n <= 0 || m <= 0) {
    return -1;
  }

  std::cout << "Input elements of A\n";
  auto A(input());
  std::cout << "Input elements of B\n";
  auto B(input());

  std::cout << "\n";
  std::cout << "Matirx A:\n";
  print(A);
  std::cout << "Matirx B:\n";
  print(B);


  auto C(plus(A, B));
  std::cout << "Matirx C:\n";
  print(C);

  return 0;
}