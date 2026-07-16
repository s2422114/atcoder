# ABC432 A - Permute to Maximize

- URL: https://atcoder.jp/contests/abc432/tasks/abc432_a
- 結果: AC（自力、真ん中の求め方だけ相談）
- 解法: first=max, third=min, second=A+B+C-first-third（合計から両端を引く）
        cout << first << second << third で3桁を続けて出力
- 学び:
  - 3数の真ん中 = 合計 - 最大 - 最小
  - cout は数を続けて出すと桁が連結される（432）。整数として使うなら
    first*100 + second*10 + third
  - 別解 sort: vector に入れて sort(v.rbegin(), v.rend()) で降順。
    数が多いときはこちらが短くて強い
