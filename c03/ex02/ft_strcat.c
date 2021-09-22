/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/21 01:27:24 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* int	main(void)
{
	char src[10]	= "fghijklm";
	char dest[10]	= "abcde";
	printf("Str: %s", ft_strcat(dest, src));
	return (0);
}  */

/* int	main(void)
{
	char test1[500] = "BGuOGuVohcxujSVLYTzOVkawfUW ";
	char test2[500] = "AMOvtyZoFBzsqetaVievoNnPHRobvzPfEgiaxJsQldMVvYozMROymhvtskocpYX ";
	char test3[500] = "KYnsyDUZKwdhhLiNYGADVKNgavtVCKvsOshGMcJvMiSgLgYlVcFijRTdskocpYX ";
	char test4[500] = "CPIzsjnGhLVMxryqMBfOgfkeEziqzFTrQxaNYXoAPwcUrMKtjcrgQAEmYKCZqsb ";
	char test5[500] = "vsbzMevpIQfdmIDjDoWZyqssqrzpDkAnAPAJTJMjkjrULKxKtbthkTZgpQBuKYBRcHo ";
	char test6[500] = "mmaQqWIESAdHDWKiPynzPzLHemVSymhZWOAJTJMjkjrULKxKtbthkTZgpQBuKYBRcHo ";
	char test7[500] = "CUPEignFtlvsVBBAIuhtpxYmawAzRahogHnZEhMjkjrULKxKtbthkTZgpQBuKYBRcHo ";
	char test8[500] = "NxIjlMXLywjNSUKqGdxvwRTSmFDJAodaMDignpUWVfMmzvoaqwthkTZgpQBuKYBRcHo ";
	char test9[500] = "JUVZayGQRTQafzhNnmEqHqpSLYDMvhdZmIemaTpJzdnqrQTdnKNSROEqsLkcKYBRcHo ";
	char test10[500] = "toto ";
	char test11[500] = "42l33rGQRTQafzhNnmEqHqpSLYDMvhdZmIemaTpJzdnqrQTdnKNSROEqsLkcKYBRcHo ";
	char test12[500] = "pouicrGQRTQafzhNnmEqHqpSLYDMvhdZmIemaTpJzdnqrQTdnKNSROEqsLkcKYBRcHo ";

	char btest1[500] = "jSVLYTzOVkawfUW";
	char btest2[500] = "sQldMVvYozMROymhvtskocpYX";
	char btest3[500] = "MiSgLgYlVcFijRTd";
	char btest4[500] = "FTrQxaNYXoAPwcUrMKtjcrgQAEmYKCZqsb";
	char btest5[500] = "kjrULKxKtbthkTZgpQBuKYBRcHo";
	char btest6[500] = "zLHemVSymhZWO";
	char btest7[500] = "nFtlvsVBBAIuhtpxYmawAzRahogHnZEh";
	char btest8[500] = "DJAodaMDignpUWVfMmzvoaqw";
	char btest9[500] = "JzdnqrQTdnKNSROEqsLkc";
	char btest10[500] = "";
	char btest11[500] = "l33r";
	char btest12[500] = "pouic";
	
	printf("%s\n", ft_strcat(test1, btest1));
	printf("%s\n", ft_strcat(test2, btest2));
	printf("%s\n", ft_strcat(test3, btest3));
	printf("%s\n", ft_strcat(test4, btest4));
	printf("%s\n", ft_strcat(test5, btest5));
	printf("%s\n", ft_strcat(test6, btest6));
	printf("%s\n", ft_strcat(test7, btest7));
	printf("%s\n", ft_strcat(test8, btest8));
	printf("%s\n", ft_strcat(test9, btest9));
	printf("%s\n", ft_strcat(test10, btest10));
	printf("%s\n", ft_strcat(test11, btest11));
	printf("%s\n", ft_strcat(test12, btest12));

} */