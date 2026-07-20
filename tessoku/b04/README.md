# B04 - Binary Representation 2（鉄則本 1章 2進法）

- URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cc
- 結果: AC（bitset で実装）
- 解法: bitset<10>(N).to_ulong()
  - bitset<10>(N): 文字列"1101"を2進ビット列 0000001101 として解釈
  - .to_ulong(): そのビット列を10進数値 13 に変換
- 学び:
  - bitset は「2進文字列→ビット列」の解釈を肩代わりしてくれる（自分で int 変換不要）
  - to_ulong = to unsigned long。ビット列→10進数値
  - 手書き版(方法2): ans = ans*2 + (N.at(i) - '0') を左桁から繰り返す
    ここで N.at(i)-'0' が「文字→数」変換を担当（ABC422と同じ）
  - A04(10進→2進を手書き)と B04(2進→10進をbitset)で両方向を経験
