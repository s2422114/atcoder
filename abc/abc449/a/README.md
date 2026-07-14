# ABC449 A

- URL: https://atcoder.jp/contests/abc449/tasks/abc449_a
- 結果: AC（自力）
- 解法: 半径 r = D / 2.0（割る前に小数化）、面積 = π * r * r
        fixed << setprecision(15) で出力
- 学び:
  - 【重要】整数同士の割り算は切り捨てられる。D / 2 ではなく D / 2.0 とする。
    計算後に (double) でキャストしても手遅れ（すでに切り捨て済み）
  - 小数の出力は fixed と setprecision をセットで使う
    fixed がないと有効数字の指定になり意図と違う出力になる
  - 誤差 10^-6 以下なら setprecision(10) 以上あれば安全
- 改善点: 円周率は手打ちせず M_PI（<cmath>）を使える
