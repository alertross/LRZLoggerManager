//
//  LRZLoggerManager.h
//  CKMeiTuanShopView
//
//  Created by 刘强 on 2018/10/26.
//  Copyright © 2018 CK. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LRZLoggerManager : NSObject
/**
 *  获取单例实例
 *
 *  @return 单例实例
 */
+ (instancetype) sharedInstance;

#pragma mark - Method

/**
 *  写入日志
 *
 *  @param module 模块名称
 *  @param logStr 日志信息,动态参数
 */
- (void)logInfo:(NSString*)module logStr:(NSString*)logStr, ...;
- (void)pub_logInfo:(NSString*)module logStr:(NSString*)logStr;

/**
 *  清空过期的日志
 */
- (void)clearExpiredLog;
@end

NS_ASSUME_NONNULL_END
