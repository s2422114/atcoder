# ABC425 A

- URL: https://atcoder.jp/contests/abc425/tasks/abc425_a
- 結果: AC（自力）
- 解法: i=1..N で (-1)^i * i^3 の総和。i の偶奇で符号を分け、i*i*i を加減算
- 学び:
  - (-1)^i の符号交代は「偶奇で場合分け」or「sign変数を毎回反転(sign=-sign)」
  - 3乗は pow を避けて i*i*i（pow は小数を返すので整数計算では誤差の罠）
