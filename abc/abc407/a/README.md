# ABC407 A - Approximation

- URL: https://atcoder.jp/contests/abc407/tasks/abc407_a
- 結果: AC（自力）
- 解法: A/B の四捨五入。切り捨て c = A/B と c+1 の2候補について、
        real=(double)A/B との差を比べ、近い方を出力
- 学び:
  - 小数がほしいときは割り算の「前」にキャスト: (double)A / B
    （(double)(A/B) は割った後なので手遅れ）
  - 四捨五入 = 「切り捨て候補と+1候補の、どちらが近いか」に分解できる
  - 別解1: cout << (int)round((double)A/B)（1行だが誤差に注意）
  - 別解2（安全）: 両辺をB倍して整数比較
      if (abs(c*B - A) < abs((c+1)*B - A)) → c、else → c+1
  - 競プロでは小数を経由しないで済むなら経由しない（誤差回避）
  - B が奇数 → A/B がちょうど .5 にならない → 答えが一意（制約がヒント）
