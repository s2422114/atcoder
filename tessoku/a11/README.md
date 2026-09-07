# A11 - Binary Search 1（鉄則本 3章 二分探索）★2

- URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_k
- 結果: AC（自力）
- 解法: 二分探索。L=1, R=N から始め、M=(L+R)/2 を見て
        X < A[M] なら R=M-1（左半分）、X > A[M] なら L=M+1（右半分）、
        一致したら M を出力
- 学び:
  - 二分探索は「ソート済み配列」に使える。1回ごとに範囲が半分 → O(log N)
    N=100000 でも17回程度（線形探索 O(N) の10万回と比べて圧倒的に速い）
  - R=M-1, L=M+1 と1ずらすのが大事（R=M 等だと範囲が縮まず無限ループ）
  - ループは while (L <= R) が定型（探す範囲が残っている間まわす）
  - 別解: lower_bound(A.begin(), A.end(), X) - A.begin() で位置が取れる
    （0-indexed なので +1）。実戦ではこちらを使うことが多い
