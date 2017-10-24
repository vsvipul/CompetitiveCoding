#include <bits/stdc++.h>
using namespace std;

int mark[101][101];
char cell[101][101];
int dist[101][101];

void fnc(int w, int h, int i, int j)
{
	int newdist=dist[i][j]+1;
    	if (i+1<h && !mark[i+1][j]) 
    	{
		if (dist[i+1][j] > newdist) 
		{
			dist[i+1][j] = newdist;
			fnc(w,h,i+1,j);
		}
	}
	if (i-1>=0 && !mark[i-1][j]) 
	{
		if (dist[i-1][j] > newdist) 
		{
			dist[i-1][j] = newdist;
			fnc(w,h,i-1,j);
		}
	}
	if (j+1<w && !mark[i][j+1]) 
	{
		if (dist[i][j+1] > newdist) 
		{
			dist[i][j+1] = newdist;
			fnc(w,h,i,j+1);
		}
	}
	if (j-1>=0 && !mark[i][j-1]) 
	{
		if (dist[i][j-1] > newdist) 
		{
			dist[i][j-1] = newdist;
			fnc(w,h,i,j-1);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,w,h,i,j,k,l,starti,startj,endi,endj;
	cin>>t;
	while (t--)
	{
        	cin>>w>>h;
        	for (i=0;i<h;i++)
        	{
            	for (j=0;j<w;j++)
		{
			cin>>cell[i][j];
			dist[i][j] = INT_MAX;
			mark[i][j]=0;
		}
	}
        for (i=0;i<h;i++)
        {
        	for (j=0;j<w;j++)
            	{
                	if (cell[i][j]=='#')
                    		mark[i][j]=1;
                	else if (cell[i][j]=='S')
                	{
                    		starti=i;
                    		startj=j;
                	}
			else if (cell[i][j]=='R')
			{
				endi=i;
				endj=j;
			}
                	else if (cell[i][j]=='!')
                	{
				for (k=i;k>=0;k--)
				{
					if (cell[k][j]=='#')
						break;
					mark[k][j]=1;
				}
                    		for (k=i;k<h;k++)
                    		{
                        		if (cell[k][j]=='#')
                            			break;
                        		mark[k][j]=1;
                    		}
                    		for (k=j;k>=0;k--)
                    		{
                        		if (cell[i][k]=='#')
                            			break;
                        		mark[i][k]=1;
                    		}
                    		for (k=j;k<w;k++)
                    		{
                        		if (cell[i][k]=='#')
                            			break;
                        		mark[i][k]=1;
                    		} 
                	}
        	}
        }
        dist[starti][startj] = 0;
        mark[endi][endj] = 0;
	fnc(w,h,starti,startj);
    	cout<<dist[endi][endj]<<endl;
    }
    return 0;
}
