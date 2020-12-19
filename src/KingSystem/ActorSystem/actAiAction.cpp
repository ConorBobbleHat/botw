#include "KingSystem/ActorSystem/actAiAction.h"
#include "KingSystem/ActorSystem/actAiRoot.h"

namespace ksys::act::ai {

Action::Action(const InitArg& arg) : ActionBase(arg) {}

void Action::calc() {
    calc_();
}

}  // namespace ksys::act::ai
