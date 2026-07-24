#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// Usamos el hook en MenuLayer para modificar el menú principal
class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        // Buscamos el logo de RobTop en la esquina superior izquierda
        // (Suele llamarse 'robtop-logo' o podemos buscar el menú de la esquina)
        auto topMenu = this->getChildByID("top-menu");
        
        if (topMenu) {
            // Creamos un botón usando un sprite del juego (por ejemplo, la estrella o un botón verde)
            auto fireButton = CCMenuItemSpriteExtra::create(
                CCSprite::createWithSpriteFrameName("GJ_chatBtn_001.png"), 
                this, 
                menu_selector(MyMenuLayer::onFireButtonClicked)
            );

            // Le asignamos un ID para ordenarlo bien
            fireButton->setID("fire-in-the-hole-button"_spr);

            // Lo agregamos al menú superior al lado del logo de RobTop
            topMenu->addChild(fireButton);
            topMenu->updateLayout(); // Reorganiza automáticamente los elementos del menú
        }

        return true;
    }

    // Función que se ejecuta cuando tocas el botón
    void onFireButtonClicked(CCObject* sender) {
        // Reproduce el efecto de sonido del juego (puedes cambiar "bell_01.ogg" por el sonido que prefieras)
        FMODAudioEngine::sharedEngine()->playEffect("bell_01.ogg");

        // Muestra un mensaje flotante en pantalla
        FLAlertLayer::create(
            "FIRE IN THE HOLE!", 
            "BWAHAHAHA! 🔥🟢", 
            "OK"
        )->show();
    }
};
