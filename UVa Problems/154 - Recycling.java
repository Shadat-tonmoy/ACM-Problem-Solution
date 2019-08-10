import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

class Main {

    public static void main(String args[])
    {
        int i,j,k,l,m,n,minDif,ans=-1;
        List<List<String> > wordList = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext())
        {
            String input = scanner.next();
            if(input.startsWith("#"))
                break;
            if(input.startsWith("e"))
            {
                minDif = 99999999;
                for(i=0;i<wordList.size();i++)
                {
                    List<String> targetWords = wordList.get(i);
                    int difference = 0;
                    for(j=0;j<wordList.size();j++)
                    {
                        if(j!=i)
                        {
//                            difference = 0;
                            List<String> currentWords = wordList.get(j);
                            for(String targetWord:targetWords)
                            {
                                boolean found = false;
                                for(String currentWord : currentWords)
                                {
                                    if(targetWord.equals(currentWord))
                                    {
                                        found = true;
                                        break;
                                    }
                                }
                                if(!found)
                                    difference++;
                            }
//                            System.out.println("Difference Between "+i+" and "+j+" is "+difference);
                        }
                    }
                    if(difference<minDif)
                    {
                        minDif = difference;
                        ans = i+1;
                    }
//                    System.out.println("Total difference with "+i+" is "+difference);
                }
//                System.out.println("Minimum difference is "+minDif+" with "+ans);
                System.out.println(ans);
                wordList = new ArrayList<>();
            }
            else
            {
                List<String> words = new ArrayList(Arrays.asList(input.split(",")));
                wordList.add(words);
            }

        }
    }


}

/*
r/P,o/G,y/S,g/A,b/N
r/G,o/P,y/S,g/A,b/N
r/P,y/S,o/G,g/N,b/A
r/P,o/S,y/A,g/G,b/N
e
r/G,o/P,y/S,g/A,b/N
r/P,y/S,o/G,g/N,b/A
r/P,o/S,y/A,g/G,b/N
r/P,o/G,y/S,g/A,bc/N
ecclesiastical
* */




