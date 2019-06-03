#include "header_files/declarations.h"

Node* LLRotation(Node* p) {

	Node* pl = p->left;
	Node* plr = pl->right;

	pl->right = p;
	p->left = plr;

	p->height = nodeHeight(p);
	pl->height = nodeHeight(pl);

	return pl;

}


Node* LRRotation(Node* p) {

	Node* pl = p->left;
	Node* plr = pl->right;

	p->left = plr->right;
	pl->right = plr->left;

	plr->left = pl;
	plr->right = p;

	p->height = nodeHeight(p);
	pl->height = nodeHeight(pl);
	plr->height = nodeHeight(plr);

	return plr;

}


Node* RRRotation(Node* p) {

	Node* pr = p->right;
	Node* prl = pr->left;

	pr->left = p;
	p->right = prl;

	p->height = nodeHeight(p);
	pr->height = nodeHeight(pr);

	return pr;


}


Node* RLRotation(Node* p) {

	Node* pr = p->right;
	Node* prl = pr->left;

	p->right = prl->left;
	pr->left = prl->right;

	prl->left = p;
	prl->right = pr;

	pr->height = nodeHeight(pr);
	p->height = nodeHeight(p);
	prl->height = nodeHeight(prl);

	return prl;
}