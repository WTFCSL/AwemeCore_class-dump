//
//     Generated by private class-dump
//

@class RxDeferred, AWEInnerNotificationRequest, NSString;
@protocol AWEInnerNotificationCoordinatorDelegate;

@interface AWEInnerNotificationCoordinator : NSObject <AWEInnerPushProtocol> {
    id<AWEInnerNotificationCoordinatorDelegate> _delegate;
    RxDeferred *_deferred;
    AWEInnerNotificationRequest *_request;
}

@property (retain, nonatomic) RxDeferred *deferred;
@property (readonly, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)arg0 context:(id)arg1;
- (long long)innerPushLevel;
- (void)dismissInnerPush:(id)arg0;
- (void)displayInnerPush:(id)arg0;
- (id)requestShowNotificationWithDelegate:(id)arg0 requestIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)request;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setDeferred:(id)arg0;
- (id)deferred;
- (void)dismissNotificationWithIdentifier:(id)arg0;

@end
