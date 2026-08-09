# ABC413 A - Content Too Large

- URL: https://atcoder.jp/contests/abc413/tasks/abc413_a
- 結果: AC（自力）
- 解法: A を読みながら sum_weight に足し込み、合計 <= M なら Yes
- 学び:
  - 合計だけ必要で個々を後で使わない → 配列に貯めず読みながら加算（省メモリ）
  - 「M 以下」なので <=（境界を正しく読む）
  - オーバーフロー確認: A<=100 × N<=100 = 最大1万。int で十分
    （制約から必要な型を見積もる癖）
