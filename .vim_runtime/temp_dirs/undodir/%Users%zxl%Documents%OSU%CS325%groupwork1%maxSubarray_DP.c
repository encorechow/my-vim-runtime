Vim�UnDo� TA�u[`"���ڡA�ɯ�\���D�r;�   L   */   H         A       A   A   A    T�p9    _�                            ����                                                                                                                                                                                                                                                                                                                                                             T�k     �         J          if (seq[0] > 0 )5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�k     �         J               maxSubArray[0] = seq[0];5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�k     �         J          else5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�k     �         J              maxSubArray[0] = 0;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�k     �         J          maxSuffix[0] = seq[0];5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�k     �         J      3            maxSuffix[n] = maxSuffix[n-1] + seq[n];5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�k      �         J      3            maxSuffix[n] = maxSuffix[n-1] + seq[n];5�_�      	                 '    ����                                                                                                                                                                                                                                                                                                                                                             T�k"     �         J      (        if (maxSuffix[n-1] + seq[n] > 0)5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             T�k'     �         J              else5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             T�k*     �         J                  maxSuffix[n] = 0;5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             T�k+    �         J                  maxSuffix[n] = 0;5�_�                    0       ����                                                                                                                                                                                                                                                                                                                                                             T�k<     �   /   1   J          5�_�                    F        ����                                                                                                                                                                                                                                                                                                                                                             T�kA     �   E   G   J       5�_�                    /       ����                                                                                                                                                                                                                                                                                                                                                             T�kF     �   .   0   J      /  //  printf("max = %d\n", maxSub_DP(100,seq));5�_�                    -       ����                                                                                                                                                                                                                                                                                                                                                             T�kH    �   ,   .   J     �//    int seq[100] = {-48, -10, 15, 27, 6, -32, -34, -3, 49, -26, 34, -29, 17, -8, -13, 45, -37, -49, -30, -50, 25, -12, 5, 18, 32, 4, 19, -22, 35, -4, -31, -19, 22, 1, -36, -40, 39, -45, 21, -15, 20, 26, -33, 10, 28, 48, 38, -46, -27, -24, 40, -38, 9, 37, -39, 43, -43, -6, 44, -42, -5, -7, -14, 41, 23, -35, 24, 0, -17, 3, 29, -9, -23, 13, 12, 31, 42, -25, 16, -21, -11, -44, 30, 36, 7, 46, 14, -20, -2, 11, -16, 2, -41, -18, 47, 8, -28, -47, -1, 33};5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             T�k�     �         J          5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�k�     �         J          maxSuffix[0]    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�k�     �         K          maxSubArray[]�         J          maxSuffix[0] = seq[0]    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�k�     �         K          maxSubArray[0]5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�k�    �         K          maxSubArray[0] = seq[0]5�_�                    .        ����                                                                                                                                                                                                                                                                                                                                                             T�lB     �   -   .         �    int seq[100] = {-48, -10, 15, 27, 6, -32, -34, -3, 49, -26, 34, -29, 17, -8, -13, 45, -37, -49, -30, -50, 25, -12, 5, 18, 32, 4, 19, -22, 35, -4, -31, -19, 22, 1, -36, -40, 39, -45, 21, -15, 20, 26, -33, 10, 28, 48, 38, -46, -27, -24, 40, -38, 9, 37, -39, 43, -43, -6, 44, -42, -5, -7, -14, 41, 23, -35, 24, 0, -17, 3, 29, -9, -23, 13, 12, 31, 42, -25, 16, -21, -11, -44, 30, 36, 7, 46, 14, -20, -2, 11, -16, 2, -41, -18, 47, 8, -28, -47, -1, 33};5�_�                    -        ����                                                                                                                                                                                                                                                                                                                                                             T�lC     �   ,   .   J       5�_�                    -       ����                                                                                                                                                                                                                                                                                                                                                             T�lJ     �   -   /   K          }�   ,   /   J          int seq[100]5�_�                    .       ����                                                                                                                                                                                                                                                                                                                                                             T�lb     �   ,   .   K          int seq[100] = {  �-27, 6, -32, 29, -5, 33, 12, 45, -35, 25, 10, -18, -36, -1, 4, 9, 41, -20, 7, -29, -43, 37, 46, 24, -12, -49, 8, 16, 22, -21, 26, 27, 3, 0, 38, 28, -33, -50, -19, 17, 11, 1, 15, 48, 49, 23, -22, 18, 30, -10, -45, 21, -39, -40, -14, 20, -3, -42, -26, -37, -48, 32, -28, 40, -16, -23, -41, 19, 47, -4, 42, -47, -13, -38, -17, -44, -15, -30, -6, 39, 34, -31, -2, 5, -46, -24, -11, 35, 44, -9, 2, -34, 43, -8, 13, 36, 31, 14, -25, -7}�   -   /   K     �    -27, 6, -32, 29, -5, 33, 12, 45, -35, 25, 10, -18, -36, -1, 4, 9, 41, -20, 7, -29, -43, 37, 46, 24, -12, -49, 8, 16, 22, -21, 26, 27, 3, 0, 38, 28, -33, -50, -19, 17, 11, 1, 15, 48, 49, 23, -22, 18, 30, -10, -45, 21, -39, -40, -14, 20, -3, -42, -26, -37, -48, 32, -28, 40, -16, -23, -41, 19, 47, -4, 42, -47, -13, -38, -17, -44, -15, -30, -6, 39, 34, -31, -2, 5, -46, -24, -11, 35, 44, -9, 2, -34, 43, -8, 13, 36, 31, 14, -25, -7}5�_�                    -  �    ����                                                                                                                                                                                                                                                                                                                                                             T�ll    �   ,   .   J     �    int seq[100] = {-27, 6, -32, 29, -5, 33, 12, 45, -35, 25, 10, -18, -36, -1, 4, 9, 41, -20, 7, -29, -43, 37, 46, 24, -12, -49, 8, 16, 22, -21, 26, 27, 3, 0, 38, 28, -33, -50, -19, 17, 11, 1, 15, 48, 49, 23, -22, 18, 30, -10, -45, 21, -39, -40, -14, 20, -3, -42, -26, -37, -48, 32, -28, 40, -16, -23, -41, 19, 47, -4, 42, -47, -13, -38, -17, -44, -15, -30, -6, 39, 34, -31, -2, 5, -46, -24, -11, 35, 44, -9, 2, -34, 43, -8, 13, 36, 31, 14, -25, -7}5�_�                    ,        ����                                                                                                                                                                                                                                                                                                                                                             T�l�     �   +   ,           5�_�                    ,       ����                                                                                                                                                                                                                                                                                                                                                             T�l�     �   +   ,         �    int seq[100] = {-27, 6, -32, 29, -5, 33, 12, 45, -35, 25, 10, -18, -36, -1, 4, 9, 41, -20, 7, -29, -43, 37, 46, 24, -12, -49, 8, 16, 22, -21, 26, 27, 3, 0, 38, 28, -33, -50, -19, 17, 11, 1, 15, 48, 49, 23, -22, 18, 30, -10, -45, 21, -39, -40, -14, 20, -3, -42, -26, -37, -48, 32, -28, 40, -16, -23, -41, 19, 47, -4, 42, -47, -13, -38, -17, -44, -15, -30, -6, 39, 34, -31, -2, 5, -46, -24, -11, 35, 44, -9, 2, -34, 43, -8, 13, 36, 31, 14, -25, -7};5�_�                    ,        ����                                                                                                                                                                                                                                                                                                                                                             T�l�     �   +   0   H       5�_�                    -        ����                                                                                                                                                                                                                                                                                                                                                             T�l�     �   ,   .   K       5�_�                    -       ����                                                                                                                                                                                                                                                                                                                                                             T�l�     �   ,   .   L          int seq[100] = {   }�   -   /   L          }�   ,   /   K          int seq[100]5�_�                     -  �    ����                                                                                                                                                                                                                                                                                                                                                             T�l�    �   ,   .   K     �    int seq[100] = {30, -17, 34, 35, 1, -18, -34, 15, -7, -11, -5, 24, -31, -15, 39, 7, 38, -28, 41, 31, -41, 8, -4, 4, -40, 45, -36, -19, -39, -43, -6, -20, 25, -44, 48, 19, 33, 36, -8, 32, -26, 49, -22, 22, -3, 0, -23, -38, -13, -21, -2, 37, -24, 9, -42, 44, 40, 28, 20, -32, 10, -30, -33, -25, 2, -48, 46, 5, -29, -9, 42, 13, 18, 12, 29, -10, -45, 43, 3, 14, -12, 6, -1, -50, -46, -27, -35, 17, -49, -14, -37, 16, 23, -16, 26, 47, 21, 11, 27, -47}5�_�      !               -       ����                                                                                                                                                                                                                                                                                                                                                             T�l�     �   ,   .   K     �    int seq[100] = {30, -17, 34, 35, 1, -18, -34, 15, -7, -11, -5, 24, -31, -15, 39, 7, 38, -28, 41, 31, -41, 8, -4, 4, -40, 45, -36, -19, -39, -43, -6, -20, 25, -44, 48, 19, 33, 36, -8, 32, -26, 49, -22, 22, -3, 0, -23, -38, -13, -21, -2, 37, -24, 9, -42, 44, 40, 28, 20, -32, 10, -30, -33, -25, 2, -48, 46, 5, -29, -9, 42, 13, 18, 12, 29, -10, -45, 43, 3, 14, -12, 6, -1, -50, -46, -27, -35, 17, -49, -14, -37, 16, 23, -16, 26, 47, 21, 11, 27, -47};5�_�       "           !   -       ����                                                                                                                                                                                                                                                                                                                                                             T�l�     �   ,   -         �    int seq[100] = {30, -17, 34, 35, 1, -18, -34, 15, -7, -11, -5, 24, -31, -15, 39, 7, 38, -28, 41, 31, -41, 8, -4, 4, -40, 45, -36, -19, -39, -43, -6, -20, 25, -44, 48, 19, 33, 36, -8, 32, -26, 49, -22, 22, -3, 0, -23, -38, -13, -21, -2, 37, -24, 9, -42, 44, 40, 28, 20, -32, 10, -30, -33, -25, 2, -48, 46, 5, -29, -9, 42, 13, 18, 12, 29, -10, -45, 43, 3, 14, -12, 6, -1, -50, -46, -27, -35, 17, -49, -14, -37, 16, 23, -16, 26, 47, 21, 11, 27, -47};5�_�   !   #           "   -        ����                                                                                                                                                                                                                                                                                                                                                             T�l�     �   ,   .   J       5�_�   "   $           #   -       ����                                                                                                                                                                                                                                                                                                                                                             T�l�     �   ,   .   K          int seq[100] = {   }�   -   /   K          }�   ,   /   J          int seq[100]5�_�   #   %           $   -  �    ����                                                                                                                                                                                                                                                                                                                                                             T�l�    �   ,   .   J     �    int seq[100] = {8, -39, -24, -30, 41, -8, 22, -13, 49, 17, 9, 0, -4, -10, 19, 3, 44, -38, -37, -7, 33, 5, -14, 15, -16, -49, 48, -6, 1, 47, -27, -48, 26, 45, 46, -19, 2, -5, 38, 40, 28, 39, 4, 37, 12, 21, -1, -42, -32, 34, -36, 32, -41, -45, -31, -50, 10, -3, 23, 30, 43, -21, -47, -40, -35, -2, -34, -28, -12, -9, 24, 36, -23, 13, -25, 6, 25, 11, 20, 18, 16, -11, 31, -15, 35, -33, 42, 7, -22, -29, 29, -17, -20, -43, -18, 27, -46, -26, -44, 14}5�_�   $   &           %   -       ����                                                                                                                                                                                                                                                                                                                                                             T�o/     �   ,   -         �    int seq[100] = {8, -39, -24, -30, 41, -8, 22, -13, 49, 17, 9, 0, -4, -10, 19, 3, 44, -38, -37, -7, 33, 5, -14, 15, -16, -49, 48, -6, 1, 47, -27, -48, 26, 45, 46, -19, 2, -5, 38, 40, 28, 39, 4, 37, 12, 21, -1, -42, -32, 34, -36, 32, -41, -45, -31, -50, 10, -3, 23, 30, 43, -21, -47, -40, -35, -2, -34, -28, -12, -9, 24, 36, -23, 13, -25, 6, 25, 11, 20, 18, 16, -11, 31, -15, 35, -33, 42, 7, -22, -29, 29, -17, -20, -43, -18, 27, -46, -26, -44, 14};5�_�   %   '           &   -        ����                                                                                                                                                                                                                                                                                                                                                             T�o0     �   ,   .   I       5�_�   &   (           '   -       ����                                                                                                                                                                                                                                                                                                                                                             T�o5     �   ,   .   J          int seq [100] = {   }�   -   /   J          }�   ,   /   I          int seq [100]5�_�   '   )           (   -  �    ����                                                                                                                                                                                                                                                                                                                                                             T�o9    �   ,   .   I     �    int seq [100] = {-18, -47, -40, -43, -2, 48, 31, -24, 36, -49, 4, -29, -4, -39, 12, 24, 8, 40, 45, -17, 6, -11, -5, -30, -8, 25, -44, -9, -20, -50, -12, -32, 41, 10, -42, -15, 11, -38, 37, 21, 33, -22, 16, -41, -46, -33, -26, 7, -3, -28, 29, 20, 27, 3, 15, 49, 23, -1, 14, 32, -31, -13, -48, -14, 13, 39, 46, -35, -36, 0, 17, -27, -21, 28, -7, 44, -10, 34, -19, 47, 42, -34, 5, 26, -45, 35, 9, -25, 38, -37, -23, 22, -6, -16, 18, 43, 30, 2, 19, 1}5�_�   (   *           )   -       ����                                                                                                                                                                                                                                                                                                                                                             T�o_     �   ,   -         �    int seq [100] = {-18, -47, -40, -43, -2, 48, 31, -24, 36, -49, 4, -29, -4, -39, 12, 24, 8, 40, 45, -17, 6, -11, -5, -30, -8, 25, -44, -9, -20, -50, -12, -32, 41, 10, -42, -15, 11, -38, 37, 21, 33, -22, 16, -41, -46, -33, -26, 7, -3, -28, 29, 20, 27, 3, 15, 49, 23, -1, 14, 32, -31, -13, -48, -14, 13, 39, 46, -35, -36, 0, 17, -27, -21, 28, -7, 44, -10, 34, -19, 47, 42, -34, 5, 26, -45, 35, 9, -25, 38, -37, -23, 22, -6, -16, 18, 43, 30, 2, 19, 1};5�_�   )   +           *   -       ����                                                                                                                                                                                                                                                                                                                                                             T�oa     �   ,   1   H      -    printf("max = %d\n", maxSub_DP(100,seq));5�_�   *   ,           +   .       ����                                                                                                                                                                                                                                                                                                                                                             T�oc     �   -   /   K          5�_�   +   -           ,   .       ����                                                                                                                                                                                                                                                                                                                                                             T�of     �   -   /   L          int seq[100] = {   }�   .   0   L          }�   -   0   K          int seq[100]5�_�   ,   .           -   .       ����                                                                                                                                                                                                                                                                                                                                                             T�oi     �   -   /   K          int seq[100] = {}5�_�   -   /           .   .       ����                                                                                                                                                                                                                                                                                                                                                             T�oq   	 �   -   /   K          int seq[100] = {};5�_�   .   0           /   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   -   .         �    int seq[100] = {3, 35, -45, 12, 44, 6, 46, -33, -15, 39, -19, 19, -31, -41, -35, 23, -25, 42, 2, 22, 40, -40, -24, 38, 14, 10, -44, 31, 16, 48, 29, 20, 32, -13, 43, -49, -10, 21, 28, 49, -28, -36, 36, -21, -26, 15, 25, -34, -20, -42, -43, 33, 1, -39, 45, 18, 27, -12, -22, -1, 47, -17, -4, 41, -32, -2, -5, -48, -7, 37, 8, -3, 26, -27, -6, 7, -47, -8, 11, -46, 9, -23, 4, -30, -9, -18, -29, 17, -11, 30, -50, -14, 24, 5, 34, 0, 13, -37, -16, -38};5�_�   /   1           0   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   -   /   J          5�_�   0   2           1   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   -   /   K          int seq[100] = {   }�   .   0   K          }�   -   0   J          int seq[100] 5�_�   1   3           2   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   -   0   J          int seq[100] = }5�_�   2   4           3   /       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   .   0   K          }}5�_�   3   5           4   /       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   .   0   K          }5�_�   4   6           5   /       ����                                                                                                                                                                                                                                                                                                                                                             T�o�   
 �   -   /   K          int seq[100] ={   };�   .   0   K          };5�_�   5   7           6   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   -   /   J     �    int seq[100] ={15, -42, 40, -33, -47, 13, -27, 1, -39, -41, 11, 33, 4, -18, -44, 43, 39, -20, -23, 5, 12, 19, -12, 46, -19, -2, 35, -16, -45, -14, 16, -35, -24, -15, 2, -30, -13, 24, -50, 7, -10, 0, -4, 6, 42, 9, -31, -34, -1, 21, 36, -7, -36, -17, 32, 10, -32, 48, 18, -43, 31, 30, 25, 23, -29, -40, 45, -3, 41, 17, -46, -5, 34, 49, 3, 37, 14, 22, -38, -49, -37, -22, 47, 27, -11, 29, -48, -26, 38, -21, -25, -9, 20, 8, 44, 26, -8, -6, -28, 28};5�_�   6   8           7   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   -   .         �    int seq[100] ={15, -42, 40, -33, -47, 13, -27, 1, -39, -41, 11, 33, 4, -18, -44, 43, 39, -20, -23, 5, 12, 19, -12, 46, -19, -2, 35, -16, -45, -14, 16, -35, -24, -15, 2, -30, -13, 24, -50, 7, -10, 0, -4, 6, 42, 9, -31, -34, -1, 21, 36, -7, -36, -17, 32, 10, -32, 48, 18, -43, 31, 30, 25, 23, -29, -40, 45, -3, 41, 17, -46, -5, 34, 49, 3, 37, 14, 22, -38, -49, -37, -22, 47, 27, -11, 29, -48, -26, 38, -21, -25, -9, 20, 8, 44, 26, -8, -6, -28, 28};5�_�   7   9           8   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   -   2   I      -    printf("max = %d\n", maxSub_DP(100,seq));5�_�   8   :           9   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   -   /   L          5�_�   9   ;           :   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   -   /   M          int seq[100] = {   }�   .   0   M          }�   -   0   L          int seq[100]5�_�   :   <           ;   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�     �   -   /   L          int seq[100] = {}5�_�   ;   =           <   .       ����                                                                                                                                                                                                                                                                                                                                                             T�o�    �   -   /   L          int seq[100] = {};5�_�   <   >           =   -       ����                                                                                                                                                                                                                                                                                                                                                             T�p+     �   ,   .   L          5�_�   =   ?           >   -       ����                                                                                                                                                                                                                                                                                                                                                             T�p.     �   ,   .   L         // 5�_�   >   @           ?   2       ����                                                                                                                                                                                                                                                                                                                                                             T�p1     �   1   3   L        /*  5�_�   ?   A           @   2       ����                                                                                                                                                                                                                                                                                                                                                             T�p2     �   1   3   L        *  5�_�   @               A   H       ����                                                                                                                                                                                                                                                                                                                                                             T�p8    �   G   I   L      */5��