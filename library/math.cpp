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

// modでの累乗 a^b mod m を O(log b) で計算（繰り返し二乗法）
// b が 10^18 でも安全（ビット数の決め打ちが不要）
// 注意: m は 2*10^9 程度まで。それ以上だと p*p で long long が溢れる
long long power(long long a, long long b, long long m) {
    long long ans = 1;
    long long p = a % m;          // a が m 以上でも安全にする
    while (b > 0) {
        if (b % 2 == 1) ans = ans * p % m;   // 今のビットが立っていれば掛ける
        p = p * p % m;                        // p を2乗（a^1, a^2, a^4, ...）
        b /= 2;                               // 次のビットへ
    }
    return ans;
}

