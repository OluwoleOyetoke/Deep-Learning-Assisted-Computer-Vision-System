# Deep Learning Assisted Computer Vision System For Traffic Sign Classification and Detection

## Synopsis

Computers, as we have around today, are GIGO (Garbage-in-Garbage-Out) devices which are only capable of producing results based on what is inputted into them and how they have been originally programmed to respond to such inputs. As such, challenges exist with problem categories that cannot be formulated as algorithms, especially problems which depend on many subtle factors such as knowledge and understanding of previous scenes and corresponding reactions to them. As an example, for the recognition of the Queen of England’s image among a cluster of 100 other images, the human brain may be able to provide an informed guess, probably based on past knowledge and various other experiences combined, however, this cannot be accurately derived by a computer without an already pre-written algorithm. In the light of this, there has been growing interest in researches geared toward developing Artificial Intelligent (AI) models which are capable of learning and carrying out classification tasks without making references to any pre-written algorithm. One of such research area is in the field of Neural Networks (NN) which are a biologically inspired family of computation architectures built as extremely simplified models of the human brain.

It is safe to say that despite the ever-increasing popularity of transferring (human) tasks to computers for simplification purposes, there are still a lot of human tasks that are still poorly done by computers, such as in areas of visual perception and intelligence. This is because the largest part of the human brain works continuously on data analysis and interpretation while the largest part 
of the computer is only available for passive data storage. Thus, the brain therefore performs even closer to its theoretical maximum. Although the computer is fast, reliable, unbiased, never tired, consistent and sometimes can even carry out much more complex computational combinations than the human brain is known to muscle, it is still unable to synthesize new rules and  it is safe to say, it has no common sense. They rather have a group of arithmetic processing units and storage carefully interconnected to perform complex numerical calculations in a very short time but are not adaptive. 

On the other hand, the human brain possesses what we know as common sense, a bigger knowledge base, ability to synthesize new rules and spontaneously detect trends in data without  being pre-taught, even though based on capacity, the computer should be more powerful than the human brain as it averagely comprises of over 109 transistors with a switching time  of 10-9 seconds while the brain in comparison consists of over 1011 neurons but with only a switching time of about 10-3 seconds. With closer analysis, we note that although 
the human brain is easily tired, bored, biased, inconsistent and cannot be fully trusted, it still outperforms the computer in some application areas due to its perceptive nature  of operation (interpretation of sensory information in order to understand the environment). This explains why there still is major reliance on the human brain for classification tasks.

Juxtaposing the computer’s strengths and weaknesses against the human brain’s makes us realize that in as much as the human brain is better when it comes to perceptive tasks,  it has endurance, bias and inconsistency issues. Therefore, effort is being made by researchers to develop systems which are capable of fusing together the advantages of both the brain and the computer into one near perfect outfit. A system which can take on the perceptive learning, out of the box synthesis, self-organizing and self-learning characteristic of the human brain, while maintaining the massive computational capability, speed and enduring features of the computer. This motive has led to increased research on neural networks which are a biologically inspired family of computation architectures built as extremely simplified models of the human brain.

In summary, this project seeks to explore the science behind Neural Networks (NN), its various flavours (especially CNNs), application areas and then finally, narrow down by applying it in the design and development of a computer vision system which can be used for traffic sign recognition and detection in autonomous vehicles.

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
* **Oluwole Oyetoke** - *Project work* - [LinkedIn Profile](https://www.linkedin.com/in/oluwole-oyetoke-71455258/)
* **Dr. David Cowell** - *Initial work* - [University Profile](https://engineering.leeds.ac.uk/staff/316/Dr_David_Cowell)

## Licence
This project is free for use and to be contributed to

## Acknowledgments
* Family
* Well wishers
* Supervisor
* All the nice people who published helpful and easy to grasp journal articles in this area of study

