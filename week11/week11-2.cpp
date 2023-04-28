bool isIsomorphic(char * s, char * t){
    if(strlen(s)!=strlen(t)) return false;

    char table1[256]={},table2[256]={};
    for(int i=0;i<strlen(s);i++){
        char c1=s[i],c2=t[i];
        if(table1[c1]==0 && table2[c2]==0){
            table1[c1]=c2;
            table2[c2]=c1;
        }
        if(table1[c1]!=c2) return false;
        if(table2[c2]!=c1) return false;
    }
    return s;
}
