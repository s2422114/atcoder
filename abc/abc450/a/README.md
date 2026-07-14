# ABC450 A

- URL: https://atcoder.jp/contests/abc450/tasks/abc450_a
- 結果: AC（自力）
- 解法: while で N から 2 まで「値,」を出力し、最後の 1 だけループ外で出力
        （末尾のカンマを避ける工夫）
- 別解1: 逆順 for を使う
    for (int i = N; i >= 1; i--) {
        cout << i;
        if (i > 1) cout << ",";
    }
- 別解2: 区切り文字を値の「前」に出す（最初だけ出さない）
    for (int i = N; i >= 1; i--) {
        if (i < N) cout << ",";
        cout << i;
    }
- 学び:
  - 逆順ループ: for (int i = N; i >= 1; i--)
  - 区切り文字は「後ろに出す→最後が余る」「前に出す→最初だけ避ける」の2通り
  - while で N-- すると入力値そのものを壊すので、for で別変数を使う方が安全
