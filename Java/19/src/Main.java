import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args){
        String inputFile = "Text.txt";
        String outputFile = "NewText.txt";
        createNewTextFile(inputFile, outputFile);
    }

    private static void createNewTextFile(String inputFile, String outputFile){
        try (BufferedReader reader = new BufferedReader(new FileReader(inputFile));
             BufferedWriter writer = new BufferedWriter(new FileWriter(outputFile))) {

            String vowels = "аеёиоуыэюяАЕЁИОУЫЭЮЯ";
            String consonants = "бвгджзйклмнпрстфхцчшщБВГДЖЗЙКЛМНПРСТФХЦЧШЩ";

            int vowelsCount = 0;
            int consonantsCount = 0;
            int ch;

            while((ch = reader.read()) != -1){
                char character = (char) ch;
                if(vowels.indexOf(character) != -1){
                    writer.write('а');
                    vowelsCount++;
                } else if(consonants.indexOf(character) != -1){
                    writer.write('м');
                    consonantsCount++;
                } else{
                    writer.write(character);
                }
            }

            System.out.println("Vowels: " + vowelsCount);
            System.out.println("Consonants: " + consonantsCount);

        } catch(IOException e){
            System.out.println("Error: " + e.getMessage());
        }
    }
}


