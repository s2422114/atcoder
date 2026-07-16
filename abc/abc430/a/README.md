# ABC430 A - Candy Cookie Law

- URL: https://atcoder.jp/contests/abc430/tasks/abc430_a
- 結果: AC（自力）
- 解法: 違反する条件は「飴 C>=A なのにクッキー D<B」。両方満たすとき Yes
- 学び:
  - 「かつ」は && でまとめられる: if (C >= A && D < B)
    （if の入れ子と同じ意味。1行で書ける）
  - 「または」は ||（片方でも成り立てば true）
  - 条件を直接出力: cout << (cond ? "Yes" : "No")（三項演算子）
  - 変数名 illegal のように「何を判定しているか」が分かる名前は good
