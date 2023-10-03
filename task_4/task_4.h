#pragma once
#include <optional>
#include <iostream>
using namespace std;

template <typename typeData>
class list {
private:
	struct Node {
		Node* next;
		typeData data;
	};
		Node* head;
public:
	list() {
		head = nullptr;
	};

	list(list&&) {

	}

	~list() {
		Node* temp= head;
		while (temp->next != nullptr) {
			Node* nextTemp = temp->next;
			delete temp;
			temp = nextTemp;
		}
	}

	void addNode(typeData newdata,int pos) {
		Node* last = head;
		Node* temp=new Node;
		temp->data = newdata;
		temp->next = nullptr;
		if (head == nullptr) {
			head = temp;
		}
		else {
			if (pos == 0) {
				temp->next = temp;
				head = temp;
			}
			else {
				while (pos != 0 && (last->next != nullptr)) {
					last=last->next;
					pos--;
				}
				temp->next = nullptr;
				last->next = temp;
			}
		}

	};

	void removeNode(int pos) {
		Node* temp = head;
		Node* prevTemp= new Node;
		if (pos == 0 ) {
			if (head->next) {
				head = head->next;
			}
			else
			{
				head = nullptr;
			}
		}
		else {
			while (pos != 0 ) {
				prevTemp = temp;
				temp = temp->next;
				pos--;
			}
			if (temp->next != nullptr) {
				prevTemp->next = temp->next;
			}
			else {
				prevTemp->next = nullptr;
			}
			delete temp;
		}
	}

	std::optional<typeData> GetElement(int pos) {
		Node* temp = head;
		while (pos != 0) {
			temp = temp->next;
			pos--;
		}
		return temp->data;
	}

	void showNode() {
		Node* point = head;
		while (point != nullptr) {
			cout << point->data << "\n";
			point = point->next;
		};

	};
};