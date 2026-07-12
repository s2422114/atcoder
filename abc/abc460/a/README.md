# ABC460 A - Modulo Operations

- URL: https://atcoder.jp/contests/abc460/tasks/abc460_a
- 結果: AC
- 解法: M が 0 になるまで M = N % M を繰り返し、回数を数える（N は固定）
- 詰まった点: 最初 `M %= N`（= M を N で割る）と書いて無限ループ。
  正しくは `M = N % M`（N を M で割る）。割る側と割られる側が逆だった
- 学び:
  - `%=` は「左辺を右辺で割る」形しか書けない。逆向きなら `M = N % M` と素直に書く
  - デバッグ出力は cout ではなく cerr を使う（ジャッジが無視するのでWAにならない）
