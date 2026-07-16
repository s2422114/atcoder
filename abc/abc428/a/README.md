# ABC428 A

- URL: https://atcoder.jp/contests/abc428/tasks/abc428_a
- 結果: AC（周期の考え方は自力、min の発想を相談）
- 解法: 周期 = A+B。完了セット数 cnt = X/(A+B)、余り = X%(A+B)。
        余りで走れるのは min(余り, A) 秒。走行秒数 = A*cnt + min(余り,A)。×S で距離
- 詰まった点と学び:
  - 優先順位: X / A + B は (X/A)+B になる。X/(A+B) はカッコ必須
    （+ は * / % より優先度が低い）
  - min(remainder, A) は「余りとAの小さい方」。if で書くと4〜5行になる
  - min/max は「2つ比べて選ぶ if」を1つの式にしたもの
    「多くても/上限」→ min、「少なくとも/下限」→ max
