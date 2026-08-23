# ABC403 A - Odd Position Sum

- URL: https://atcoder.jp/contests/abc403/tasks/abc403_a
- 結果: AC（自力）
- 解法: 読みながら i%2==0（0-indexedで奇数番目）のとき sum に加算
- 学び:
  - 【添字のズレ】問題文の「奇数番目」は1始まり。0-indexed で受けると
    i=0 が1番目なので、奇数番目の条件は i%2==0 になる
    （1-indexed で受けるなら i%2==1）
  - 別解: for (i=1; i<=N; i+=2) とカウンタを2ずつ増やせば if が不要
  - 合計だけ必要なので配列に貯めず読みながら加算
