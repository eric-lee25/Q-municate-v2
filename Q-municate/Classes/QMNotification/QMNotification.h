//
//  QMNotification.h
//  Q-municate
//
//  Created by Vitaliy Gorbachov on 4/18/16.
//  Copyright © 2016 Quickblox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QMNotificationPanel.h"

NS_ASSUME_NONNULL_BEGIN

@interface QMNotification : NSObject

/**
 *  Show notification panel with type and message.
 *
 *  @param notificationType notification type
 *  @param message          message to display in notification
 *  @param timeUntilDismiss time until notification will be dismissed
 *
 *  @see QMNotificationPanelType
 */
+ (void)showNotificationPanelWithType:(QMNotificationPanelType)notificationType message:(nullable NSString *)message timeUntilDismiss:(NSTimeInterval)timeUntilDismiss;

/**
 *  Dismiss current notification panel.
 */
+ (void)dismissNotificationPanel;

/**
 *  Send push notification for user with text.
 *
 *  @param user user to send push notification to
 *  @param text text for push notification
 *
 *  @return BFTask with completion
 */
+ (BFTask *)sendPushNotificationToUser:(QBUUser *)user withText:(NSString *)text;

@end

NS_ASSUME_NONNULL_END
