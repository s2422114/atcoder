# A04 - Binary Representation 1（鉄則本 1章 2進法）

- URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_d
- 結果: AC（型・範囲外で数回ハマる→修正）
- 解法: N%2 で最下位ビット、N/=2 で桁を落とす。s(10) の下位(i=9)から埋める。
        s(10) の初期値0が「0埋め」を兼ねる
- 詰まった点と学び:
  - コンパイル不可(No space left on device)はディスク容量不足。環境を疑う
  - s.size() は 10 だがインデックスは 0〜9。i=s.size() は範囲外
  - s.size() は符号なし(size_t)。s.size()-1 は型が絡んで不安定 →
    直接 9 と書くか (int)s.size()-1 とキャスト
  - _GLIBCXX_DEBUG + .at() が out_of_range を即指摘してくれた（安全装置として機能）
  - 2進変換 = %2 と /2 の繰り返し（周期問題で使った道具の応用）
- 別解: cout << bitset<10>(N) << endl; で0埋め10桁まで一発
