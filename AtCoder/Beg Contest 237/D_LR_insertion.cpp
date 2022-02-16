#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

class List
{
public:
    int val;
    List *next;

    List(int d)
    {
        val = d;
        next = NULL;
    }
};

void solve(List *head, string s, int n)
{
    List *temp = head;
    List *prev = head;

    cout << prev->val << " " << prev->next << endl;
    List *new_node = new List(2);
    List *ne = new List(3);

    new_node->next = ne;

    temp->next = new_node;

    // cout << temp->val << " -> " << temp->next->val << endl;

    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }

    for (int i = 0; i < n; i++)
    {
        List *new_node = new List(i + 1);
        // cout << new_node->val << " -> " << new_node->next << " == head -> " << head->val << endl;
        if (s[i] == 'L')
        {
            new_node->next = temp;
            if (temp != prev)
                prev->next = new_node;
            prev = temp;
            temp = new_node;
        }

        else
        {
            new_node->next = temp->next;
            temp->next = new_node;
            prev = temp;
            temp = new_node;
        }

        // cout << temp->val << " ";
    }
}

void solve()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    List *head = new List(0);

    // cout << head->val << " - " << head->next << endl;

    solve(head, s, n);

    // cout<<"Hello"<<endl;

    // while(head!=NULL){
    //     cout<<head->val<<" ";
    //     head=head->next;
    // }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}