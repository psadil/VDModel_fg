function [inp_matrix] = listLength_gen_limited_input(numInputDims,p)

numRows = p.numRows;

nSimpleConj = p.numInputDims_Caudal ^ p.nStimFactors;
count=1;
avail_features = zeros(nSimpleConj, p.numInputDims_Caudal);
for inp1 = 1:p.numGrids_Caudal,
    for inp2 = 1:p.nStimFactors,
        avail_features(count,:) = [inp1 inp2];
        count=count+1;
    end
end



avail_features(avail_features==1)=0.05;
avail_features(avail_features==2)=0.35;
avail_features(avail_features==3)=0.65;
avail_features(avail_features==4)=0.95;



if numInputDims == p.numInputDims_Caudal,
    segment = avail_features(randi(p.components),:);
    
    
    inp_matrix_temp = ones(numRows,numRows,p.numInputDims_Caudal);
    inp_matrix = zeros(size(inp_matrix_temp));
    for dim = 1:p.numInputDims_Caudal
        inp_matrix(:,:,dim) = segment(dim) * inp_matrix_temp(:,:,dim);
    end
    
elseif numInputDims == p.numInputDims_PRC
    for seg = 1:p.numGrids_Caudal ,
        segment(seg,:) = avail_features(randi(p.components),:);
    end
    
    inp_matrix_temp = ones(numRows,numRows,p.numInputDims_PRC);
    inp_matrix = zeros(size(inp_matrix_temp));
    for dim = 1:p.numInputDims_PRC
        inp_matrix(:,:,dim) = segment(dim) * inp_matrix_temp(:,:,dim);
    end
    
else
    fprintf('Invalid number of stimulus dimensions \n');
end

end