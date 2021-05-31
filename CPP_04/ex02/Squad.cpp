#include "Squad.hpp"

Squad::Squad() : count(0), squad(0) {
}

Squad::~Squad() {
	t_list	*tmp;

	for (int i = 0; i < count; i++) {
		tmp = squad->next;
		delete (ISpaceMarine *)squad->content;
		delete(squad);
		squad = tmp;
	}
}

Squad::Squad(const Squad &copy) {
	(operator=(copy));
}

Squad &Squad::operator=(const Squad &sq) {
	if (this != &sq) {
		count = sq.count;
		squad = sq.squad;
	}
	return *this;
}

int				Squad::getCount() const {
	return count;
}

ISpaceMarine*   Squad::getUnit(int count) const {
	t_list	*test;

	test = squad;
	for (int i = 0; i < count; i++) {
		test = test->next;
	}
	return (ISpaceMarine *)test->content;
}

t_list			*Squad::lstLast(t_list *lst) {
	if (lst) {
		while (lst->next) {
			lst = lst->next;
		}
		if (!lst->next) {
			return (lst);
		}
	}
	return 0 ;
}

void			Squad::lstAddBack(t_list **lst, t_list *newLst) {
	t_list	*last;

	if (*lst) {
		last = lstLast(*lst);
		last->next = newLst;
	}
	else {
		*lst = newLst;
	}
}

t_list			*Squad::lstNew(void *content) {
	t_list	*lst = new t_list;
	lst->content = content;
	lst->next = NULL;
	return lst;
}

int				Squad::push(ISpaceMarine* marine) {
	t_list	*newLst;

	newLst = lstNew(marine);
	lstAddBack(&squad, newLst);
	count++;
	return count;
}