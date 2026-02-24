#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) return false;

		auto label = CCLabelBMFont::create("Roblox 2 Mod Loaded!", "bigFont.fnt");
		label->setPosition({CCDirector::get()->getWinSize().width / 2, 50});
		label->setScale(0.5f);
		this->addChild(label);

		log::info("Hello from Roblox 2 Mod, lisi445!");

		return true;
	}
};

