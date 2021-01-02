#include<stdio.h> 
int len(char s[]) {
    int i;
    for(i=0;s[i]!='\0';i++);
return i;
}
int check(char s[],char f[],int fl,int i) {
    int in=0,count=0;
    while(s[i]!=' ' && s[i]!='\0') {
        if(s[i]==f[in])
            count++;
        in++;
        i++;
    }
    if(count==fl)
        return 1;
    return 0;
}
int main() {
    char s[1000],f[20],r[20];
    scanf("%[^\n]s",s);
    scanf("%s",f);
    scanf("%s",r);
    int sl=len(s);
    int fl=len(f);
    int rl=len(r);
    int flag=1;
    int dif;
    int sind,i;
    for(i=0;i<sl;i++) { 
        if(f[0]==s[i] && flag) {
            if(check(s,f,fl,i)) {
                flag=0;
                
            }
        }
        if(flag==0) {
            int ind=0;
            if(fl>rl) {
            	sind=i;
            	dif=fl-rl;
	            while(ind < rl) s[sind++]=r[ind++]; 
                while(sind<=sl-dif) {
                    s[sind]=s[sind+dif];
                    sind++;
	    		}
	    }
	    	else {
	    		dif=rl-fl;
	    		sind=sl+dif;
	    		//s[sind+dif]="\0";
	    		while(i<=sind) {
	    			s[sind+dif]=s[sind];
	    			sind--;
				}
				sind=i;
	    		while(rl > ind) s[sind++]=r[ind++];
			}
            flag=1;
        }
    }
    printf("%s",s);
    return 0;
}
