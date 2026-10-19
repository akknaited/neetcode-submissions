class MinStack
{
stack<int> a;
stack<int> mini;
public:
    MinStack()
    {

    }
    
    void push(int val)
    {
        a.push(val);
        if (mini.empty() || val <= mini.top()) 
        {
            mini.push(val);
        }
    }
    
    void pop() 
    {
        if (!mini.empty() && a.top() == mini.top())
        {
            mini.pop();
        }
        a.pop();
    }
    
    int top() 
    {
        return a.top();
    }
    
    int getMin() 
    {
        return mini.top();
    }
};
