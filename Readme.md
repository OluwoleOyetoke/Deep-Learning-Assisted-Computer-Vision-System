# Deep Learning Assisted Computer Vision System For Traffic Sign Classification and Detection

## Synopsis

Computers, as we have around today, are GIGO (Garbage-in-Garbage-Out) devices which are only capable of producing results based on what is inputted into them and how they have been originally programmed to respond to such inputs. As such, challenges exist with problem categories that cannot be formulated as algorithms, especially problems which depend on many subtle factors such as knowledge and understanding of previous scenes and corresponding reactions to them. As an example, for the recognition of the Queen of England’s image among a cluster of 100 other images, the human brain may be able to provide an informed guess, probably based on past knowledge and various other experiences combined, however, this cannot be accurately derived by a computer without an already pre-written algorithm. In the light of this, there has been growing interest in researches geared toward developing Artificial Intelligent (AI) models which are capable of learning and carrying out classification tasks without making references to any pre-written algorithm. One of such research area is in the field of Neural Networks (NN) which are a biologically inspired family of computation architectures built as extremely simplified models of the human brain.

It is safe to say that despite the ever-increasing popularity of transferring (human) tasks to computers for simplification purposes, there are still a lot of human tasks that are still poorly done by computers, such as in areas of visual perception and intelligence. This is because the largest part of the human brain works continuously on data analysis and interpretation while the largest part 
of the computer is only available for passive data storage. Thus, the brain therefore performs even closer to its theoretical maximum. Although the computer is fast, reliable, unbiased, never tired, consistent and sometimes can even carry out much more complex computational combinations than the human brain is known to muscle, it is still unable to synthesize new rules and  it is safe to say, it has no common sense. They rather have a group of arithmetic processing units and storage carefully interconnected to perform complex numerical calculations in a very short time but are not adaptive. 

On the other hand, the human brain possesses what we know as common sense, a bigger knowledge base, ability to synthesize new rules and spontaneously detect trends in data without  being pre-taught, even though based on capacity, the computer should be more powerful than the human brain as it averagely comprises of over 109 transistors with a switching time  of 10-9 seconds while the brain in comparison consists of over 1011 neurons but with only a switching time of about 10-3 seconds. With closer analysis, we note that although 
the human brain is easily tired, bored, biased, inconsistent and cannot be fully trusted, it still outperforms the computer in some application areas due to its perceptive nature  of operation (interpretation of sensory information in order to understand the environment). This explains why there still is major reliance on the human brain for classification tasks.

Juxtaposing the computer’s strengths and weaknesses against the human brain’s makes us realize that in as much as the human brain is better when it comes to perceptive tasks,  it has endurance, bias and inconsistency issues. Therefore, effort is being made by researchers to develop systems which are capable of fusing together the advantages of both the brain and the computer into one near perfect outfit. A system which can take on the perceptive learning, out of the box synthesis, self-organizing and self-learning characteristic of the human brain, while maintaining the massive computational capability, speed and enduring features of the computer. This motive has led to increased research on neural networks which are a biologically inspired family of computation architectures built as extremely simplified models of the human brain.

In summary, this project seeks to explore the science behind Neural Networks (NN), its various flavours (especially CNNs), application areas and then finally, narrow down by applying it in the design and development of a computer vision system which can be used for traffic sign recognition and detection in autonomous vehicles.

![Project Milestones](https://github.com/OluwoleOyetoke/Deep-Learning-Assisted-Computer-Vision-System/blob/master/Project%20Documentation/Img/Project%20Milestone.PNG)

##Project Implementation and Results
###IMDB Creation (Dataset)
A dataset of traffic sign images from the German Traffic Sign Recognition Benchmark (GTSRB) website is compiled and used to create the image database (IMDB) used to train and test the deep neural network. The German Traffic Sign Benchmark is a multi-class, single-image classification challenge held at the International Joint Conference on Neural Networks (IJCNN) 2011. The dataset consists of over 39,000 images in total, grouped into 43 different road traffic symbols.

Through a written IMDB creation script, the dataset is split into 70% training, 20% validation and 10% test sets of images which are used in the holistic training, validation and testing of the created AlexNet model. Validation images are used to test the performance of the network during the training process while the test images are reserved in this project to perform personal test on the network, post training. The validation set actually can be regarded as a part of training set, but it is usually used for parameter selection and to avoid overfitting. If a model is trained on a training set only, it is very likely to get close to 100% accuracy and over fit, thus get very poor performance on test set which have never been seen by the network before. The test-sets are only used to test the performance of a trained model and are the best means of detecting over fitting in the network.

###CNN Training
For this project, the AlexNet CNN model is used. The MatConvNet Toolbox is used to create, modify and train the AlexNet CNN model. MatConvNet includes a variety of layer models contained in its MATLAB library directory, such as convolution, deconvolution, max and average pooling, ReLU activation, sigmoid activation and many other pre-written functions. There are enough elements available to help implement many interesting state-of-the-art networks out of the box, or even import them from other toolboxes such as Caffe.
After the creation of the AlexNet model, the network undergoes training and is then tested to ensure performance and accuracy. Considering the fact that two levels of operation is cascaded, one for the traffic sign (object) detection and the other for the actual classification of the traffic sign, it is important to note that this chapter only explains the development, training and testing of the image classifier. Detailed testing and verification is carried out to ensure optimal performance of the system.
In order to develop a Convolutional Neural Network which is able to classify images fed into it, the network has to be trained over multiple epochs in a specialized manner. Batches of training images fed into the CNN first have to be pre-processed to the network’s standard input size and in most cases, normalized to have zero mean. This initiative affect the rate of convergence of the network during training to a great extent. It is important to remember that the convolutional layers of the network serve as the feature extractors while the fully connected layers and the softmax serve as the processing and classifier elements

The diagrams below show the results of the performance analysis and testing carried out and the descent in error rate of the classifier/CNN over the course of the 58 epochs (rounds) of training. This took about 47 hours using over 39000 training images on a 16 Gigabyte RAM quad core processor. The images below show the descent in the error rate as training proceeded, a classification example,and a bar graph showing performance improvement as the training went progressed.


'''html
<h1> Testing</h1>
<p>
	<p><center><img src="https://github.com/OluwoleOyetoke/Deep-Learning-Assisted-Computer-Vision-System/blob/master/Project%20Documentation/Img/rsz_img5.png" align="left" style="max-width: 20px" /></center></p>
	<p><center><img src="https://github.com/OluwoleOyetoke/Deep-Learning-Assisted-Computer-Vision-System/blob/master/Project%20Documentation/Img/rsz_img5.png" align="right" style="max-width: 20px" /></center></p>
	<p><center><img src="https://github.com/OluwoleOyetoke/Deep-Learning-Assisted-Computer-Vision-System/blob/master/Project%20Documentation/Img/img6.PNG" align="center" style="max-width: 40px" /></center></p>
</p>
![Sample Classification](https://github.com/OluwoleOyetoke/Deep-Learning-Assisted-Computer-Vision-System/blob/master/Project%20Documentation/Img/img7.PNG) 
![Improvememnt Bar Graph Per Epoch](https://github.com/OluwoleOyetoke/Deep-Learning-Assisted-Computer-Vision-System/blob/master/Project%20Documentation/Img/img6.PNG)
'''
As at Epoch 58, the achieved accuracy level was 98.464. Continuing the training a few more epochs down the line will result in accuracy levels above 99%


###Sign Detection & Integration

###Optimization

## Repository Info

1. This repository purely contains the project documentation and codes. Large supplementing files such as the:

	* The IMDB file
	* Trained ConvNet
	* Test Images
	* Test Videos

...can be downloaded from the links given below

2. Remember to set the project folder location in the file 'setGlobalVariables.m' (src>Others), as the current ProjectFolder = ('C:\Temp\final_project\'),
which may be different from where you have this project located on your computer

3. Also remember to unzip the 'TestImages' folder and 'TrainingImages' folder

4. Once all code files and supplementing files/folders have all been downloaded, import folder path into MATLAB directory

5. Paste the below and run in MATLAB to download/install MATCONVNET Library

	``` untar('http://www.vlfeat.org/matconvnet/download/matconvnet-1.0-beta23.tar.gz') ;
	cd matconvnet-1.0-beta23
	run matlab/vl_compilenn;

	% Setup MatConvnet.
	run matlab/vl_setupnn; ```

Note once again: Different function files interact with various supporting files such as video clips, images, webcam etc. 
Make sure that all of this resources are well references/linked before you run any of the functions, so as to avoid minor errors.

### Download Links
Test Images: Included in 'Training Dependencies Folder'.
IMDB File (32x32), Trained Convnet (227x227), TestVideoClips: [Here](https://drive.google.com/file/d/0B8Xt2Y8rsj5FZ2g1ZVZyXzh0TUU/view?usp=sharing)
Project Documentation: [Here](https://github.com/OluwoleOyetoke/Deep-Learning-Assisted-Computer-Vision-System/blob/master/Final_Documentation_(MSc%20Thesis).pdf)

## Functions Breakdown
The list below gives a short explanation on each of the function.

1. **AlexNetNN.m:** Used to create alexnet model, link to the IMDB and train
2. **callAlex.m:** Used to call AlexNetNN and also set some post training parameters 
3. **classifyImg.m:** Used to run classification on the detected ROI
4. **createIMDB.m:** Used to create an image database for the NN training
5. **sceneClassifier.m:** Used to validate input image to system, set detection algorithm parameters and call parallel/nonparallelDetection
6. **CCA.m:** Used to perform connected component analysis on input image
7. **detectCircle.m:** For circle detection
8. **detectCorner.m:** For corner detection (Harris method)
9. **detectEdge.m:** For edge detection (Sobel’s method)
10. **getROI.m:** Used to call CCA and also set some pre-CCA call conditions
11. **myDetectCircle.m:** Customized circle detection algorithm (Circular Hough Transform)
12. **networkTest.m:** Used to test individual CNN epoch outputs
13. **testDetection.m:** Used to test individual detection functions
14. **getGrayScale.m:** To get image grayscale
15. **MapRegion.m:** Region class used for CCA
16. **viewCircularHough:** Used to have a look into how the circular hough transform operates
17. **shapeAnalyser.m:** Analyses and searches for triangles, rectangles, octagon and diamond shapes
18. **cornerTestBench.m:** Testbench for corner detection function
19. **setGlobalVariables.m:** Used to set global variables
20. **getGlobalVariables.m:** Used to get global variables
21. **drawDetectedCircle.m:** Takes in image, circle radius and centre co-ordinates and produces the circle on top of the received imge
22. **passVideoToVision.m:** To feed video stream to the vision system, so as to evaluate
23. **parallelDetection.m:** Used to execute all detection algorithms in a parallel way
24. **multiEpochAnalyser.m:** Used to test a wide range of CNN epoch outputs so as to detect overfitting
25. **detectCircleTestBench.m:** Test bench for circle detection function performance
26. **analyseCriticalAreas.m:** Used to analyse critical areas as explained in 5.2.2
27. **nonParallelDetection.m:** Used to execute all detection algorithms in a non-parallel way
28. **evaluateDetectionSystem.m:** Used to run evaluation on all the individual detection functions
29. **evaluateOpenCLPerformance.m:** Used to evaluate the performance of the OpenCL based parts of the vision system application

## Author(s)
* **Oluwole Oyetoke** - *Project work* - [LinkedIn Profile](https://www.linkedin.com/in/oluwole-oyetoke-71455258/), [Website](http://www.eagle-beacon.com)
* **Dr. David Cowell** - *Initial work* - [University Profile](https://engineering.leeds.ac.uk/staff/316/Dr_David_Cowell)

## Licence
This project is free for use and to be contributed to

## Acknowledgments
* Family
* Well wishers
* Supervisor
* All the nice people who published helpful and easy to grasp journal articles in this area of study

