# ABC427 A - ABC -> AC

- URL: https://atcoder.jp/contests/abc427/tasks/abc427_a
- 結果: AC（自力）
- 解法: 真ん中のインデックスを求め S.erase(pos, 1) で1文字削除
- 学び:
  - erase(位置, 個数) で文字列の一部を削除
  - 奇数長の真ん中インデックスは S.size() / 2（切り捨てがちょうど真ん中）
    → (size+1)/2 - 1 と同じ値。size/2 の方が短い
  - 整数除算の切り捨てが今回は「味方」になるパターン
  - 別解 substr: left=substr(0,mid), right=substr(mid+1) を連結
    erase=消す / substr=取り出す をセットで覚える
