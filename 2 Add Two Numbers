class Solution {
public:
    ListNode*rev(ListNode*l)
    {
        ListNode*p,*q,*tmp;
        p=l;
        q=p->next;
        while(q)
        {
            tmp=q->next;
            q->next=p;
            p=q;
            q=tmp;
        }
        l->next=NULL;
        l=p;
        return l;

    }
    void add(ListNode**p,int num)
    {
        ListNode*q=*p;
        ListNode*tmp=(ListNode*)malloc(sizeof(ListNode));
        if(!q)
        {
            tmp->val=num;tmp->next=NULL;
            *p=tmp;
            return;
        }
        while(q->next) q=q->next;
        tmp->val=num;
        tmp->next=q->next;
        q->next=tmp;
        return;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode*p,*q,*ansp=NULL;
        //l1=rev(l1);l2=rev(l2);
        p=l1;q=l2;
        int s=0,c=0;
        while(p && q)
        {
            s=(p->val+q->val+c)%10;
            c=(p->val+q->val+c)/10;
            add(&ansp,s);
            p=p->next;q=q->next;
        }
        while(p)
        {
            s=(p->val+c)%10;
            c=(p->val+c)/10;
            add(&ansp,s);
            p=p->next;
        }
        while(q)
        {
            s=(q->val+c)%10;
            c=(q->val+c)/10;
            add(&ansp,s);
            q=q->next;
        }
        if(c) add(&ansp,c);
        //ansp=rev(ansp);
        return ansp;
    }
};
