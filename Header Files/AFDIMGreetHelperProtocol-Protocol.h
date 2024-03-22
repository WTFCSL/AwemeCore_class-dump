//
//     Generated by private class-dump
//

@protocol AFDIMGreetHelperProtocol <NSObject>

+ (BOOL)shouldUnifyLeaveMsgAlert;
+ (void)updateDefaultMsg:(id)arg0;
+ (void)showAvatarLeaveMsgAlertWithUser:(id)arg0 confirmBlock:(id /* block */)arg1 cancelBlock:(id /* block */)arg2;
+ (id)defaultMsgText;
+ (void)showGreetMsgNetWorkResponseToast:(id)arg0;
+ (void)sendLightInteractionMsgWithUser:(id)arg0 trackParams:(id)arg1;
+ (void)showLeaveMsgAlertWithUser:(id)arg0 trackParams:(id)arg1;
+ (BOOL)shouldShowGreetFromUserRecommendCardAndProfile:(id)arg0;
+ (void)showLeaveMsgSnackBarWithUser:(id)arg0 trackParams:(id)arg1 completion:(id /* block */)arg2;

@property (nonatomic) BOOL isSecondaryAlert;

- (id)initWithUser:(id)arg0 trackParams:(id)arg1;
- (BOOL)isSecondaryAlert;
- (void)setIsSecondaryAlert:(BOOL)arg0;

@end