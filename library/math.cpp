// 素数判定 O(√N)
// x が素数なら true。x <= 1 は false
bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

// エラトステネスのふるい O(N log log N)
// N以下の各数が合成数かどうかを判定する表を作る
// isComposite[i] == false なら i は素数（i >= 2）
// 注意: 配列サイズは N の上限に合わせる
vector<bool> sieve(int N) {
    vector<bool> isComposite(N + 1, false);
    for (int i = 2; i * i <= N; i++) {
        if (isComposite[i]) continue;
        for (int j = i * 2; j <= N; j += i) isComposite[j] = true;
    }
    return isComposite;
}