

#include "libft.h"

void	ft_lstdelone(t_list *lst)
{
	if (!lst)
		return ;
	free(lst);
	lst = NULL;
}
// void del(int *value)
// {
//     free(value);
//     printf("rani wslt lhna\n");
//     value = NULL;
// }
// int main()
// {
//     char *pt = ft_strdup("test");
//     t_list *head = ft_lstnew(pt);
//     printf("%s\n", head -> content);
//     ft_lstdelone(head, del);
//     printf("%s\n", *((char *)head ->content));
// }