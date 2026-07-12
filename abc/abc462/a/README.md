# ABC462 A - Secret Numbers

- URL: https://atcoder.jp/contests/abc462/tasks/abc462_a
- 結果: AC
- 解法: 各文字を見て '0' <= c && c <= '9' なら答えの文字列に追加
- 学び:
  - 文字は文字コード（数値）で管理されるので、'0'〜'9' の範囲比較で数字判定できる
  - s[i] は char 型。比較相手も '0' のようにクォートを付けて char にする必要がある
  - 0（int）と '0'（char）は別物
- 次に試す: 範囲for文 `for (char c : s)` を使えば s[i] を書かずに済む
- 別解: isdigit(c) でも数字判定できる
