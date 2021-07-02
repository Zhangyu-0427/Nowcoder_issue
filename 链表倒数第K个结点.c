/**
 * struct ListNode {
 *  int val;
 *  struct ListNode *next;
 * };
 */

/**
 *
 * @param pListHead ListNode类
 * @param k int整型
 * @return ListNode类
 */
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k ) {
    // write code here

    if(pListHead == NULL)
        return NULL;
    struct ListNode* fast = pListHead;
    struct ListNode* slow = pListHead;
    while(k--)
    {
        if(fast)
            fast = fast->next;
        else
            return NULL;
    }

    while(fast)
    {
        slow = slow->next;

        fast = fast->next;
    }

    return slow;
}
