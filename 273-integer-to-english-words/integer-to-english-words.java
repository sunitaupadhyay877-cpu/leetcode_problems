class Solution {

    String[] one = {"", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
        };

    String[] two = {"Ten", "Eleven", "Twelve", "Thirteen",
        "Fourteen", "Fifteen", "Sixteen", "Seventeen",
        "Eighteen", "Nineteen"
        };

    String[] ten = {"", "", "Twenty", "Thirty", "Forty",
        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
        };

    public String numberToWords(int num) {
        if(num == 0){
             return "Zero";
          }

        String ans = "";
        String[] place = {"", "Thousand", "Million", "Billion"};
        int i = 0;
        
        while(num > 0) {
            int rem = num % 1000;
            if(rem != 0) {
                ans = helper(rem) + place[i] + " " + ans;
            }
            num = num / 1000;
            i++;
        }
       while(ans.contains("  ")) {
    ans = ans.replace("  ", " ");
   }

   return ans.trim();
    }

    public String helper(int num) {
        String ans = "";

        if(num >= 100) {
            ans += one[num / 100] + " Hundred ";
            num = num % 100;
        }
        if(num >= 20) {
            ans += ten[num / 10] + " ";
            num = num % 10;
        }
        if(num >= 10) {
            ans += two[num - 10] + " ";
        }
        else if(num > 0) {
            ans += one[num] + " ";
        }

        return ans;
    }
}