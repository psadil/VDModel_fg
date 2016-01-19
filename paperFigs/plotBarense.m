% this script will generate figures. Note, however, that aspect ratios
% still needto be futzed with, and the legend doesn't include the PRC
% lesioned group (need to modify directly in something like the figure
% editor)


dPrime1_control = [2.78, 2.82 ; 3.55, 3.67 ];

% first half, second half ; first  half , second half
lesion1_1 = [2.66, 0.68 ; 3.53, 3.12];
lesion1_2 = [1.62, 1.34 ; 3.13, 3.47];

dPrime1_lesion = [ mean([lesion1_1(1,1), lesion1_2(1,1)]), mean([lesion1_1(1,2), lesion1_2(1,2)])...
    ;  mean([lesion1_1(2,1), lesion1_2(2,1)]), mean([lesion1_1(2,2), lesion1_2(2,2)]) ];


dPrime1_control_err = [0.134305965, 0.110881157; 0.106343101, 0.076492051 ];
dPrime1_lesion_err = [ std([lesion1_1(1,1), lesion1_2(1,1)])/sqrt(2), std([lesion1_1(1,2), lesion1_2(1,2)])/sqrt(2)...
    ;  std([lesion1_1(2,1), lesion1_2(2,1)])/sqrt(2), std([lesion1_1(2,2), lesion1_2(2,2)])/sqrt(2) ];




% lesion, then control
lesion2 = [2.49,2.29 ; 1.81, 1.4 ; 2.66, 2.5];
dPrime2_lesion = [mean(lesion2(1,:)), mean(lesion2(2,:)), mean(lesion2(3,:))];
dPrime2_control = [2.397926481, 2.730984986, 2.758519557];

dPrime2_lesion_err = [std(lesion2(1,:))/sqrt(2), std(lesion2(2,:))/sqrt(2), std(lesion2(3,:))/sqrt(2)];
dPrime2_control_err = [0.092513407, 0.078846235, 0.109253672];


%% task 1
figs(1) = figure;
handles = barweb(dPrime1_control...
    , dPrime1_control_err...
    , [] ...
    , {'High', 'Low'}...
    , {'Barense et al. Experiment 3'}...
    , {'Stimulus Ambiguity'}...
    , {'d'''}...
    , [rgb('Chocolate') ; rgb('Goldenrod')]);
legend('Control First Half', 'Control Second Half', 'PRC Lesion Group', 'Location', 'NorthWest');
legend BOXOFF
set(gca,'fontsize',30)
figs(1).CurrentAxes.YLim = [0, 6];
set(findall(gcf,'type','text'),'FontSize',30,'fontWeight','bold')

x1 = handles.bars(1).XOffset;
x2 = handles.bars(2).XOffset;

hold on
hand1 = errorbar([1+x1, 1+x2], dPrime1_lesion(1,:), dPrime1_lesion_err(1,:), '-kx', 'MarkerSize', 10,'linewidth', 2);
hand2 = errorbar([2+x1, 2+x2], dPrime1_lesion(2,:), dPrime1_lesion_err(2,:), '-kx', 'MarkerSize', 10,'linewidth', 2);
% legend('High Ambiguity', 'Low Ambiguity', 'Location','NorthWest');


saveas(figs(1),[saveFolder, '/dPrime_adj'], 'fig');
saveas(figs(1),[saveFolder, '/dPrime_adj'], 'jpg');


%% task 2

figs(2) = figure;
handles = barweb(dPrime2_control...
    , dPrime2_control_err...
    , [] ...
    , {'Low 1              High              Low 2'}...
    , {'Barense et al. Experiment 4'}...
    , {'Interference'}...
    , {'d'''}...
    , [rgb('Moccasin') ; rgb('Moccasin') ; rgb('Moccasin')]);
set(gca,'fontsize',30)
figs(2).CurrentAxes.YLim = [0, 6];
set(findall(gcf,'type','text'),'FontSize',30,'fontWeight','bold')

x1 = handles.bars(1).XOffset;
x2 = handles.bars(2).XOffset;
x3 = handles.bars(3).XOffset;

hold on
hand1 = errorbar([1+x1, 1+x2, 1+x3], dPrime2_lesion, dPrime2_lesion_err, '-kx', 'MarkerSize', 10,'linewidth', 2);

% legend('Control', 'Control High Ambiguity', 'Control Low Ambiguity 2', 'PRC Lesion Group', 'Location','NorthWest');
legend('Control', 'Location','NorthWest');
legend BOXOFF
