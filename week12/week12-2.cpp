int maxVowels(char * s, int k){
    int N=strlen(s);
    int a[N];//只能在GNU 用，不是正統C
    int vo=0,ans=0,len=0;

    for(int i=0;i<N;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vo++;//多一個母音
        }
        a[i]=vo;//到目前為止的母音
        if(i>=k) len=a[i]-a[i-k];
        else len=a[i];
        if(len>ans) ans=len;
    }
    return ans;
}
