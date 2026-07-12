# ABC464 A - Decisive Battle

- URL: https://atcoder.jp/contests/abc464/tasks/abc464_a
- 結果: AC
- 解法: E と W の個数を数えて多い方を出力（長さが奇数なので同数はない）
- 詰まった点: ループを `i < 99`（制約の上限）で回して範囲外アクセス。
  正しくは `i < s.size()`（実際の長さ）
- 学び: 制約の上限 ≠ 実際の入力サイズ。ループ範囲は必ず size() から取る
- 別解: 範囲for文 `for (char c : s)` なら size を意識せず書けて警告も出ない
