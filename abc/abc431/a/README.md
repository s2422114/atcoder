# ABC431 A - Robot Balance

- URL: https://atcoder.jp/contests/abc431/tasks/abc431_a
- 結果: AC（自力）
- 解法: H>=B なら H-B、H<B なら 0。ans=0 に初期化し、H>=B のときだけ H-B を代入
- 学び:
  - 答えを「安全な初期値」にしておくと、満たさないケースの場合分けを省ける
  - マイナスを0で止める定番: max(H - B, 0)（1行で同じ動き）
  - 上限で止めるなら min(値, 上限)。max/min で場合分けを消せる場面が多い
