# ABC415 A - Unsupported Type

- URL: https://atcoder.jp/contests/abc415/tasks/abc415_a
- 結果: AC（find を調べて使用）
- 解法: find(A.begin(), A.end(), X) で X の位置を探す。
        戻り値が A.end() でなければ見つかった → Yes
- 学び:
  - find は「見つかった場所(イテレータ)」を返す。見つからなければ A.end() を返す
    → it != A.end() で「含まれる」を判定（end=終端=見つからなかった印）
  - auto: 右辺から型を自動推測するキーワード。find の戻り値の型名は長いので auto が楽
  - 別解(set): 全部 s.insert してから s.count(X)>0 で判定
    N が大きく何度も探すなら set の方が速い（今回は N<=100 でどちらでもOK）
