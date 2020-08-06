import sun.org.mozilla.javascript.Function;
import sun.security.pkcs11.wrapper.Functions;

import java.io.IOException;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;

/**
 * Created by hady on 1/29/15.
 */
public class Prolog_W {
    public static List<String> Funtions = new ArrayList<String>();//Contain &&
    public static List<String> All_ALL = new ArrayList<String>();//Contain &&
    public static List<String> Facts = new ArrayList<String>();// Pure line a fact
    public static List<String> All_File = new ArrayList<String>();//file from read function
    public static List<String> Negative_Fact = new ArrayList<String>();// negative facts
    final static String FILE_NAME = "/home/hady/IdeaProjects/Prolog_W/src/example14.txt";//input path
    final static String OUTPUT_FILE_NAME = "/home/hady/IdeaProjects/Prolog_W/src/example1.txt";//output path
    final static Charset ENCODING = StandardCharsets.UTF_8;//Charchters type


    public static List<String> readtFile(String aFileName) throws IOException {//read function
        Path path = Paths.get(aFileName);
        return Files.readAllLines(path, ENCODING);}
    public static void writetFile(List<String> aLines, String aFileName) throws IOException {//write function
        Path path = Paths.get(aFileName);
        Files.write(path, aLines, ENCODING );
    }

        public static  void Div_File(List<String> aFilec){//convert funtion ** important part **
            String Container ="" ;// String that contains the functions with and part
            for (int i_Div=2 ; i_Div<aFilec.size() ; i_Div ++)
            {
                if (aFilec.get(i_Div).contains("=>"))//detect that its a function not a fact with => in the line
                {
                    String[] Before_Arrow=aFilec.get(i_Div).split("=>");// split the line to 2 parts
                    String[] Function_Elemetns=Before_Arrow[0].split("&&");// split the elements for replacing the && with a comma
                    for(int i_container=0 ; i_container<Function_Elemetns.length ; i_container ++)
                        if(Container==""){Container+=Function_Elemetns[i_container];// to prevent add extra comma at the begining


                        }

                        else
                        {
                        Container+=","+Function_Elemetns[i_container];}
                    All_ALL.add(Before_Arrow[1].toLowerCase() + ":-" + Container.toLowerCase() + ".");//add to the listArray
                    //Funtions.add(Before_Arrow[1].toLowerCase()+":-"+Container.toLowerCase()+".");//add to the listArray

                }
                else if (aFilec.get(i_Div).contains("~")){ All_ALL.add(aFilec.get(i_Div).subsabc1234567tring(1).toLowerCase() + ":- false .");}//Negative_Fact.add(aFilec.get(i_Div).substring(1).toLowerCase()+":- false .");}// detect that its a negative fact
                else All_ALL.add(aFilec.get(i_Div).toLowerCase()+":- true .");// a normal fact //Facts.add(aFilec.get(i_Div).toLowerCase()+":- true .");// a normal fact
            Container="";
            }

    }



 public static void main( String[] args) throws IOException {
     try {
         All_File=readtFile(FILE_NAME) ;
     } catch (IOException e) {
         e.printStackTrace();
     }
     for (int i_Out=0 ; i_Out<All_File.size() ; i_Out++ ) System.out.println(All_File.get(i_Out));
     System.out.println(All_File.size());//orginal file
     System.out.println("------------------");
     Div_File(All_File);
//     for (int i_Out=0 ; i_Out< Negative_Fact.size(); i_Out++) System.out.println(Negative_Fact.get(i_Out));
//     for (int i_Out=0 ; i_Out<Facts.size(); i_Out++) System.out.println(Facts.get(i_Out));
//     for (int i_Out=0 ; i_Out<Funtions.size(); i_Out++) System.out.println(Funtions.get(i_Out));
     for (int i_Out=All_ALL.size()-1 ; i_Out>-1; i_Out --) System.out.println(All_ALL.get(i_Out));
     //writetFile(Negative_Fact, OUTPUT_FILE_NAME);Writing Function to a spacifc file
     //writetFile(Facts, OUTPUT_FILE_NAME);
     //writetFile(Funtions, OUTPUT_FILE_NAME);



 }
}
