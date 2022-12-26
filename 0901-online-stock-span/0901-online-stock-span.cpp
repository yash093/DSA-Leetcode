class StockSpanner {
public:
    int i=0;
    stack<pair<int,int>> s;
    
    int next(int price) {
        i++;
        while(!s.empty() && s.top().second<=price) {
            s.pop();
        }

        if(s.empty())
        {
            s.push({i,price});
            return i;
        }
        
        pair<int,int> temp=s.top();
        s.push({i,price});
        return i-temp.first;
    }
};