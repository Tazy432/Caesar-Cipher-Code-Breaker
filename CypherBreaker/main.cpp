
#include <fstream>
#include <string.h>

using namespace std;

void shift(char s[])
{
    for(int i = 0; i<strlen(s); i++)
    {
        if(isalpha(s[i]))
        {
            s[i] = (s[i] + 1);
            if(s[i] > 'z')
                s[i] = (s[i] - 26);

        }
    }
}
void frecv(char s[],double fr_sir[])
{
    for(int i=0; i<26; i++)
        fr_sir[i] = 0.0;
    for(int i=0; i<strlen(s); i++)
    {
        if(isalpha(s[i]))
            fr_sir[s[i]-'a']++;
    }
}
int solve(char s[], double fr_sir[], double fr_engl[])
{
    double sum = 0.0;
    double sum_min = 9999999999999.0;
    int nr_rotiri=0;
    for(int i = 0; i<26; i++)
    {
        shift(s);
        printf("%d ",nr_rotiri);
        printf("%s\n", s);
        frecv(s, fr_sir);
        sum = 0.0;
        for(int j = 0; j<26; j++)
            sum += ((fr_sir[j]-fr_engl[j])*(fr_sir[j]-fr_engl[j]))/fr_engl[j];
        if(sum_min>sum)
        {
            sum_min = sum;
            nr_rotiri = i;
        }
    }
    return nr_rotiri;
}
int main()
{

    char a[1000];
    ///hello, where is my beer?
    strcpy(a,"ifmmp, xifsf  jt nz cffs?");
    double fr_engl[26], fr[26];
    fr_engl[0]=8.2;  ///A
    fr_engl[1]=1.5;  ///B
    fr_engl[2]=2.8;  ///C
    fr_engl[3]=4.3;  ///D
    fr_engl[4]=12.7; ///E
    fr_engl[5]=2.2;  ///F
    fr_engl[6]=2.0;  ///G
    fr_engl[7]=6.1;  ///H
    fr_engl[8]=7.0;  ///I
    fr_engl[9]=0.2;  ///J
    fr_engl[10]=0.8; ///K
    fr_engl[11]=4.0; ///L
    fr_engl[12]=2.4; ///M
    fr_engl[13]=6.7; ///N
    fr_engl[14]=7.5; ///O
    fr_engl[15]=1.9; ///P
    fr_engl[16]=0.1; ///Q
    fr_engl[17]=6.0; ///R
    fr_engl[18]=6.3; ///S
    fr_engl[19]=9.1; ///T
    fr_engl[20]=2.8; ///U
    fr_engl[21]=1.0; ///V
    fr_engl[22]=2.4; ///W
    fr_engl[23]=0.2; ///X
    fr_engl[24]=2.0; ///Y
    fr_engl[25]=0.1; ///Z
    int rotire;
    rotire = solve(a, fr, fr_engl);
    printf("%d\n", rotire);
    for(int i = 0; i<=rotire; i++)
        shift(a);
    printf("\n%s", a);

    return 0;
}
