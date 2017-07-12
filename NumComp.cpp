class Solution {
public:
    int findComplement(int num) {
        deque<int> NumBinary = DecimaltoBinary(num);
        NumBinary = BinaryComplement(NumBinary);
        return BinarytoDecimal(NumBinary);
    }   
    deque<int> DecimaltoBinary(int integer)
    {
        deque<int> Binary;
        for(; integer > 0; integer /= 2)
        {
            if(integer % 2 == 0)
                Binary.push_front(0);
            else
                Binary.push_front(1); 
        }
        return Binary;
    }
    int BinarytoDecimal(deque<int> Binary)
    {
        int Decimal = 0;
        for(int i = 0; i < Binary.size(); i++)
            if(Binary[i] == 1)
                Decimal += pow(2, i);
        return Decimal;
    }
    deque<int> BinaryComplement(deque<int> Binary)
    {
        deque<int> Complement;
        for(int i = 0; i < Binary.size(); i++)
        {
            if(Binary[i] == 0)
                Complement.push_front(1);
            else
                Complement.push_front(0);
        }
        return Complement;
    }
};