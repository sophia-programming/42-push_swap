/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaoba <oaoba@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 01:37:42 by oaoba             #+#    #+#             */
/*   Updated: 2023/02/11 01:37:46 by oaoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size == 0 || count == 0)
		ft_calloc(1, 1);
	if (count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
//
//#include <libc.h>
//
//int main()
//{
//	char *s = ft_calloc(0, 0);
//}

//#include <libc.h>
//
//int main() {
//	char *s = ft_calloc(10, sizeof(char));
//	char *s = malloc(sizeof(char) * 10);
//	char a = '0';
//	for (int i = 0; i < 9; i++) {
//		s[i] = a + i;
//	}
//	s[9] = '\0';
//	mallocの場合はこれがないと-g -fsanitize=addressをしたときに
//	不正なメモリアクセスとしてコンパイラに怒られてしまう
//	printf("%s\n", s);
//	free(s);
//}