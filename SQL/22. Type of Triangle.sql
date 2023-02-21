SELECT
  CASE
    WHEN (A + B <= C)
    OR (B + C <= A)
    OR (A + C <= B) THEN 'Not A Triangle'
    WHEN (A = B)
    AND (B = C) THEN 'Equilateral'
    WHEN ((A = B) &(A != C))
    OR ((B = C) &(B != A))
    OR ((A = C) &(A != B)) THEN 'Isosceles'
    WHEN (A != B)
    AND (B != C)
    AND (A != C) THEN 'Scalene'
  END AS Triangle_Type
FROM
  TRIANGLES;
