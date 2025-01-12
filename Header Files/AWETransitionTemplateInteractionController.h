//
//     Generated by private class-dump
//

@class NSString;
@protocol AWETransitionContextProvider;

@interface AWETransitionTemplateInteractionController : NSObject <UIViewControllerInteractiveTransitioning> {
    id<AWETransitionContextProvider> _contextProvider;
}

@property (retain, nonatomic) id<AWETransitionContextProvider> contextProvider;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithContextProvider:(id)arg0;

- (void)startCustomPanDrivenTransition:(id)arg0;
- (void)startFreeTransition:(id)arg0;
- (void).cxx_destruct;
- (void)startInteractiveTransition:(id)arg0;
- (id)contextProvider;
- (void)setContextProvider:(id)arg0;

@end
