/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <ReactCommon/RCTTurboModule.h>

namespace facebook {
namespace react {

/**
 * Provide the TurboModule class for the given name.
 */
Class FabricExampleTurboModuleClassProvider(const char *name);

/**
 * Provide a pure C++ instance of a TurboModule, specific to this app.
 */
std::shared_ptr<TurboModule> FabricExampleTurboModuleProvider(const std::string &name, std::shared_ptr<CallInvoker> jsInvoker);

} // namespace react
} // namespace facebook
