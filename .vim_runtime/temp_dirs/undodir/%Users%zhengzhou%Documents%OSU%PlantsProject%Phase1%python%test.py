Vim�UnDo� 9{[������oEyڤ�*a�|���8P��7��   
   im = cv2.imread('1.jpg')                             V�m�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             V�c�     �                   5�_�                            ����                                                                                                                                                                                                                                                                                                                                                           V�c�    �                 import 5�_�                           ����                                                                                                                                                                                                                                                                                                                                                           V�d�     �                  import5�_�                           ����                                                                                                                                                                                                                                                                                                                                                           V�d�     �                  import numpy as np 5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                           V�d�     �                 
import cv25�_�                            ����                                                                                                                                                                                                                                                                                                                                                           V�d�     �                 im = cv2.imread()�                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                           V�d�     �                 im = cv2.imread('')5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                           V�e     �                 im = cv2.imread('1.JPG')5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                           V�e     �               im = cv2.imread('1.JPG')5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                                                           V�e
     �                  5�_�   
                    +    ����                                                                                                                                                                                                                                                                                                                                                           V�e-     �                 +gray = cv2.cvtColor(im, cv2.COLOR_BGR2GRAY)5�_�                       +    ����                                                                                                                                                                                                                                                                                                                                                           V�e-     �                 blur = cv2.GaussianBlur()�                 +gray = cv2.cvtColor(im, cv2.COLOR_BGR2GRAY)5�_�                       "    ����                                                                                                                                                                                                                                                                                                                                                           V�eD     �                 #blur = cv2.GaussianBlur(gray,(5,5))5�_�                           ����                                                                                                                                                                                                                                                                                                                                                           V�eF     �                 %blur = cv2.GaussianBlur(gray,(5,5) 0)5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                           V�eI     �                 &blur = cv2.GaussianBlur(gray, (5,5) 0)5�_�                       '    ����                                                                                                                                                                                                                                                                                                                                                           V�eJ     �                  thresh = cv2.adaptiveThreshold()�                 'blur = cv2.GaussianBlur(gray, (5,5), 0)5�_�                       6    ����                                                                                                                                                                                                                                                                                                                                                           V�eg     �                 6thresh = cv2.adaptiveThreshold(blur, 255, 1, 1, 11, 2)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                           V�eh     �                 cv2.imshow()�                  5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                           V�m]     �                 cv2.imshow('')5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                           V�m^     �                 cv2.imshow('aaa')5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                           V�mc     �   	              cv2.waitKey()�                 cv2.imshow('aaa', thresh)5�_�                            ����                                                                                                                                                                                                                                                                                                                
                                           V�ml    �                 import numpy as np 5�_�                            ����                                                                                                                                                                                                                                                                                                                
                                           V�m�    �         
      im = cv2.imread('1.jpg')5��