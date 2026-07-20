# ABC416 A - Vacation Validation

- URL: https://atcoder.jp/contests/abc416/tasks/abc416_a
- 結果: AC（自力）
- 解法: check=true から開始。L番目〜R番目を見て 'o' でない文字があれば false。
        ループは問題文どおり i=l..r（1始まり）、アクセスは s.at(i-1) で0始まりに変換
- 学び:
  - 問題文は1始まり(L番目)、C++の文字列は0始まり → アクセス時に -1
  - ループカウンタは1始まりのまま、参照の瞬間だけ i-1 にすると混乱しにくい
  - 「全部oならYes」→ 初期値 true、反例(x)で false に崩す
  - 別解: x を見つけた瞬間 cout<<"No"; return 0; で早期打ち切りも可
