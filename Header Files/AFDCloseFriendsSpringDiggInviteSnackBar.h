//
//     Generated by private class-dump
//

@class NSString, AFDCloseFriendsSpringSnackBarContext;

@interface AFDCloseFriendsSpringDiggInviteSnackBar : NSObject <AWEAlertProtocol> {
    AFDCloseFriendsSpringSnackBarContext *_context;
}

@property (retain, nonatomic) AFDCloseFriendsSpringSnackBarContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exitRuleWithAwemeID:(id)arg0;

- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (BOOL)canShowWithContext:(id)arg0;
- (void)showWithContext:(id)arg0 onClose:(id /* block */)arg1;
- (id)limitShowRule;
- (id)exitRule;
- (void)didClickInviteBtn;
- (void)recordSnackBarShowEvent;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
