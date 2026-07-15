# ABC436 A

- URL: https://atcoder.jp/contests/abc436/tasks/abc436_a
- 結果: AC（自力）
- 解法: S.size() < N の間、S.insert(0, 1, 'o') で先頭に o を1個ずつ挿入
- 別解: k = N - S.size() 個の o を作って連結
    cout << string(k, 'o') << S << endl;
- 学び:
  - string(個数, 文字) で「同じ文字を並べた文字列」を一発生成できる
  - 文字列は + で連結できる
  - S.size() は符号なし(size_t)。int との比較は稀にバグる → (int)S.size() で安全
