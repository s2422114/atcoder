# ABC466 A - Compromise

- URL: https://atcoder.jp/contests/abc466/tasks/abc466_a
- 結果: AC
- 解法: 全要素が0未満かを判定
- 詰まった点: 最初カウント方式で書いたが冗長。boolフラグの方が素直
- 別解: max_element で最大値を取り、< 0 か判定すれば1行
