%read an image
I = imread('E:\SHREYAS\shreyas.jpg');

%convert the image into gray level
IGray = rgb2gray(I);
subplot(1,2,1)
imshow(IGray);
title('Original Image');
hold on;

%apply canny edge detector on the gray image
EdgeCanny = edge(IGray,'canny');
subplot(1,2,2);
imshow(EdgeCanny);
title('Canny Edge Detection');

%to add main title
annotation('textbox',[0 0.9 1 0.1],'String','Edge Detection','EdgeColor','none','HorizontalAlignment','center');