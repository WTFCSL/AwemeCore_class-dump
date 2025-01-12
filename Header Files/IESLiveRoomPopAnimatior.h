//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveRoomPopAnimatior : NSObject <UIViewControllerAnimatedTransitioning> {
    BOOL _isDismiss;
}

@property (nonatomic) BOOL isDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animatorForDismiss:(BOOL)arg0;

- (void)setIsDismiss:(BOOL)arg0;
- (BOOL)isDismiss;
- (void)performPopAnimation:(id)arg0;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;

@end
