# ABC429 A - Too Many Requests

- URL: https://atcoder.jp/contests/abc429/tasks/abc429_a
- 結果: AC（自力）
- 解法(提出): N>M かどうかで外側を場合分けし、範囲ごとに別ループで出力
- すっきり版: 1〜N をループし、中で i<=M を判定
    for (int i = 1; i <= N; i++)
        cout << (i <= M ? "OK" : "Too Many Requests") << endl;
- 学び:
  - 「範囲で分けて別ループ」より「1個ずつ回して中で条件判定」が楽で安全
  - i<=M の判定を毎行やれば、N<=M のケースも自動で全部OKになる
    → 外側の場合分けが不要
  - 境界(M+1から等)を自分で計算するとオフバイワンの元。ループに任せる
