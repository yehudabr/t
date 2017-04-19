///
/// \file t1.cpp 
/// \brief main entry for tests
/// main function for testing different sw topics
/// \author toto
///
/// 
#include <iostream>
#include "appli.h"
#include "tester.h"

using namespace std;
//github.com prenom de mon amour + br sis:atom + 2 milles quinz
//cloner sous ~ ce projet   clone https://github.com/yehudabr/t
//git config user.email "yehuda_braun@yahoo.com"     c local au repertoire/repository
//git config user.name "<le nom>" idem!!
//ajouter les fichiers
//commit push etc...
//
// * OK transformer Appli en singletone. 
// * doxygene
//   voir http://franckh.developpez.com/tutoriels/outils/doxygen/#LII-B et
//        http://www-numi.fnal.gov/offline_software/srt_public_context/WebDocs/doxygen-howto.html
// * OK faire une class de test. faire une fonction test("")  qui orientrai vers les differents tests, avec option pour "all"
//      invoquer avec singletone. commenter.
// * OK ouverture de fichier
// * OK lecture ini
// * connect/read/control a usb device
// * std : containers, iterators, algorithm, RAII, function objects, and predicates
// * coder une lecture ou un ping reseau - ex: google.com  use boost::asio
// * tester - exception
// * multi threading utiliser std::thread ??   https://curl.haxx.se/libcurl/c/multithread.html
//                                             https://openclassrooms.com/courses/la-programmation-systeme-en-c-sous-unix/les-threads-3
//                                             en c++, c + complique. Il y a des nouveaux supports au niveau
// * deriver exception et utiliser la class derivee a la place de exception
// * log lie a appli. verser dans log les excptions
//
//reseau https://openclassrooms.com/courses/apprenez-le-fonctionnement-des-reseaux-tcp-ip
//       https://openclassrooms.com/courses/les-reseaux-de-zero
//declaration de l'instance (privee!) du singletone Appli
Appli* Appli::m_Instance = NULL;
Tester* Tester::m_Instance = NULL;
///
/// \fn main()
/// \brief main entry
///
int main(int argc, char* argv[])
{
    try
    {
        Appli * appliInstance = Appli::getInstance();//constructing an Appli object is impossible(private constructor).
        cout << "ini file name: " << argv[1] <<endl;
        appliInstance->setIniFile(argv[1]);
        Tester* theTester = Tester::getInstance();//to be deleted
        theTester->testIt("appli");
    }
    catch (const exception& e)
    {
        cerr << e.what();
    }
    delete Appli::getInstance();
    delete Tester::getInstance();
    return 0;
}
