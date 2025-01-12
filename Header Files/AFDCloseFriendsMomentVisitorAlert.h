//
//     Generated by private class-dump
//

@class NSString, AFDCloseFriendsVisitorManager;

@interface AFDCloseFriendsMomentVisitorAlert : NSObject <AWEAlertProtocol> {
    AFDCloseFriendsVisitorManager *_visitorManager;
}

@property (retain, nonatomic) AFDCloseFriendsVisitorManager *visitorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (BOOL)canShowWithContext:(id)arg0;
- (void)showWithContext:(id)arg0 onClose:(id /* block */)arg1;
- (unsigned long long)maxIndexToShow;
- (void)setVisitorManager:(id)arg0;
- (id)visitorManager;
- (void).cxx_destruct;

@end
