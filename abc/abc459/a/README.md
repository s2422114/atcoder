# ABC459 A - Hell, World!

- URL: https://atcoder.jp/contests/abc459/tasks/abc459_a
- 結果: AC
- 解法: s.erase(x-1, 1) で x 文字目（添字 x-1）を1文字削除
- 学び:
  - 問題は1始まり、添字は0始まり → x-1 に変換が必要
  - erase を使わずとも「消したい文字以外を出力する」発想で for + if だけで書ける
    for (int i = 0; i < s.size(); i++) if (i != x-1) cout << s[i];
  - string に `-`（引き算）演算子は無い。「どの文字を消すか」は曖昧なので、
    削除は erase のように「どの位置から何文字」と位置で指定するのが基本
  - 「削除」は「残すものを選ぶ」に言い換えられる（ABC462の「数字だけ集める」と同じ型）
