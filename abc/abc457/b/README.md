# ABC457 B

- URL: https://atcoder.jp/contests/abc457/tasks/abc457_b
- 結果: AC（resize の使い方を確認して自力）
- 解法: 行ごとに長さが違う二次元配列。L[i] を読んでから A[i].resize(L[i]+1) で
        その行だけサイズ確保し、1-indexed で値を格納。答えは A[X][Y]
- 学び:
  - vector<vector<int>> A(N+1) は「行を N+1 本用意、中身は空」
  - A.resize(...) = 縦（行数）を変える / A[i].resize(...) = i行目の横の長さを変える
  - 長さが行ごとに違う入力は「読みながら resize」で対応できる
  - 1-indexed（+1して0番目を余白に）にすると A[X][Y] がそのまま答えになる
  - 別解: push_back で足していく（ただし0-indexedになるので Y-1 の調整が必要）
