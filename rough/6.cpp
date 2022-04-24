function answer = isamstrong(n)
n = num2str(n);

sum = 0;

for i = 1: length(n)
    
    sum = sum+ (str2num(n(i)))^3;
end

if sum == str2num(n)
    answer = logical(1);
else
    answer = logical(0);
end
