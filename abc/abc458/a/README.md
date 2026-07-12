# ABC458 A - Burger

- URL: https://atcoder.jp/contests/abc458/tasks/abc458_a
- 結果: AC
- 解法: erase を2回使い、先頭からn文字・末尾からn文字を削除
- 詰まった点: `s.erase(s[era_position], n)` と書いて out_of_range エラー。
  erase の第1引数は「位置」なのに「その位置の文字」を渡していた。
  文字が文字コード（数値）に変換され、巨大な位置として解釈されていた
- 学び:
  - 「位置(i)」と「中身(s[i])」は別物。混同すると範囲外アクセスになる
  - erase の第2引数を省略すると、指定位置から末尾まで全部消せる
    s.erase(s.size() - n);
