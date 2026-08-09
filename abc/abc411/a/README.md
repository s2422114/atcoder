# ABC411 A - Required Length

- URL: https://atcoder.jp/contests/abc411/tasks/abc411_a
- 結果: AC（自力）
- 解法: P.size() >= L なら Yes（文字列の長さを L と比較）
- 学び:
  - 「L 以上」なので >=（イコールを含む）
  - P.size() は符号なし(size_t)。L(int)との比較だが、L>=1 が保証されるので安全
    （L が 0/負になりうるなら (int)P.size() >= L とキャスト）
