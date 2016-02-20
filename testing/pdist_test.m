clear all
rows = 600;

X = randi(rows,[rows, rows]);
Y = randi(rows,[15, rows]);

idx = zeros(rows^2,2);
row = 1;
for x = 1:rows
    for y = 1:rows
        idx(row,:) = [x,y];
        row = row + 1;
    end
end

tic
[~, maxIdx] = max(sqrt(idx(:)));
[win_row, win_col] = ind2sub(size(idx),maxIdx);
toc
clear win_row
clear win_col


tic
idx_sqrt = sqrt(idx);
[~,win_row] = max(max(idx_sqrt,[],1));
[~,win_col] = max(max(idx_sqrt,[],2));
toc

D = pdist2(idx,[5,rows],'cityblock');

sqD = reshape(D,[rows,rows]);

sqD(sqD>rows)=sqD(sqD>rows)-rows;

% test out linear index

d = pdist2(idx(:),maxIdx,'cityblock');
sqd = reshape(d,[rows,rows]);

sqd(sqd>rows)=sqd(sqd>rows)-rows;
