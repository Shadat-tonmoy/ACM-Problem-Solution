import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.List;
import java.util.Scanner;

class Main {

    public static void main(String args[]){
        int i,j,k,l,m,n,a,b,c,d,tc;
        String input;
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext())
        {
            tc = scanner.nextInt();
            for(int x=0;x<tc;x++)
            {
                input = scanner.next();
                String monthString = input.substring(0,2);
                String dateString = input.substring(2,4);
                String yearString = input.substring(4);
                int month = Integer.parseInt(monthString)-1;
                int date = Integer.parseInt(dateString);
                int year = Integer.parseInt(yearString);
                Calendar calendar = Calendar.getInstance();
                calendar.set(Calendar.MONTH,month);
                calendar.set(Calendar.DATE,date);
                calendar.set(Calendar.YEAR,year);
                calendar.add(Calendar.WEEK_OF_YEAR,40);
                long outputTimeStamp = calendar.getTimeInMillis();
                int outputMonth = calendar.get(Calendar.MONTH);
                int outputDate = calendar.get(Calendar.DATE);
                int outputYear = calendar.get(Calendar.YEAR);
                List<Sign> signs = getSignList(outputYear);
                String outputSign = "Capricorn";
                for(Sign sign:signs)
                {

//                    Calendar calendar1 = Calendar.getInstance();
//                    calendar1.setTimeInMillis(sign.getLowerLimit());
//                    String lowerTime = calendar1.getTime().toString();
//                    calendar1.setTimeInMillis(sign.getUpperLimit());
//                    String upperTime = calendar1.getTime().toString();
//                    System.out.println("Output TS "+outputTimeStamp+" CS "+lowerTime+" Upper "+upperTime);
                    if(sign.isInside(outputTimeStamp))
                    {
                        outputSign = sign.getSignTitle();
                        break;
                    }
                }

                System.out.println( (x+1) + " "+addLeadingZero(outputMonth+1)+"/"+addLeadingZero(outputDate)+"/"+outputYear+" "+outputSign.toLowerCase());


            }
        }

    }

    public static String addLeadingZero(int n)
    {
        String result = "";
        if(n<10)
            result = "0"+n;
        else result += n;
        return result;
    }

    public static List<Sign> getSignList(int year)
    {
        List<Sign> signs = new ArrayList<>();
        signs.add(new Sign("Aquarius",21,19,Calendar.JANUARY, Calendar.FEBRUARY,year));
        signs.add(new Sign("Pisces",20,20,Calendar.FEBRUARY, Calendar.MARCH,year));
        signs.add(new Sign("Aries",21,20,Calendar.MARCH, Calendar.APRIL,year));
        signs.add(new Sign("Taurus",21,21,Calendar.APRIL, Calendar.MAY,year));
        signs.add(new Sign("Gemini",22,21,Calendar.MAY, Calendar.JUNE,year));
        signs.add(new Sign("Cancer",22,22,Calendar.JUNE, Calendar.JULY,year));
        signs.add(new Sign("Leo",23,21,Calendar.JULY, Calendar.AUGUST,year));
        signs.add(new Sign("Virgo",22,23,Calendar.AUGUST, Calendar.SEPTEMBER,year));
        signs.add(new Sign("Libra",24,23,Calendar.SEPTEMBER, Calendar.OCTOBER,year));
        signs.add(new Sign("Scorpio",24,22,Calendar.OCTOBER, Calendar.NOVEMBER,year));
        signs.add(new Sign("Sagittarius",23,22,Calendar.NOVEMBER, Calendar.DECEMBER,year));
        signs.add(new Sign("Capricorn",23,20,Calendar.DECEMBER, Calendar.JANUARY,year));
        return signs;
    }

    static class Sign{
        long lowerLimit, upperLimit;
        Calendar calendar;
        int startDay,endDay,startMonth,endMonth,year;
        private String signTitle;

        public Sign(String signTitle, int startDay, int endDay, int startMonth, int endMonth, int year) {
            this.signTitle = signTitle;
            this.startDay = startDay;
            this.endDay = endDay;
            this.startMonth = startMonth;
            this.endMonth = endMonth;
            this.year = year;
            this.calendar = Calendar.getInstance();
            calendar.set(Calendar.YEAR,year);
        }

        public long getLowerLimit()
        {
            calendar.set(Calendar.DATE,startDay);
            calendar.set(Calendar.MONTH,startMonth);
            calendar.set(Calendar.YEAR,year);
            return calendar.getTimeInMillis();
        }

        public long getUpperLimit()
        {
            calendar.set(Calendar.DATE,endDay);
            calendar.set(Calendar.MONTH,endMonth);
            if(signTitle.equalsIgnoreCase("Capricorn"))
                calendar.set(Calendar.YEAR,year+1);
            else calendar.set(Calendar.YEAR,year);
            return calendar.getTimeInMillis();
        }

        public boolean isInside(long timeStamp)
        {
            return timeStamp>=getLowerLimit() && timeStamp<=getUpperLimit();
        }

        public String getSignTitle() {
            return signTitle;
        }
    }




    /**
     * 2
     * 01232009
     * 01232008
     *
     * */

    /*
    *
10
03162000
03172000
03182000
03192000
03202000
03212000
03222000
03232000
03242000
03252000

    *
    *
    * */


}
