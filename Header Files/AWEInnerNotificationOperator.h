//
//     Generated by private class-dump
//

@class UIWindow, AWEInnerNotificationContainerView, NSString, RxPromise, AWEInnerNotificationRequest, AWEInnerNotificationCoordinator;
@protocol AWEInnerNotificationOperatorDelegate;

@interface AWEInnerNotificationOperator : NSObject <AWEInnerNotificationCoordinatorDelegate, AWEInnerNotificationContentOperator> {
    AWEInnerNotificationRequest *_request;
    id<AWEInnerNotificationOperatorDelegate> _delegate;
    UIWindow *_window;
    AWEInnerNotificationContainerView *_notificationView;
    AWEInnerNotificationCoordinator *_coordinator;
    RxPromise *_dismissPromise;
}

@property (retain, nonatomic) UIWindow *window;
@property (readonly, nonatomic) AWEInnerNotificationContainerView *notificationView;
@property (readonly, nonatomic) AWEInnerNotificationCoordinator *coordinator;
@property (retain, nonatomic) RxPromise *dismissPromise;
@property (readonly, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationOperatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } notificationViewTransform;
@property (nonatomic) double notificationViewAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } notifictionViewFrame;

- (void)renderModel:(id)arg0 context:(id)arg1;
- (id)dismissNotificationView:(BOOL)arg0;
- (void)resetDismissTimer;
- (void)notifyLayoutChange;
- (id)dismissNotificationView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })notifictionViewFrame;
- (id)dismissNotificationWithAnimated:(BOOL)arg0 reason:(long long)arg1;
- (void)pauseDismissTimer;
- (id)moveNotificationByOffset:(double)arg0 withAnimated:(BOOL)arg1;
- (void)resumeDismissTimer;
- (void)forceDismissByOtherNotification;
- (void)__notificationViewAdaptWithOrientation;
- (id)__showNotification;
- (id)__dismissNotificationWithAnimated:(BOOL)arg0 reason:(long long)arg1;
- (id)__moveNotificationByOffset:(double)arg0 withAnimated:(BOOL)arg1;
- (id)notificationView;
- (void)__notificationViewAppearOrDisappearWithReason:(long long)arg0;
- (id)dismissPromise;
- (void)setDismissPromise:(id)arg0;
- (double)pushViewTopInset;
- (double)pushViewWidth;
- (id)dismissNotificationViewReason:(long long)arg0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })notificationViewTransform;
- (void)setNotificationViewTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (double)notificationViewAlpha;
- (void)setNotificationViewAlpha:(double)arg0;
- (id)coordinator;
- (id)init;
- (void).cxx_destruct;
- (void)setWindow:(id)arg0;
- (id)request;
- (id)delegate;
- (id)window;
- (void)setDelegate:(id)arg0;
- (id)showNotification;
- (id)__window;

@end