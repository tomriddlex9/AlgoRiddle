public static List<List<Integer>>applicationPairs(int deviceCapacity,List<List<Integer>>foregroundAppList,List<List<Integer>>backgroundAppList){
        HashMap<Integer,Integer>h1=new HashMap<Integer,Integer>();
        HashMap<Integer,Integer>h2=new HashMap<Integer,Integer>();
        for(int i=0;i<foregroundAppList.size();i++){
            List<Integer>nl=foregroundAppList.get(i);
            h1.put(nl.get(0),nl.get(1));
        }
        for(int i=0;i<backgroundAppList.size();i++){
            List<Integer>nl=backgroundAppList.get(i);
            h2.put(nl.get(0),nl.get(1));
        }
        List<List<Integer>>ans=new ArrayList<List<Integer>>();
        int max=0;
        int l1=-1;
        int l2=-1;
        for(Map.Entry<Integer,Integer>e1:h1.entrySet()){
            int a=e1.getValue();
            for(Map.Entry<Integer,Integer>e2:h2.entrySet()){
                int b=e2.getValue();
                int cap=a+b;
                if(cap==deviceCapacity){
                    List<Integer>ans1=new ArrayList<Integer>();
                    ans1.add(e1.getKey());
                    ans1.add(e2.getKey());
                    ans.add(ans1);
                }else if(max<cap && cap<deviceCapacity){
                    max=cap;
                    l1=e1.getKey();
                    l2=e2.getKey();
                }
            }
        }
        if(ans.size()>0){
            return ans;
        }else{
            List<Integer>ans1=new ArrayList<Integer>();
            ans1.add(l1);
            ans1.add(l2);
            ans.add(ans1);
            return ans;
        }
    }