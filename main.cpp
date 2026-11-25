#include <string>
#include <vector>

void xor_checksum() {
    int values[4] = {12, 7, 25, 40};
    int checksum = 0;
    for (int i = 0; i < 4; ++i) checksum ^= values[i];
    (void)checksum;
}

void integer_sqrt() {
    int n = 50;
    int root = 0;
    while ((root + 1) * (root + 1) <= n) root += 1;
    (void)root;
}

void sort_small() {
    int values[4] = {9, 3, 7, 1};
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (values[j] < values[i]) {
                int t = values[i];
                values[i] = values[j];
                values[j] = t;
            }
        }
    }
    (void)values[0];
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void sum_pair() {
    int left = 3;
    int right = 9;
    int total = left + right;
    (void)total;
}

void count_bits() {
    unsigned int n = 0b10110101u;
    int bits = 0;
    while (n != 0) {
        bits += static_cast<int>(n & 1u);
        n >>= 1;
    }
    (void)bits;
}

extern "C" int lucid_beacon();
extern "C" void hidden_boulder();
extern "C" void calm_crescent();

int main() {
    xor_checksum();
    integer_sqrt();
    sort_small();
    text_contains();
    sum_pair();
    count_bits();
    hidden_boulder();
    calm_crescent();
    return lucid_beacon();
}
