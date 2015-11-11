#pragma once
#include "lib/framework.hpp"

std::shared_ptr<AppEnv> App::env;

int main() {
	
	App::env =
		std::make_shared<AppEnv>(WIDTH, HEIGHT, false, true);

	while (App::env->isOpen()) {

		App::env->begin();



		App::env->end();
	}
}
