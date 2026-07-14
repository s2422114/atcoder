# ABC453 A

- URL: https://atcoder.jp/contests/abc453/tasks/abc453_a
- 結果: AC（ヒントあり）
- 解法: 先頭から 'o' が続く限り位置を進め、その位置から substr で切り出す
    while (i < N && S.at(i) == 'o') i++;
    cout << S.substr(i) << endl;
- 詰まった点:
  - 最初 erase で 'o' を消しながらループしたが、走査中に文字列が短くなって
    位置がズレ、out_of_range で落ちた
  - while が思いつかなかった
- 学び:
  - 【重要】走査しながら対象を書き換えると位置がズレる。
    → 書き換えず「位置だけ求めて最後に切り出す」か「新しい入れ物に集める」
  - 回数が決まっていない繰り返しは while。
    for = 決まった回数 / while = 条件が続く限り
  - while (i < N && S.at(i) == 'o') の順序が重要（短絡評価で範囲外を防ぐ）
  - S.substr(i) で「i文字目から末尾まで」。全部 'o' なら空文字列が返る
