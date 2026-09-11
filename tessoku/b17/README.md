# B17 - Frog 1 with Restoration（鉄則本 4章 DPの復元）

- URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cp
- 結果: AC（A17の型を見ながら実装）
- 解法: B16 の DP + A17 の経路復元
        dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]))
        place=N から逆に辿り、等号が成立する方へ進む。reverse して出力
- 学び:
  - DP復元は「dp[i]=min(候補1,候補2) は小さい方を採用した記録」なので、
    候補を計算し直して dp[i] と一致する方が実際に通った経路
  - 終点から辿るので逆順 → reverse で正順に
  - place==1 で break（部屋1も経路に含めてから抜ける）
  - place==2 のとき dp[0] を参照しないよう、dp[place-1] 側を先に判定
- メモ: 復元は初見で思いつく型ではない。「知っているか」が勝負。
  数日後に何も見ずに書けるか試すと定着の確認になる
