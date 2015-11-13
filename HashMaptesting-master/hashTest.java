import java.io.*;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;

/**
 * Created by hady on 04/10/15.
 */
public class hashTest {


    final static String logsFIle = "/home/hady/IdeaProjects/HashExample/src/NASA_access_log_Jul95";// file paths
    final static String vistorsFile = "/home/hady/IdeaProjects/HashExample/src/visitors.txt";
    final static String hitsFIle = "/home/hady/IdeaProjects/HashExample/src/hits.txt";
    final static String hitsFIle1 = "/home/hady/IdeaProjects/HashExample/src/hits1.txt";
    final static String hitsFIle2 = "/home/hady/IdeaProjects/HashExample/src/hits2.txt";
    final static String hitsFIle3 = "/home/hady/IdeaProjects/HashExample/src/hits3.txt";
    final static String hitsFIle4 = "/home/hady/IdeaProjects/HashExample/src/hits4.txt";
    final static String hitsFIle5 = "/home/hady/IdeaProjects/HashExample/src/hits5.txt";
    final static String hitfilesArray[] = {hitsFIle1,hitsFIle2,hitsFIle3,hitsFIle4,hitsFIle5} ;
    final static String topHitsFIle = "/home/hady/IdeaProjects/HashExample/src/tophits.txt";
    private static Map<String, Integer> hitsHashMap = new HashMap<String, Integer>(); //the hash map for hits storage

    public hashTest() {
    }

    public static void GenerateDataFromLog() throws IOException { // genreate data from log and write the vistors
        FileInputStream fstream = new FileInputStream(logsFIle);
        BufferedReader bufferedReaderLog = new BufferedReader(new InputStreamReader(fstream));
        String strLine;
        PrintWriter out = new PrintWriter(vistorsFile, "UTF-8");

        while ((strLine = bufferedReaderLog.readLine()) != null) {
   try{ String[] oneLine = strLine.split(" ",8);
//               if(oneLine.length!=8)break;
//
//                    out.println(oneLine[0]); // write in the vistors folder
//        System.out.println(oneLine[6]);
                    if (hitsHashMap.containsKey(oneLine[6])) { // put url in the hashmap
                        int count = hitsHashMap.get(oneLine[6]);
                        hitsHashMap.put(oneLine[6], count + 1);
                    } else {
                        hitsHashMap.put(oneLine[6], 1);
                    }

                }
           catch (Exception e) {
//               System.err.println("Error");
           }        }
        out.flush();
        out.close();

    }

    public static void writeToTophits(Object[] hitsObjectHashMap) throws IOException { // write the top hits genreated from the data object from the hash map
        Arrays.sort(hitsObjectHashMap, new Comparator() {
            public int compare(Object o1, Object o2) { /// compare values
                return ((Map.Entry<String, Integer>) o2).getValue().compareTo(
                        ((Map.Entry<String, Integer>) o1).getValue());
            }
        });
        int oneFIleSize=(hitsObjectHashMap.length/5)+1;// the size of single size if no vlaue reptation occuired
        int oneFileCounter=0;
        int tempValue=0; // the previous value to be stored here
        int arrayInc=0; // to move on array of paths to change the write
        PrintWriter out = new PrintWriter(hitsFIle1, "UTF-8");
        for (Object e : hitsObjectHashMap) {
                    String theKey =((Map.Entry<String, Integer>) e).getKey();
                    int theValue =((Map.Entry<String, Integer>) e).getValue();
            if(oneFileCounter>oneFIleSize && tempValue!=theValue){
                out.close();
                tempValue=0;
                oneFileCounter=0;
                arrayInc++;
                switch (arrayInc){ //  for some reason out = new PrintWriter(hitfilesArray[arrayInc++], "UTF-8"); wasn't working
                    case 1:{
                         out = new PrintWriter(hitfilesArray[1], "UTF-8");};
                         break;
                    case 2:{
                        out = new PrintWriter(hitfilesArray[2], "UTF-8");
                        break;
                }
                    case 3:{
                        out = new PrintWriter(hitfilesArray[3], "UTF-8");
                        break;
                    }
                    case 4:{
                        out = new PrintWriter(hitfilesArray[4], "UTF-8");
                        break;
                    }
                }
            }
            else{
                out.println(theKey + "    " + theValue);
                tempValue=theValue;
                oneFileCounter++;
            }
            out.flush();
        }
        out.flush();
        out.close();

    }

    public static void writeToHits() throws IOException {
        PrintWriter out = new PrintWriter(hitsFIle, "UTF-8");
        for (Map.Entry<String, Integer> entry : hitsHashMap.entrySet()) { // write the hash map
            out.println(entry.getKey() + "  " + entry.getValue());
        }
        out.flush();
        out.close();
    }

    public static void main(String[] args) throws IOException { // read log file and write in the 3 files

        GenerateDataFromLog();
        Object[] hitsObjectHashMap = hitsHashMap.entrySet().toArray();
        writeToTophits(hitsObjectHashMap);
        writeToHits();

    }
}