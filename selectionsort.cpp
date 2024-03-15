#include<iostream>
using namespace std;
template<typename T>
class sort
{
public:
    T a[50];
    int i,j,n;
    void ss()
    {
        cout<<"enter size"<<endl;
        cin>>n;
        cout<<"enter ele"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        T temp;
        int min;
        for (i=0;i<n;i++)
        {
            min=i;
            for(j=i+1;j<n;j++)
            {
                if(a[min]>a[j])
                {
                    min=j;
                }
            }
            if(min!=i)
            {
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }

        }
        cout<<"sorted"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }
cout<<endl;
    }
};
int main()
{
    sort<int>s1;
    sort<float>s2;
    sort<char>s3;
    cout<<"int:"<<endl;
    s1.ss();
    cout<<"float:"<<endl;
    s2.ss();
    cout<<"char:"<<endl;
    s3.ss();
    return 0;
}
