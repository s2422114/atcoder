# ABC465 A - Supermajority

- URL: https://atcoder.jp/contests/abc465/tasks/abc465_a
- 結果: AC
- 解法: A > B*2/3 を変形して 3A > 2B で判定
- 学び: 整数除算は切り捨てが起きるので、割り算は掛け算に変形する
  最初 `A > B * 2 / 3` で書いてACしたが、式としては危険だった