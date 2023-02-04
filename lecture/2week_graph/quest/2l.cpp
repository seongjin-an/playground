//백준 2852
#include <iostream>
#include <string>

using namespace std;

int n, t, mm, ss, a, agoal, asum, b, bgoal, bsum, c, leading, amm, ass, bmm, bss;
string ammstr, assstr, bmmstr, bssstr;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d %2d:%2d", &t, &mm, &ss);
        // cout << t << " " << mm << " " << ss << '\n';
        c = mm * 60 + ss;
        // cout << "c : " << c << '\n';
        if (t == 1) {
            a++;
            if (a > b) {
                leading = 1;
                if (agoal == 0) {
                    // cout << "agoal : " << c << '\n';
                    agoal = c;
                }
            } else if (a == b) {
                if (leading == 1) {
                    asum += c - agoal;
                } else if (leading == 2) {
                    bsum += c - bgoal;
                }
                agoal = 0, bgoal = 0;
                leading = 0;
            }
        } else if (t == 2) {
            b++;
            if (a < b) {
                leading = 2;
                if (bgoal == 0) {
                    // cout << "bgoal : " << c << '\n';
                    bgoal = c;
                }
            } else if (a == b) {
                if (leading == 1) {
                    asum += c - agoal;
                } else if (leading == 2) {
                    bsum += c - bgoal;
                }
                agoal = 0, bgoal = 0;
                leading = 0;
            }
        }

        if (i == n - 1) {
            if (a > b) {
                asum += 2880 - c;
            } else if (a < b) {
                bsum += 2880 - c;
            }
        }
        
    }
    // cout << "asum : " << asum << " / bsum : " << bsum << '\n';
    
    amm = asum / 60; 
    ass = asum % 60; 
    bmm = bsum / 60; 
    bss = bsum % 60;
    // cout << "amm : " << amm << " / ass : " << ass << " / bmm : " << bmm << " / bss : " << bss << '\n';
    // amm < 10 ? ammstr = '0' + amm : ammstr = amm; 
    // ass < 10 ? assstr = '0' + ass : assstr = ass;
    // bmm < 10 ? bmmstr = '0' + bmm : bmmstr = bmm;
    // bss < 10 ? bssstr = '0' + bss : bssstr = bss;
    printf("%s%d:%s%d\n", amm < 10 ? "0" : "", amm, ass < 10 ? "0" : "" , ass);
    printf("%s%d:%s%d", bmm < 10 ? "0" : "", bmm, bss < 10 ? "0" : "" , bss);
    return 0;
}