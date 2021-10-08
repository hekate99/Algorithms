 string ans;
    int c=1,i=0;
    int flag=0;
    int pos=-1;  // used to store index of the character for which we are counting the frequency
    for(i=0;i<chars.size()-1;i++)
    {
        if(chars[i]==chars[i+1])
        {
            if(flag==0)
            {
                pos=i;
                
                flag=1;
                
            }
            c++;
        }
        else
        {
            if(pos!=-1)
            ans+=chars[pos];
            else
                ans+=chars[i]; // store the character that occurs once only.
            if(c>1)
            {
            ans+=to_string(c);
            c=1;
            flag=0;
                pos=-1;
            }
        }
    }
    if(pos!=-1)
            ans+=chars[pos];
            else
                ans+=chars[i];
            if(c>1){
            ans+=to_string(c);
            c=1;
            flag=0;
            }
    
    for(int j=0;j<ans.size();j++)
    {
        chars[j]=ans[j];
    }
    return ans.size();
}
};
