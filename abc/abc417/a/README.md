# ABC417 A - A Substring

- URL: https://atcoder.jp/contests/abc417/tasks/abc417_a
- 結果: AC（自力）
- 解法: erase を2回。先頭A文字を erase(0,A)、その後 末尾B文字を erase(size-B,B)
        ※先に前を削り、縮んだ size を基準に後ろを削るので順番が大事
- 別解: substr で残す部分を直接取り出す
    cout << S.substr(A, N - A - B) << endl;   // 位置A から N-A-B 文字
- 学び:
  - erase=要らない部分を消す / substr=要る部分を取り出す。どちらでも解ける
  - erase は元の文字列を書き換えるので S = S.erase(...) の "S =" は無くてもよい
  - 制約 A+B<N が「削りすぎて空」を保証（境界ケアが不要）
