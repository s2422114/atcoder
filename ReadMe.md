1. セットアップ（最初に1回だけ）

./setup.sh apg4b cv
これで apg4b/cv/main.cpp がテンプレートから作成されます。

複数問題を一括で作ることもできます：


./setup.sh apg4b a b c cv cu
2. コードを書く
VSCodeで apg4b/cv/main.cpp を開いて、自分で解答を書きます。

注意: ローカル（macOS/clang）では #include <bits/stdc++.h> が使えないので、#include <iostream> 等の個別ヘッダーを使ってください。提出時に bits/stdc++.h に書き換えるか、そのまま個別ヘッダーで提出してもACになります。

3. テスト実行

g++ main.cpp -o main
echo "3 5" | ./main
これ1つで以下が自動で行われます：

サンプルケースのダウンロード（初回のみ、test/ フォルダに保存）
コンパイル（clang++ -std=c++17）
サンプルケースで自動テスト（oj test）
テスト結果の見方

[✓] test/sample-1   ... AC (正解)
[✗] test/sample-2   ... WA (不正解 - 出力が違う)
                          期待: xxx
                          実際: yyy
全部ACなら提出してOK
WAがあればコードを修正して再度 ./test.sh apg4b cv
4. 手動でコンパイル・実行したいとき
自分で入力を試したい場合は直接実行できます：


cd apg4b/cv
clang++ -std=c++17 -o main main.cpp
./main
実行後、ターミナルに入力を打ち込んで動作確認できます。

終了は Ctrl+D（入力終了）または Ctrl+C（強制終了）。

5. 提出
AtCoderのWebページから手動で提出するか、ojコマンドで提出できます：


cd apg4b/cv
oj submit https://atcoder.jp/contests/apg4b/tasks/APG4b_cv main.cpp
（初回は oj login https://atcoder.jp でログインが必要です）

まとめ

./setup.sh <contest> <problem>   # 1. ディレクトリ作成
# 2. VSCodeでmain.cppを編集
./test.sh <contest> <problem>    # 3. テスト（DL→コンパイル→実行）
oj submit <URL> main.cpp         # 4. 提出（任意）
基本は 書く → ./test.sh → 直す のループで進められます。