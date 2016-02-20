tic;
n = 200;
M = magic(n);
R = rand(n);
parfor i = 1:n
   A(i) = sum(M(i,:).*R(n+1-i,:));
end
toc

tic;
n = 200;
parfor i = 1:n
   M = magic(n);
   R = rand(n);
   A(i) = sum(M(i,:).*R(n+1-i,:));
end
toc