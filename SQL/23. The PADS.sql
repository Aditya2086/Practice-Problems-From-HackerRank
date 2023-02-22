SELECT concat(name,'(',left(occupation,1),')') AS ZZZ FROM occupations   
UNION ALL
SELECT concat('There are a total of  ',count(occupation),' ',lower(occupation),'s.') FROM occupations GROUP BY occupation ORDER BY ZZZ ;
