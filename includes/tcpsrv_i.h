/*
** tcpsrv_i.h for  in /home/xaqq/Documents/net
** 
** Made by arnaud kapp
** Login   <kapp_a@epitech.net>
** 
** Started on  Wed Feb 22 17:21:22 2012 arnaud kapp
** Last update Tue Apr  3 11:51:30 2012 arnaud kapp
*/

#include "tcpsrv.h"

# define	TCPSRV_BOUND		1
# define	TCPSRV_LISTENING	2


/**
 * Global pointer on server instance
 */
__attribute__((visibility("internal")))
TcpServer	*__tcp_server;

/**
 * Global pointer on clients' linked list.
 */
__attribute__((visibility("internal")))
TcpClient	*__tcp_clients;

__attribute__((visibility("internal")))
int		get_epoll_fd();
