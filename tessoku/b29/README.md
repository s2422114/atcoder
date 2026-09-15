# B29 - Power（鉄則本 5章 余りの計算・累乗）

- URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_db
- 結果: AC
- 解法: A29 と同じ繰り返し二乗法。ただし制約が大きいので対応が必要
- A29との違い:
  - a: 100 → 10^9、b: 10^9 → 10^18
  - b <= 10^18 は 2^60 相当 → ループ回数を30から60に増やす
  - 1 << i は int のシフトなので i>=31 で壊れる → 1LL << i にする
    （代入先を long long にしても、計算自体が int なので手遅れ）
- 学び:
  - 型は「代入先」ではなく「計算する値自身」で決まる
    → 1LL と書いて long long の世界で計算させる
    （7/2.0 で小数にするのと同じ発想）
  - while(b>0){ if(b%2==1)...; p=p*p%m; b/=2; } なら
    ビット数の決め打ちも 1LL も不要 → ライブラリはこちらの形が安全
- ライブラリ: library/math.cpp の power(a,b,m) を while 版で追加済み
