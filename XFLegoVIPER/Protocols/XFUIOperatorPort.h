//
//  XFUIOperatorPort.h
//  XFLegoVIPER
//
//  Created by yizzuide on 15/12/22.
//  Copyright © 2015年 yizzuide. All rights reserved.
//

#ifndef XFUIOperatorPort_h
#define XFUIOperatorPort_h

#import <UIKit/UIKit.h>
#import "XFUserInterfacePort.h"
@protocol XFUIOperatorPort <NSObject>

/**
 *  当前UI交互者的视图给Routing的接口
 */
@property (nonatomic, weak) id<XFUserInterfacePort> userInterface;

/**
 *  传回的意图数据
 */
@property (nonatomic, strong) id intentData;

/**
 *  视图将重获焦点
 */
- (void)viewWillBecomeFocusWithIntentData:(id)intentData;

/**
 *  视图将失去焦点
 */
- (void)viewWillResignFocus;

/**
 *  接收到其它模块的消息事件
 *
 *  @param eventName  消息名
 *  @param intentData 消息数据
 */
- (void)receiveOtherMoudleEventName:(NSString *)eventName intentData:(id)intentData;
@end


#endif /* XFUIOperatorPort_h */
