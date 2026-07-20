# B03 - Supermarket 1（鉄則本 1章）

- URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ba
- 結果: AC（三重ループ。_GLIBCXX_DEBUG が原因で in12 だけ WA→フラグ外して AC）
- 解法: 異なる3商品 i<j<k を三重ループで全探索し、和が 1000 なら Yes
- 学び:
  - 1つの配列から複数選ぶ全探索は j=i+1, k=j+1 で i<j<k（同じ要素を選ばない）
  - 「異なる商品」＝インデックスが違えばOK（値が同じでも別商品）
  - 計算量 O(N^3)。N=100 なら約16万回で間に合う
  - 【重要デバッグ】ロジックが正しいのに特定ケースだけ WA →
    ロジック以外(環境/フラグ/入力受け取り)を疑う。
    今回は #define _GLIBCXX_DEBUG が犯人。外したら AC。
    _GLIBCXX_DEBUG はデバッグ版vectorに置換され、特定入力でTLEでなくWALを招くことがある
  - 使い分け: 普段は付けて範囲外検出。正しいはずなのに落ちたら真っ先に外して試す
