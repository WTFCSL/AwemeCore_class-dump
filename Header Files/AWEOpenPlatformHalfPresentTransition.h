//
//     Generated by private class-dump
//

@class NSString;

@interface AWEOpenPlatformHalfPresentTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    BOOL _dismiss;
    BOOL _isLandScape;
}

@property (nonatomic) BOOL dismiss;
@property (nonatomic) BOOL isLandScape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsLandScape:(BOOL)arg0;
- (BOOL)isLandScape;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (BOOL)dismiss;
- (void)setDismiss:(BOOL)arg0;

@end
