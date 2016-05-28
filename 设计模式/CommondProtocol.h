//
//  CommondProtocol.h
//  设计模式
//
//  Created by user on 16/5/28.
//  Copyright © 2016年 mredrock. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CommandProtocol <NSObject>

- (BOOL)findCommand:(NSString *)command params:(NSArray *)params;

@end
