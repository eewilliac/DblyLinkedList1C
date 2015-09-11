class DNode;
class LinkedList{
public:
	LinkedList();
	void addFront(char* data);
	void addRear(char* data);
	void removeFront();
	void removeRear();
	bool empty() const; //what is the purpose of the const.
	int count();
	void display();
	const DNode* front() const;
	const DNode* back() const;

protected:
	void add(DNode* aNode,char* data);
	void remove(DNode* aNode);

private:	
	DNode* header;
	DNode* trailer;

};