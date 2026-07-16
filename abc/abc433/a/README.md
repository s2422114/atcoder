# ABC433 A - Happy Birthday! 4

- URL: https://atcoder.jp/contests/abc433/tasks/abc433_a
- 結果: AC（詰まったが自力で修正）
- 解法: 毎年 X++, Y++ しながら X == Y * Z になる瞬間があるか探す
- 詰まった点と学び:
  - 「ちょうどZ倍」を X / Y == Z（割り算）で判定するとダメ。
    整数除算の切り捨てで Z倍〜(Z+1)倍未満を誤って拾う。
    → X == Y * Z（掛け算）で判定する。割り算を避けられるときは避ける
  - ループ終了条件: X も Y も増えるので while(X<=100 || Y<=100) で必要範囲を走査
  - 別解: for で回数を回し、X+i / Y+i で年齢を表す（入力値を壊さない）
      for (int i = 0; i < 200; i++) if (X+i == (Y+i)*Z) check = true;
