//
//     Generated by private class-dump
//

@class NSObject;
@protocol AWEZoomTransitionOuterContextProvider;

@interface AFDMomentZoomTransitionProxy : UIViewController <AWEZoomTransitionOuterContextProvider> {
    NSObject<AWEZoomTransitionOuterContextProvider> *_provider;
}

@property (weak, nonatomic) NSObject<AWEZoomTransitionOuterContextProvider> *provider;

- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (void)setProvider:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)initWithProvider:(id)arg0;

@end
