public static int combineParts(List<Integer>parts){
        Collections.sort(parts);
        int ans=0;
        while(parts.size()>1){
            int a=parts.get(0);
            int b=parts.get(1);
            parts.remove(0);
            parts.remove(0);
            int sum=a+b;
            ans+=sum;
            boolean sign=false;
            for(int i=0;i<parts.size();i++){
                if(sum>parts.get(i)){
                    continue;
                }else{
                    parts.add(i,sum);
                    sign=true;
                    break;
                }
            }
            if(sign==false)
                parts.add(sum);
        }
        return ans;
    }