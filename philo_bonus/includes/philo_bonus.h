/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoke <rhoke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:38:39 by rhoke             #+#    #+#             */
/*   Updated: 2021/12/13 19:28:50 by rhoke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_BONUS_H
# define PHILO_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <stdio.h>
# include <sys/time.h>
# include <semaphore.h>
# include <signal.h>

typedef struct s_data
{
	sem_t	*fork_s;
	sem_t	*print_s;
	pid_t	*philo_p;
	long	start;
	int		ph_count;
	int		eat_count;
	int		time_to_die;
	int		time_to_eat;
	int		time_to_sleep;
	int		i;
	int		j;
	int		status;
	long	lifetime;
}	t_data;

// utils_bonus.c
void	ft_error(char *str);
int		ft_atoi(const char *str);
int		arg_checker(int argc, char **argv);
int		ft_strlen(char *str);
// utils2_bonus.c
long	get_time(void);
long	ft_time(t_data *data);
void	ft_print(t_data *data, int num, char *s);
void	ft_delay(int ms);
// logic_bonus.c
void	*waiter(void *in_data);
void	lifetime(t_data *data);

#endif