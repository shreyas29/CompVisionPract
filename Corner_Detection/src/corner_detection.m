%read an image
I = imread('E:\SHREYAS\shreyas.jpg');

%convert the image into gray level
IGray = rgb2gray(I);

%create harris corner detector
CornerHarris = corner(IGray);

%create minumum eigen value corner detector
CornerEigen = corner(IGray,'MinimumEigenvalue');

%display original image
subplot(1,2,1);
imshow(IGray);
hold on

%display original image
subplot(1,2,2);
imshow(IGray);
hold on

%plot the detected harris corner points
subplot(1,2,1);
plot(CornerHarris(:,1), CornerHarris(:,2), 'r*');
title('Harris');

%plot the detected minimum eigen value corner points
subplot(1,2,2);
plot(CornerEigen(:,1), CornerEigen(:,2), 'g*');
title('Minimum Eigen Value');

%to add main title
annotation('textbox',[0 0.9 1 0.1],'String','Corner Detection','EdgeColor','none','HorizontalAlignment','center');