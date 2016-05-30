
outer = 'graphsAndSession/delay/all';
ds=dir(outer);
for d = 4:length(ds)  % need to start from 3, since first two are '.' and '..'
    
    for sess = 1:10
        
        % load every session with a given name
        % without the _ before the *, session 10 would be loaded with
        % session 1
        fs = dir([outer, '/', ds(d).name, '/Session', num2str(sess),'_*']);
        for f=1:length(fs)
            fname=[outer, '/', ds(d).name, '/',fs(f).name];
            data=load(fname); % comes in structure 'p.' call data.p to access
            
            % gather each session for use in dataframe
            
        end 
    end
end
