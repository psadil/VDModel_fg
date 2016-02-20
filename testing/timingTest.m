% tic
% mat1 = zeros(360000,25,3);
% for first = 1:360000
%    for second = 1:25
%       for third = 1:3
%         mat1(first,second,third) = 1;
%       end
%    end
% end
% toc

tic
index=1;
mat2 = zeros(3,25,360000);
for first = 1:3
   for second = 1:25
      for third = 1:360000
        mat2(index) = 1;
        index=index+1;
      end
   end
end
toc

tic
index=1;
mat2 = zeros(360000,25,3);
for first = 1:3
   mat2(index) = 1;
   index=index+1;
end
for second = 1:25
    mat2(index) = 1;
   index=index+1;
end
for third = 1:360000
    mat2(index) = 1;
   index=index+1;
end
toc

% tic
% mat3 = zeros(3,360000);
% for first = 1:3
%     mat3(first,:) = 1;
% end
% toc
% 
% tic
% vec = zeros(360000,1);
% for first = 1:360000
%    vec(first) = 1 ;
% end
% 
% mat4 = zeros(3,360000);
% for first = 1:3;
%    mat4() = 1; 
% end
% toc