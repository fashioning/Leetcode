#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


    bool checkPosi(vector<string> &v, int row, int colum,  const int &n)
    {
        if(1 == v.size()) return true;
		
        for(vector<string>::iterator it=v.begin(); it - v.begin() < row; it++)
        {
            int temp = it - v.begin() + colum - row; //temp is the relative position of column;//query row or colum 
            if( 'Q' == (*it)[colum] ) return false; //clumn check;
            if( temp >=0 && 'Q' == (*it)[temp] ) return false; // maindiag check;
            if(  (row + colum) - (it - v.begin() ) < n && 'Q' == (*it)[(row + colum) - (it - v.begin() )] ) return false; //unti-diag check;
//            if( row == it - v.begin())
//            { if (it->find('Q') != string::npos) return false; }//check if resonable in a row;
	    }
		return true;
    }
         void Dfs(vector<vector<string> > &result, vector<string> &v, int &r, const int &n)
         {
            if(v.size() == n) //����һ�����н⡣
            {
                result.push_back(v);// �浽�����ȥ��
                v.pop_back(); //�³����һ�㣬�����������һ���Ƿ��������⡣
				r--;
                return ;
            }
            for(int i=0; i < n; i++) //column scan;
            {
                    string s(n,'.');
                    s[i] = 'Q';
                    v.push_back(s);
					s.clear();
                if(checkPosi(v, r , i ,n ) )
                {

                    r++;
                    Dfs(result, v, r, n );
//                    if( !v.empty() ) v.pop_back();
                }
                else v.pop_back(); //ǰ�����������������ʣ��³�����
            }
			if(v.empty() ) return; //���е������˳��ˡ�
			v.pop_back(); //û�����е���󣬵��Ǹ���ɨ����ɾ����ֲ��������ݵ���һ�С�
			r--; //���ݵ���һ���ˣ��к�Ҳ�ü�һ��

        }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string> > result;
        vector<string> vs;
        if(n==1)
        {
            string s(1,'Q');
            vs.push_back(s);
            result.push_back(vs);
            return result;
        }
        if( n < 4) return result;
        int temp=0;
        Dfs(result, vs, temp, n);
        return result;
    }

void print(vector<vector<string> > &p)
{
	for(vector<vector<string> >::iterator it=p.begin(); it != p.end(); it++)
	{
		for(vector<string>::iterator it2=it->begin(); it2 != it->end(); it2++)
		{
			cout<<*it2<<endl;
		}
		cout<<"-------------------------------------------------------------------"<<endl;
	}
}


int main()
{
	vector<vector<string> > re;
	 re = solveNQueens(4);
	 print(re);
	return 0;
}