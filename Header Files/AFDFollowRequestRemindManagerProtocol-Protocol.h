//
//     Generated by private class-dump
//

@class AWEUserModel;

@protocol AFDFollowRequestRemindManagerProtocol <NSObject>

+ (void)showAutoFollowBackAlert:(id)arg0 trackParams:(id)arg1;
+ (void)didTurnOffAutoFollowBack;

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long followBackReminderType;

- (void)showAlert:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setFollowBackReminderType:(long long)arg0;
- (long long)followBackReminderType;
- (void)setUser:(id)arg0;
- (id)user;
- (void)showAlert:(BOOL)arg0;

@end
