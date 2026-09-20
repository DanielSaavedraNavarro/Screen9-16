#include <Geode/Geode.hpp>
#include <Geode/modify/CCDirector.hpp>

using namespace geode::prelude;

class $modify(Force9x16Director, CCDirector) {
    void reshapeProjection(CCSize size) {
        CCSize targetSize = CCSize(
            size.height * 9.0f / 16.0f,
            size.height
        );

        CCDirector::reshapeProjection(targetSize);
    }
};