#include <iostream>
#include <eigen3/Eigen/Dense>

typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> MiMatrizDinamicaD;
int main(){
    MiMatrizDinamicaD matrizO11(2, 2);
    MiMatrizDinamicaD matrizO12(2, 2);

    MiMatrizDinamicaD matrizO21(2, 2);
    MiMatrizDinamicaD matrizO22(2, 2);

    MiMatrizDinamicaD matrizO31(2, 2);
    MiMatrizDinamicaD matrizO32(2, 2);
    MiMatrizDinamicaD matrizO33(2, 2);

    MiMatrizDinamicaD matrizO41(2, 2);
    MiMatrizDinamicaD matrizO42(2, 2);

    MiMatrizDinamicaD matrizO51(2, 3);
    MiMatrizDinamicaD matrizO52(3, 2);
    MiMatrizDinamicaD matrizO53(2, 2);

    MiMatrizDinamicaD matrizO61(3, 3);
    MiMatrizDinamicaD matrizO62(3, 3);

    MiMatrizDinamicaD matrizO71(3, 3);
    MiMatrizDinamicaD matrizO72(3, 3);

    MiMatrizDinamicaD matrizO81(3, 3);
    MiMatrizDinamicaD matrizO82(3, 3);

    MiMatrizDinamicaD matrizO91(2, 2);

    MiMatrizDinamicaD matrizO101(2, 2);

    MiMatrizDinamicaD matrizO111(2, 2);
    MiMatrizDinamicaD matrizO112(2, 2);
    MiMatrizDinamicaD matrizO113(2, 2);

    MiMatrizDinamicaD matrizO121(2, 3);
    MiMatrizDinamicaD matrizO122(3, 2);

    MiMatrizDinamicaD matrizO131(1, 3);
    MiMatrizDinamicaD matrizO132(3, 2);
    MiMatrizDinamicaD matrizO133(2, 1);

    MiMatrizDinamicaD matrizO141(3, 3);
    MiMatrizDinamicaD matrizO142(3, 3);

    MiMatrizDinamicaD matrizO151(3, 3);
    MiMatrizDinamicaD matrizO152(3, 3);

    MiMatrizDinamicaD matrizO161(4, 4);
    MiMatrizDinamicaD matrizO162(4, 4);

/* ************************************* */

    matrizO11 << 4, -2, 1, -7;
    matrizO12 << -1, 2, 6, -5;

    std::cout << "1. X = 3A - 4B = \n"
              << (3*matrizO11)-(4*matrizO12) << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO21 << 0, -1, 2, 1;
    matrizO22 << 1, 2, 3, 4;

    std::cout << "2. 2X + 4A = 3BA = \n \n"
              << "Se despeja X \n \n"
              << " X = (3BA - 4A)/2 = \n \n"
              << ((3*(matrizO21)*(matrizO22) - (4*matrizO21)))/2 << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO31 << -3, -2, 3, 3;
    matrizO32 << 5, 3, 9, 4;
    matrizO33 << 1, 1, 0, 0;
    std::cout << "3. AXBt = C = \n \n"
              << "Se despeja X \n \n"
              << " X = C / ABt = C * (ABt)^-1 \n \n"
              << matrizO33*((matrizO32.transpose()*matrizO31).inverse()) << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO41 << 2, 1, -4, -3;
    matrizO42 << 2, 2, 6, 4;
    std::cout << "4. XA = B = \n \n"
              << "Se despeja X \n \n"
              << " X = B/A = B* A^⁻1  \n \n"
              << matrizO42 * matrizO41.inverse() << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO51 << 3, 0, -1, 0, 2, 1;
    matrizO52 << 1, 2, 1, 0, 0, 6;
    matrizO53 << -2, 0, -2, -5;
    std::cout << "5. X = 2(AB + C) \n \n"
              << 2*((matrizO51*matrizO52) + matrizO53) << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO61 << 1, 5, -1, -1, 2, 2, 0, -3, 3;
    matrizO62 << -1, -4, 3, 1, -2, -2, -3, 3, -5;
    std::cout << "6. X = A + 3B \n \n"
              << matrizO61 + (3*matrizO62) << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO71 << 2, 7, 3, 3, 9, 4, 1, 5, 3;
    matrizO72 << 1, 0, 2, 0, 1, 0, 0, 0, 1;
    std::cout << "7. XA = B \n \n"
              << "Se despeja X \n\n"
              << "X = B/A = B*A^-1\n\n"
              << matrizO72*matrizO71.inverse() << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO81 << 1, 1, 1, 6, 5, 4, 13, 10, 8;
    matrizO82 << 0, 1, 2, 1, 0, 2, 1, 2, 0;
    std::cout << "8. AX = B \n \n"
              << "Se despeja X \n\n"
              << "X = B/A = B*A^-1\n\n"
              << matrizO82*matrizO81.inverse() << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO91 << 3, -1, 0, 2;

    std::cout << "9. X = AtA-2A \n \n"
              << (matrizO91.transpose())*matrizO91 - (2*matrizO91) << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO101 << 4, 2, -1, 0;

    std::cout << "10. X = A^3 \n \n"
              << matrizO101 * matrizO101 * matrizO101 << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO111 << 2, 4, 3, 2;
    matrizO112 << 1, 0, 2, 1;
    matrizO113 << 7, 5, 6, 1;
    std::cout << "11. AtXB = C \n \n"
              << "Se despeja X \n \n"
              << " X = C / (AtB) =  C*(A^-1B) \n \n"
              << matrizO113*((matrizO111).inverse()*matrizO112) << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO121 << 1, 0, -2, 2, -1, 3;
    matrizO122 << 2, -3, -2, 0, -1, -2;
    std::cout << "12. X =AAt - 2AB \n \n"
              << (matrizO121*matrizO121.transpose()) - (2*matrizO121*matrizO122) << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO131 << 4, 8, 12;
    matrizO132 << 3, 2, 0, 1, -1, 0;
    matrizO133 << 3, -1;
    std::cout << "13. X = ABC \n \n"
              << matrizO131 * matrizO132 * matrizO133 << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO141 << 3, 4, 1, -1, -3, 3, 2, 3, 0;
    matrizO142 << 3, 9, 7, 1, 11, 7, 7, 5, 7;
    std::cout << "14. AtX = B \n \n"
              << "Se despeja X \n \n"
              << " X = B / At = B * At^-1 \n \n"
              << matrizO142*((matrizO141.transpose()).inverse()) << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO151 << 2, 5, 7, 6, 3, 4, 5, -2, -3;
    matrizO152 << -1, 1, 0, 0, 1, 1, 1, 0, -1;
    std::cout << "15. XA = B \n \n"
              << "Se despeja X \n \n"
              << " X = B / A = B * A^-1 \n \n"
              << matrizO152*(matrizO151.inverse()) << std::endl << std::endl;

    std::cout << "===========================" << std::endl << std::endl;

    matrizO161 << 1, 1, 1, 1, 1, 1, -1, -1, 1, -1, 1, -1, 1, -1, -1, 1;
    matrizO162 << 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1;
    std::cout << "16. AX = B \n \n"
              << "Se despeja X \n \n"
              << " X = B / A = B * A^-1 \n \n"
              << matrizO162*(matrizO161.inverse()) << std::endl << std::endl;

    return 0;
}
