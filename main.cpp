#include <openzwave/value_classes/ValueID.h>
 
int main() {
    OpenZWave::ValueID myVid(123456u, 12u,
                             OpenZWave::ValueID::ValueGenre::ValueGenre_User,
                             0x12, 1u, 2u,
                             OpenZWave::ValueID::ValueType::ValueType_Byte);
}
