class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
class LinkedList:
    def __init__(self,data):
        self.head=Node(data)
        self.tail=self.head

    def push(self,data):
        node=Node(data)
        self.tail.next=node
        self.tail=self.tail.next

    def print(self):
        curr=self.head
        while(curr):
            print(curr.data," -> ",end="")
            curr=curr.next
        print('NONE')
    
    def reverse(self):
        curr=self.head
        prev=None
        while curr:
            next=curr.next
            curr.next=prev
            prev=curr
            self.head=prev
            curr=next

ll=LinkedList('a')
ll.push('b')
ll.push('c')
ll.push('d')
ll.push('e')
ll.print()
ll.reverse()
ll.print()