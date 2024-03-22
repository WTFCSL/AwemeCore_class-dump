//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCTransitioningDelegateImpl : NSObject <ACCTransitioningDelegateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bigToSmallModalDelegate;
- (id)modalTransitionDelegate;
- (id)modalTransitionDelegateWithQuickAnimation:(BOOL)arg0;
- (id)modalTransitionDelegateWithBackgroundColor:(id)arg0;
- (id)modalLikePushTransitionDelegate;
- (id)modalLikePushTransitionDelegateWithQuickAnimation;
- (id)modalLikeFadeInOutTransitionDelegate;
- (id)modalTransitionDelegateWithDuration:(double)arg0 completion:(id /* block */)arg1;
- (id)modalTransitionDelegateWithQuickAnimation:(BOOL)arg0 completion:(id /* block */)arg1;

@end
