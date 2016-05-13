#include <bits/stdc++.h>
using namespace std;

int n, m;

struct region
{

    string str;
    int point;
   /* bool operator >(const region &ob)const
    {
       if(point>ob.point)
        return point>ob.point;
    }*/
};

bool myfunction(struct region ob1, struct region ob2)
{
    if(ob1.point>ob2.point)
    {
        return ob1.point<ob2.point;
    }
    //else return ob2.point>ob1.point;
}

int main()
{
    cin>>n>>m;
    string name;
    int reg_no, num;
    vector<region> myvec[10002];
    for(int i=0; i<n; i++)
    {
        struct region ob;
        cin>>name>>reg_no>>num;
        ob.str=name;
        ob.point=num;
        myvec[reg_no].push_back(ob);
    }

    for(int i=1; i<=m; i++)
    {
        int size_v=myvec[i].size();
        sort(myvec[i].begin(),myvec[i].end());
        if(myvec[i][size_v-2].point==myvec[i][size_v-3].point)
        {
            cout<<"?"<<endl;
        }
        else
        {
            cout<<myvec[i][size_v-1].str<<" "<<myvec[i][size_v-2].str<<endl;
        }
    }
    return 0;

}

