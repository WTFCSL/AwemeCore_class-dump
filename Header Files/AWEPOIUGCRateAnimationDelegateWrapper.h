//
//     Generated by private class-dump
//

@class NSString, AWEPOIUGCRateFiveStarView;

@interface AWEPOIUGCRateAnimationDelegateWrapper : NSObject <CAAnimationDelegate> {
    AWEPOIUGCRateFiveStarView *_starView;
}

@property (weak, nonatomic) AWEPOIUGCRateFiveStarView *starView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)starView;
- (void)setStarView:(id)arg0;
- (void)animationDidStart:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;

@end
