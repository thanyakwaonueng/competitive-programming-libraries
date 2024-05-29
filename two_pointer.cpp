void two_pointer_template(){
    int cnt = k, int ans = 0; 
    for(int i=0,j=-1;i<n && j<n;){
        //expandable, expand j pointer
        if(j + 1 < n && t[j+1] == 'b'){
            ++j;
            ans = max(ans, j - i + 1);
        } else if(j + 1 < n && t[j+1] == 'a'){
            if(cnt > 0 ){
                --cnt;
                ++j;
                ans = max(ans,j - i + 1);
            } else {
                //must shrink, shrink i pointer till subsegment valid
                while(cnt==0){
                    if(t[i] == 'a')++cnt;
                    ++i;
                }
            }
        } else break; 
    }

} //end two_pointer template
