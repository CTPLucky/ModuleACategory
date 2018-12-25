//
//  CTMediator+ModuleB.h
//  ModuleACategory
//
//  Created by 末小夕 on 2018/12/25.
//  Copyright © 2018 末小夕. All rights reserved.
//

#import "CTMediator.h"

@interface CTMediator (ModuleA)

- (UIViewController *)ModuleA_viewControllerWithCallback:(void(^)(NSString *result))callback;

@end
