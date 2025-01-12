//
//     Generated by private class-dump
//

@class NSString, AWEDetailPropViewModel, IESServiceProvider, UIViewController;

@interface AWEDetailPropCollectServiceImpl : NSObject <AWEDetailCollectService> {
    BOOL _animatingNavigationBar;
    UIViewController *_host;
    AWEDetailPropViewModel *_stateContext;
    IESServiceProvider *_provider;
}

@property (weak, nonatomic) UIViewController *host;
@property (weak, nonatomic) AWEDetailPropViewModel *stateContext;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (nonatomic) BOOL animatingNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHost:(id)arg0 serviceProvider:(id)arg1;
- (void)collectWithActionSender:(id)arg0;
- (void)p_handleToastTipAnimationWithCollectStatus:(BOOL)arg0 eventSender:(id)arg1 propModel:(id)arg2;
- (void)p_handleCollectError:(id)arg0;
- (BOOL)animatingNavigationBar;
- (void)setAnimatingNavigationBar:(BOOL)arg0;
- (void)setProvider:(id)arg0;
- (void)setHost:(id)arg0;
- (id)provider;
- (void).cxx_destruct;
- (void)setStateContext:(id)arg0;
- (id)host;
- (id)stateContext;

@end
