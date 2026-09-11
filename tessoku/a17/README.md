# A17 - Dungeon 2（鉄則本 4章 DPの復元）★3

- URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_q
- 結果: AC（入力のタイプミスを修正）
- 解法: A16 と同じ DP で dp[] を作った後、答えを復元する。
        Place=N から逆に辿り、dp[Place-1]+A[Place]==dp[Place] なら
        1つ前から来た、そうでなければ2つ前から来た、と判定。
        部屋1に着いたら break、reverse で正順に直して出力
- 学び【DP復元の定型】:
  - dp の値の「等号が成り立つ方」が、実際に通った経路
    dp[i] = min(...) で選ばれた側を、逆算で特定できる
  - 逆から辿るので結果は逆順 → reverse で反転
  - 条件の順番に注意: dp[Place-1] を先に判定すれば、Place==2 のとき
    dp[0] を参照する前に決着がつく（範囲外を踏まない）
- 詰まった点:
  - cin >> B[i] を A[i] と書いてしまい、B が未初期化のまま
    → 実行のたびに結果が変わるのは未初期化のサイン
