# A06 - How Many Guests?（鉄則本 2章 累積和）

- URL: https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_ai
- 結果: AC（考え方は自力、実装ミスを修正）
- 解法: 累積和 S[i]=A[1]+…+A[i] を前計算（S[i]=S[i-1]+A[i], S[0]=0）。
        各質問は S[R]-S[L-1] の引き算1回で区間和を出す
- 詰まった点と学び:
  - 質問ループは Q回（i<=Q）。N で回すと L,R が範囲外で out_of_range
  - 答えは元配列 A でなく累積和 S を使う（S[R]-S[L-1]）
  - 累積和は値が大きくなる → long long にする（オーバーフロー対策の定番）
  - S[0]=0（1-indexed）にすると L=1 のとき S[L-1]=S[0]=0 で境界がきれい
- 意義: 素朴 O(Q*N)=100億 → 累積和 O(N+Q)=20万。C問題頻出の主力テク
