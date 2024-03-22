//
//     Generated by private class-dump
//

@protocol AWEInnerNotificationContentOperator <NSObject>

@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } notificationViewTransform;
@property (nonatomic) double notificationViewAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } notifictionViewFrame;

- (id)dismissNotificationView:(BOOL)arg0;
- (void)resetDismissTimer;
- (void)notifyLayoutChange;
- (id)dismissNotificationView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })notifictionViewFrame;
- (void)pauseDismissTimer;
- (void)resumeDismissTimer;
- (id)dismissNotificationViewReason:(long long)arg0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })notificationViewTransform;
- (void)setNotificationViewTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (double)notificationViewAlpha;
- (void)setNotificationViewAlpha:(double)arg0;

@end