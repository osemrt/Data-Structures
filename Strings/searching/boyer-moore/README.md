# Boyer-Moore Algorithm
The Boyer-Moore algorithm compares the pattern over the text from right to left. It uses the information of the various possible alignments in the pattern by preprocessing it. The main idea of this algorithm is that we compare the end characters of the pattern with the text. If they do not match, then the pattern can be moved on further. If the characters do not match in the end, there is no need to do further comparisons. In addition, in this algorithm, we can also see what portion of the pattern has matched (with the matched suffix), so we utilize this information and align the text and pattern by skipping any unnecessary comparisons.

The Boyer-Moore algorithm has two heuristics to determine the maximum shift possible for the pattern when we find a mismatch:

-   Bad character heuristic
-   Good suffix heuristic

At the time of a mismatch, each of these heuristics suggests possible shifts, and the Boyer-Moore algorithm shifts the pattern by considering the maximum shift possible due to bad character and good suffix heuristics. The details of the bad character and good suffix heuristics are explained in detail with examples in the following subsections.

## Bad character heuristic

The Boyer-Moore algorithm compares the pattern and the text string in the direction from right to left. It uses the bad character heuristic to shift the pattern. According to the bad character shift concept, if there is a mismatch between the character of the pattern and the text, then we check if the mismatched character of the text occurs in the pattern or not. If this mismatched character (also known as a bad character) does not appear in the pattern, then the pattern will be shifted next to this character, and if that character appears somewhere in the pattern, we shift the pattern to align with the occurrence of that character with the bad character of the text string.

Let's understand this concept by using an example. Consider a text string (T) and the pattern = {**acacac**}. We start by  comparing  the characters from right to left, that is, character  **b**  of the text string and character  **c** of the pattern. They do not match, so we look for the mismatched character of the text string, that is, **b**, in the pattern. Since it does not occur in the pattern, we shift the pattern next to the mismatched character, as shown in the following diagram:

![enter image description here](https://lh3.googleusercontent.com/uw2oS72IKYiegp277zlk2AM3cprT_AY5EUatTpDGqjVhCxjH6StmtpBRML87yy5s3ojKJNKkfcA)

Let's look at another example. We start by comparing characters of the text string and the pattern from right to the left, and we get a mismatch for the character  **d**  of the text. Here, the suffix  **ac** is matched, but the  characters  **d**  and  **c** do not match, and the mismatched character  **d** does not occur in the pattern. Therefore, we shift the pattern to the mismatched character, as shown in the following diagram:

![enter image description here](https://lh3.googleusercontent.com/lB-6uyxSCY4azxVQglSl3Pbzqf-WyaOBNkbVqjAv-wq9mxhFgqHFxKT5iv7qYXEC4N5PM7upC1g)

Let's consider another example case for the bad character heuristic. Here, the suffix  **ac** is matched, but the next characters, **a** and  **c**, do not match, so we search for the occurrences of the mismatched character  **a** in the pattern. Since it has two occurrences in the pattern, we have two options so that we can align the mismatched character, as shown in the following diagram. In such a situation, where we have more than one option to shift the pattern, we move the pattern with the minimum amount of shifts to avoid any possible match. (In other words, it would be the rightmost occurrence of that character in the pattern.) If we would have only one occurrence of the mismatched character in the pattern, we can easily shift the pattern in such a way that the mismatched character is aligned.

In the following example, we would prefer option  **1**  to shift the pattern:

![enter image description here](https://lh3.googleusercontent.com/IYK_0RtWxz6y1E90pkw7y7FWzZmeqGknqZBhere3HvMlQrFBPNSzvln_XA2FONaNQv271UPQRFU)

## Good suffix heuristic

The bad character heuristic does not always provide good suggestions. The Boyer-Moore algorithm also uses good suffix heuristic as well to shift the pattern over the text string to find out the location of the matched patterns.

Good suffix heuristic is based on the matched suffix. Here, we shift the pattern to the right in such a way that the matched suffix subpattern is aligned with another occurrence of the same suffix in the pattern. It works like this: we start by comparing the pattern and the text string from right to left. If we find any mismatch, then we check the occurrence of the suffix that we have matched so far. This is known as the good suffix. We shift the pattern in such a way that we align another occurrence of the good suffix to the text. Good suffix heuristic has mainly two cases:

1.  The matching suffix has one or more occurrences in the pattern.
2.  Some part of the matching suffix is present in the start of the pattern (this means that the suffix of the matched suffix exists as the prefix of the pattern).

Let's understand these cases with the following examples. Suppose we have a pattern, **acabac**. We get a mismatch for the characters  **a** and  **b**, but at this moment in time, we have already matched the suffix, that is,  **ac**. Now, we search for another occurrence of the good suffix  **ac** in the pattern and we shift the pattern by aligning that suffix, as follows:

![enter image description here](https://lh3.googleusercontent.com/w28nhbTYQ2nG3AKbwDw3ZCRSb9uddqQ9nT80FgguAvxR6auIrR5057V9Klnh9nsoqaW0b-MFvLU)

Let's consider another example, where we have two options to align the shift of the pattern so that we get two good suffix strings. Here, we will take the option  **1**  to align the good suffix by considering the option that has the  minimum shifts, as follows:

![enter image description here](https://lh3.googleusercontent.com/SkYrpw4lO9j7bwXVyoMm7AVvSUBk78iRhdXwDgskVYymPrWUONIvsbWbJP9-L0QIPQLDRMVrCsA)

Let's take a look at another example. Here, we get a suffix match of **aac**, but we get a mismatch for the characters  **b** and  **a**. We search for the good suffix  **aac**, but we do not find another occurrence in the pattern. However, we find that the prefix, **ac**, at the start of the pattern does not match with the whole suffix, but it does match with the suffix  **ac** of the matched suffix  **aac**. In such a situation, we shift the pattern by aligning with the suffix of  **aac** that is also a prefix of the pattern and align that prefix with the suffix, as follows:

![enter image description here](https://lh3.googleusercontent.com/DFULcQbAi6QTWz_VPGvNUf7jH6D3pxAefUbw7lSqKwhbLJaQ4WqkOyiklp__f_hYBw2_UPf_iAs)

Another case for the good suffix heuristic is as follows. In this case, we match the suffix **aac**, but we mismatch it at characters  **b** and **a**. We try to search for the matched suffix in the pattern, but there is no occurrence of the suffix in the pattern, so in this situation, we shift the pattern after the matched suffix, as follows:

![enter image description here](https://lh3.googleusercontent.com/FJT8l3DnhW9WBL1hAwig6gdxLXuyLZElJ6ikrgQzTYDdC7mp6098qxeFH2cdG_XgJscmH--V_eU)

We shift the pattern by the longer distance that is given by the bad character heuristics and the good suffix heuristics.

The  Boyer-Moore  algorithm takes the time of  O(m)  for the preprocessing of the pattern, and further searching takes the time complexity of  O(mn).