/*
Một khách hàng muốn rút số tiền Ttừ một cây ATM bên đường.
 Bên trong cây ATM hiện đang có nn tờ tiền có mệnh giá a1,a2,…,an . 
Hãy tìm một cách trả tiền của máy ATM cho khách hàng?
Input:
· Dòng đầu tiên chứa hai số nguyên dương n và T.
· Dòng thứ hai chứa n số nguyên dương a1,a2,…,an - mệnh giá của các tờ tiền.
Ràng buộc:
· 1≤n,T≤1000.
· 1≤ai ≤1000;∀i: 1 ≤ i ≤n.
Output:
· In ra số nguyên duy nhất là số tờ tiền tối thiểu cần sử dụng. 
Nếu không có phương án trả tiền thì in ra −1.
*/

#include<stdio.h>
#include<math.h>
#include<limits.h>

int dp[1000005], a[1000005];

int min(int a, int b){
    if(a > b)
        return b;
    return a;
}
int main(){
    int n, s;
    scanf("%d %d", &n, &s);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i <= s; i++) dp[i] = 1e9;
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= s; j++){
            if( j - a[i] >= 0 && dp[j - a[i]] != 1e9){
                dp[j] = min(dp[j], dp[j - a[i]] + 1);  
            }
        }
    }
    if(dp[s] == 1e9){
        printf("-1");
    }
    else printf("%d ", dp[s] - 1);
}