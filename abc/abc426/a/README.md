# ABC426 A - Cat Ranking (OS version)

- URL: https://atcoder.jp/contests/abc426/tasks/abc426_a
- 結果: AC（変換方法を相談、map で実装）
- 解法: map<string,int> で Ocelot=0, Serval=1, Lynx=2 と順位に変換。
        rank[X] >= rank[Y] なら Yes
- 学び:
  - map<キー, 値> は「キーを添字にできる配列」。文字列→数字の対応表が作れる
  - 比較できない文字列を、数字（順位）に翻訳することで >= で比較可能にする
  - バケット配列（数字を添字に数える）の文字列版が map
  - 数え上げに強い: map<char,int> cnt; for(char c:S) cnt[c]++;
  - 注意: 未登録キーを引くと勝手に 0 が作られる
  - 別解: if で1つずつ番号に変換してもよい（項目が少なければ十分）
