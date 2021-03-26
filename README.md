# *Thresholding*

Pelo o que eu entendi do *thresholding* quando estava escrevendo este algoritmo, é que aplicar este método de segmentação, estamos criando uma mascará com a região mais escura da imagem, por isso é mandatorio converter a imagem para preto-e-branco antes de aplicar a segmentação. 

Ao fazer esta mascará estamos comparando também o valor de intensidade de cada *pixel*. Uma vez que separamos de forma adequada os pixels mais importantes da imagem, podemos definir eles com um determinado valor para os identificar. Os valores usados são: 0 para a cor preta e 255 para a cor branca, porém, pode ser usado outros valores. 

Uma vez que os valores são obtidos, o algoritmo os salva em um arquivo **.txt**. Para mais detalhes sobre esse processo recomendo ler esse artigos: "[***Basic Thresholding Operations***](https://docs.opencv.org/3.4/db/d8e/tutorial_threshold.html)" "[***Image Thresholding***](https://docs.opencv.org/master/d7/dd0/tutorial_js_thresholding.html)" e "[***Otsu's Binarization***](https://docs.opencv.org/master/d7/d4d/tutorial_py_thresholding.html)"*

Em suma, a imagem é convertida em escala de cinza, depois em binario, por isso é possivel colocar ela em um arquivo de texto.

## Como usar

Para compilar e rodar o programa é preciso instalar e configurar a biblioteca chamada [**OpenCV**](https://opencv.org/), do qual visa tornar a computação visual em tempo-real optimizada. A [documentação](https://docs.opencv.org/master/d9/df8/tutorial_root.html) ensina como instalar dentre outras coisas interesantes que a biblioteca permite fazer,  porém para este projeto (e outro que trabalham com **OpenCV**) é preciso configurar no [**IDE** ***Visual Studio***](https://docs.opencv.org/master/dd/d6e/tutorial_windows_visual_studio_opencv.html).  

**Este se encontra no final da pagina.*

