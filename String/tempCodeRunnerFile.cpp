int arr[26]={0};

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int num=0;
        if(ch >='a' && ch <='z')
        {
           num=ch-'a';
        }
        else
        {
           num=ch-'A';
        }

        arr[num]= arr[num]+1;
    }

    int max=-1;
    int ind=0;

    for(int i=0;i<26;i++)
    {
        if(arr[i]> max)
        {
            max=arr[i];
            ind=i;
        }
            
    }
    
    char ch= 'a'+ ind;
    
    return ch;