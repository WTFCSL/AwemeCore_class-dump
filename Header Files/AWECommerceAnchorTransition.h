//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommerceAnchorTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionWithTransitionType:(unsigned long long)arg0;

- (id)initWithTransitionType:(unsigned long long)arg0;
- (void)presentAnimation:(id)arg0;
- (void)dismissAnimation:(id)arg0;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;

@end
