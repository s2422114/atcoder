# ABC457 A

- URL: https://atcoder.jp/contests/abc457/tasks/abc457_a
- 結果: AC
- 解法: N個の値を読み、X番目（添字 x-1）を出力
- 詰まった点: `cin >> N` を vector の宣言より後に書いていた。
  N がまだ 0 の状態で vector<int> a(N) を作ったため要素0個になり、
  a.at(i) で out_of_range（最初は [] だったので segfault）
- 学び:
  - vector のサイズを決める変数は、宣言より先に読み込む
  - 後から N を変えても、既に作られた vector のサイズは変わらない
  - デバッグ時は [] より .at() を使う。segfault ではなく
    「どこで範囲外か」を教えてくれるのでエラーが特定しやすい
