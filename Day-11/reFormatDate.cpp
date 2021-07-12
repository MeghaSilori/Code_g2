class Solution {
public:
    string reformatDate(string date) {
        string res;
        if(date.size() == 13)
            res = date.substr(9,4) +"-"+ getmon(date.substr(5,3)) +"-"+ date.substr(0,2);
        else
            res = date.substr(8,4) +"-"+ getmon(date.substr(4,3)) +"-0" +date.substr(0,1);
        return res;  
    }
    string getmon(string m){
        if(m == "Jan") return "01";
        else if(m == "Feb") return "02";
        else if(m == "Mar") return "03";
        else if(m == "Apr") return "04";
        else if(m == "May") return "05";
        else if(m == "Jun") return "06";
        else if(m == "Jul") return "07";
        else if(m == "Aug") return "08";
        else if(m == "Sep") return "09";
        else if(m == "Oct") return "10";
        else if(m == "Nov") return "11";
        else if(m == "Dec") return "12";
        return "0";
    }
};