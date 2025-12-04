class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *ds = head;
        ListNode *f = head;

        while (f != nullptr && f->next != nullptr) {
            ds = ds->next;
            f = f->next->next;
            if (ds == f) {
                return true; // Cycle detected
            }
        }
        return false; // No cycle
    }
};