import java.io.*;
import java.util.*;

public class Main {
    private static int totalWords;

    public static void main(String[] args) {
        String inputFilePath = "text";
        Map<String, Integer> wordCounts = new TreeMap<>();
        List<String> sortedWords = new ArrayList<>();

        try (BufferedReader br = new BufferedReader(new FileReader(inputFilePath))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] words = line.toLowerCase().split("[\\W&&[^']]+");
                for (String word : words) {
                    if (!word.trim().isEmpty()) {
                        sortedWords.add(word);
                        wordCounts.put(word, wordCounts.getOrDefault(word, 0) + 1);
                        totalWords++;
                    }
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        Collections.sort(sortedWords);
        System.out.println("Сортировка слов в алфавитном порядке:");
        sortedWords.forEach(System.out::println);

        System.out.println("\nЧастота слов:");
        wordCounts.forEach((word, count) -> System.out.println(word + ": " + count + " (" + String.format("%.2f", (double)count/totalWords*100) + "%)"));

        int maxFrequency = Collections.max(wordCounts.values());
        System.out.println("\nСлово, встречающееся максимальное число раз:");
        wordCounts.forEach((word, count) -> {
            if (count == maxFrequency) {
                System.out.println(word + ": " + count + " (" + String.format("%.2f", (double)count/totalWords*100) + "%)");
            }
        });
    }
}
