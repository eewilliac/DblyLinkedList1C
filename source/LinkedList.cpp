#include <iostream>
#include "DNode.h"
#include "LinkedList.h"

LinkedList::LinkedList(){
	_header=new DNode();
	_trailer=new DNode();
	_header->nextAddr=_trailer;
	_trailer->prevAddr=_header;
}