/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:16:56 by adelat            #+#    #+#             */
/*   Updated: 2024/05/29 14:23:04 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
!Ecrire un programme C qui définit une structure etudiant où un étudiant est représenté par son nom, son prénom et une note.

!L'utilisateur devra rentrer autant d'infos qu'il le souhaite avant de faire sa recherche.

!Lit ensuite une liste d’étudiants entrée par l’utilisateur et affiche les noms de tous les étudiants ayant une note supérieure ou égale à 10 sur 20.

*/

#include "ex00.h"

char	*ft_strdup(char *str)
{
	char *cpy;
	int	i;

	i = -1;
	while (str[++i])
		;
	cpy = malloc(sizeof(char) * (i + 1));
	if (!cpy)
		return NULL;
	i = -1;
	while (str[++i])
		cpy[i] = str[i];
	cpy[i] = '\0';
	return cpy;
}

t_student_struct ft_modify(t_student_struct *student, int stud)
{
	char	answer[90];
	int 	goodGrade;
	int 	grade;
	
	grade = 0;
	goodGrade = 0;
	(void)student;
	printf("Merci de rentrer le Nom de l'élève numéro %d\n", stud + 1);
	scanf("%s", answer);
	student[stud].name = ft_strdup(answer);
	printf("Merci de rentrer le Prénom de l'élève numéro %d\n", stud + 1);
	scanf("%s", answer);
	student[stud].firstName = ft_strdup(answer);
	while (goodGrade == 0)
	{
		printf("Merci de rentrer la note de l'élève numéro %d\n", stud + 1);
		scanf("%d", &grade);
		if (grade >= -42 && grade <= 125)
		{
			student[stud].grade = grade;
			goodGrade = 1;
		}
		else
			printf("La note rentrée est incorrecte\n");
	}
	return student[stud];
}

void ft_student()
{
	int nbr;
	t_student_struct *tab;
	int	stud;
	
	stud = 0;
	printf("Bonjour, combien d'élèves souhaitez-vous rentrer ?\n");
	scanf("%d", &nbr);
	tab = malloc(sizeof(t_student_struct) * (nbr + 1));
	while (stud < nbr)
	{
		tab[stud] = ft_modify(tab, stud);
		stud++;
	}
	tab[nbr].firstName = NULL;
	tab[nbr].grade = 0;
	tab[nbr].name = NULL;
	stud = 0;
	while (tab[stud].firstName)
	{
		if(tab[stud].grade >= 10)
			printf("Nom : %s\t Prenom : %s\t Note : %d\n", tab[stud].name, tab[stud].firstName, tab[stud].grade);
		stud++;
	}
}

int	main(void)
{
	ft_student();
}