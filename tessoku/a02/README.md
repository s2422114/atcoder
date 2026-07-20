# A02 - Linear Search（鉄則本 1章）

- URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_b
- 結果: AC（自力）
- 解法: 線形探索。読みながら1個ずつ X と比較し、一致で check=true
        配列に保存せず cin で受けてその場で判定（後で使わないので省メモリ）
- 学び:
  - 線形探索(Linear Search) = 先頭から1個ずつ順に見る。計算量 O(N)
  - find の中身もこれと同じ。名前がつくと大げさだが中身は素直なループ
  - 後の二分探索(A11〜) O(logN) との速度比較の土台になる
  - 後で使わないデータは配列に貯めず、読みながら処理するとスマート
