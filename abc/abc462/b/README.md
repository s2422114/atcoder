# ABC462 B - Gift Exchange

- URL: https://atcoder.jp/contests/abc462/tasks/abc462_b
- 結果: AC（ヒントあり）
- 解法: 「人iが人aに送った」を読みながら、s[a] に i を push_back して逆引き記録
- 詰まった点:
  - vector<vector<int>> s(N, vector<int>(N)) だと中身が0で埋まる。
    push_back すると既存の0の後ろに追加されて size が狂う
    → vector<vector<int>> s(N + 1) で「空のvectorをN+1個」にする
  - 1始まりの番号を添字に使うので、サイズは N+1 が必要
  - 出力ループの範囲を N ではなく s.at(i).size() にする（人によって人数が違う）
  - 二次元配列の添字（s.at(i).at(j)）がごちゃごちゃして混乱した
- 学び:
  - 【逆引きの記録】入力と求めるものが逆方向のとき、添字と中身を入れ替えて記録する
    入力: 人i → 人a に送った / 記録: s[a] に i を追加
  - push_back: サイズを決めずに末尾に追加できる。何個入るか分からないときに使う
  - i を昇順に回しながら push_back すれば、中身も自動で昇順になる（ソート不要）
  - 【添字の混乱対策】内側は範囲for文にすると添字が消えて読みやすい
      for (int sender : s.at(i)) cout << " " << sender;
    二重の添字 s.at(i).at(j) を書かずに済む
