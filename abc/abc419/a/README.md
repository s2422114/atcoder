# ABC419 A - AtCoder Language

- URL: https://atcoder.jp/contests/abc419/tasks/abc419_a
- 結果: AC（map で実装）
- 解法: map<string,string> に red->SSS, blue->FFF, green->MMM を登録。
        table.count(S) > 0 なら table.at(S) を出力、なければ Unknown
- 学び:
  - map<string,string> は文字列→文字列の対応表
  - table.count(S): キーがあれば1、なければ0（登録の有無を判定）
    → 未登録キーを勝手に作る事故を防げる（いきなり table[S] しない）
  - table.at(S) は範囲外(未登録)だとエラーで気づける。table[S] は勝手に作る
  - if の連続でも解けるが、パターンが3つ以上なら map の方がすっきり
