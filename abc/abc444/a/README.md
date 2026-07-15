# ABC444 A - Repdigit

- URL: https://atcoder.jp/contests/abc444/tasks/abc444_a
- 結果: AC（自力、簡単）
- 解法: string で受け取り、各桁 N.at(0), N.at(1), N.at(2) が同じか比較
- メモ: N.at(0)==N.at(1) && N.at(1)==N.at(2) の2条件で十分（推移律で3条件目は自動）
