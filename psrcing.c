#include<stdio.h>

int	ft_check_space(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i++] != ' ')
			return (1);
	}
	return (0);
}
int	ft_check_null(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (av[i++][0] == '\0')
			return (0);
	}
	return (1);
}



int	ft_check_full_space(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_check_space(av[i++]) == 0)
			return (0);
	}
	return (1);
}
int	ft_first_check(int ac, char **av){
	if (ft_check_null(ac, av) == 0)
		return (printf("Error\n"));
	if (ft_check_full_space(ac, av) == 0)
		return (printf("Error\n"));
	return (0);
}

char	*ft_join_to_numbers(int argc, char **argv)
{
	static char	*numbers;
	char		*tmp;
	int			i;

	i = 1;
	while (i < argc)
	{
		tmp = numbers;
		numbers = ft_strjoin(numbers, argv[i++]);
		free(tmp);
	}
	return (numbers);
}

int	ft_check_space(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

// int	ft_check_num(t_list **lst, int num)
// {
// 	t_list	*tmp;

// 	tmp = *lst;
// 	while (tmp->next)
// 	{
// 		if (num == tmp->value)
// 			return (0);
// 		tmp = tmp->next;
// 	}
// 	return (1);
// }

int	ft_check(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] == '-' || s[i] == '+') && ((i != 0 && s[i - 1] != ' ') || s[i + 1] == ' '))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_arg(char *s)
{
	int	i;

	i = 0;
	if (ft_check_space(s) == 0)
		return (0);
	while (s[i])
	{
		if (ft_isdigit(s[i]) == 0)
			return (0);
		i++;
	}
	if (ft_check(s) == 0)
		return (0);
	return (1);
}
int main(int ac, char **av)
{
    if(ac < 2)
    return(0);
    static char	*numbers;
	static char	**num_split;
    if(ft_first_check(ac, av) == 0)
    return(0);
    numbers = ft_join_to_numbers(ac, av);
    if (ft_check_arg(numbers) == 0)
	{
		free(numbers);
		return (printf("Error\n"));
	}
    // num_split = ft_split(numbers, ' ');
    
}
