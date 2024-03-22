//
//     Generated by private class-dump
//

@class NSDictionary, NSString, UNNotificationTrigger;

@interface BDUGNotificationContent : NSObject {
    NSDictionary *_userInfo;
    UNNotificationTrigger *_trigger;
    NSString *_categoryIdentifier;
    NSString *_actionIdentifier;
    NSString *_userText;
    NSString *_identifier;
}

@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) UNNotificationTrigger *trigger;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *userText;
@property (copy, nonatomic) NSString *identifier;

+ (id)contentWithUserInfo:(id)arg0 notificationTrigger:(id)arg1 categoryIdentifier:(id)arg2 actionIdentifier:(id)arg3 userText:(id)arg4 identifier:(id)arg5;
+ (id)contentWithUserInfo:(id)arg0 categoryIdentifier:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3;

- (void)setUserText:(id)arg0;
- (void)setCategoryIdentifier:(id)arg0;
- (id)categoryIdentifier;
- (void).cxx_destruct;
- (id)trigger;
- (void)setUserInfo:(id)arg0;
- (id)actionIdentifier;
- (id)identifier;
- (void)setTrigger:(id)arg0;
- (id)userInfo;
- (void)setIdentifier:(id)arg0;
- (id)userText;
- (void)setActionIdentifier:(id)arg0;

@end
