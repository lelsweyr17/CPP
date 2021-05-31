#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

typedef struct		s_list {
	void			*content;
	struct s_list	*next;
}					t_list;

class Squad : public ISquad {
	public:
		Squad();
		~Squad();
		Squad(const Squad&);
		Squad& operator=(const Squad&);

		virtual 	int getCount() const;
		virtual 	ISpaceMarine* getUnit(int) const;
		virtual 	int push(ISpaceMarine*);

		void		lstAddBack(t_list **lst, t_list *newLst);
		t_list		*lstLast(t_list *lst);
		t_list		*lstNew(void *content);

	private:
		int				count;
		t_list			*squad;
};

#endif 