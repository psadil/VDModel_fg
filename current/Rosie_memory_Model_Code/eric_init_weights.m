function m_out = eric_init_weights

global NUM_ROWS NUM_COLS NUM_INPUT_DIMS

d = 1;
avail_values = [.05 .333 .667 .95];
if NUM_INPUT_DIMS == 1
    m_out = d*(rand(NUM_ROWS,NUM_COLS));
%elseif NUM_INPUT_DIMS == 2
 %   m_out = cat(3,d*(rand(NUM_ROWS,NUM_COLS)),d*(rand(NUM_ROWS,NUM_COLS)));
        % The "cat" command joins up two slices along 3rd matrix dimension   
    %mat = cat(3,(ceil(4*rand(NUM_ROWS,NUM_COLS))),(ceil(4*rand(NUM_ROWS,NUM_COLS))));
    %m_out(:,:,:) = avail_values(mat(:,:,:));
elseif NUM_INPUT_DIMS == 6,
    m_out = cat(3,d*(rand(NUM_ROWS,NUM_COLS)),d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)));
   %   mat = cat(3,(ceil(4*rand(NUM_ROWS,NUM_COLS))),(ceil(4*rand(NUM_ROWS,NUM_COLS))), ...
  %              (ceil(4*rand(NUM_ROWS,NUM_COLS))),(ceil(4*rand(NUM_ROWS,NUM_COLS))), ...
   %             (ceil(4*rand(NUM_ROWS,NUM_COLS))),(ceil(4*rand(NUM_ROWS,NUM_COLS))));
    %m_out(:,:,:) = avail_values(mat(:,:,:));
%elseif NUM_INPUT_DIMS == 18,
 %   m_out = cat(3,d*(rand(NUM_ROWS,NUM_COLS)),d*(rand(NUM_ROWS,NUM_COLS)), ...
  %            d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
   %           d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
    %          d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
     %         d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
      %        d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
       %       d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
        %      d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
         %     d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)));    
elseif NUM_INPUT_DIMS == 24,
    m_out = cat(3,d*(rand(NUM_ROWS,NUM_COLS)),d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)), ...
              d*(rand(NUM_ROWS,NUM_COLS)), d*(rand(NUM_ROWS,NUM_COLS)));    
end
   