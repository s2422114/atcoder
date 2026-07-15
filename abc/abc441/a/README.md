# ABC441 A - Black Square

- URL: https://atcoder.jp/contests/abc441/tasks/abc441_a
- 結果: AC（自力）
- 解法: (P,Q)を左上とする100x100領域に(X,Y)が入るか範囲判定
- メモ: P <= X && X <= P+99 && Q <= Y && Y <= Q+99
- メモ: X <= P+99 は X < P+100 と同値（整数なので）。注意点は C++ で P <= X < P+100 と繋げて書けないこと（各条件を && で分ける）
