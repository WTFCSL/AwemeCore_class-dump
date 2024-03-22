//
//     Generated by private class-dump
//

@class NSString, UIViewController, UIView;
@protocol AWENearbyHalfScreenContainerProtocol;

@interface AWENearbyHalfScreenLeftCloseViewInjector : NSObject <AWENearbyHalfScreenInjectedViewProtocol> {
    UIViewController<AWENearbyHalfScreenContainerProtocol> *_targetVC;
    UIView *_injectedView;
}

@property (weak, nonatomic) UIViewController<AWENearbyHalfScreenContainerProtocol> *targetVC;
@property (weak, nonatomic) UIView *injectedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)targetVC;
- (void)setTargetVC:(id)arg0;
- (id)initWithTargetVC:(id)arg0;
- (void)didAddContentView:(id)arg0 targetVC:(id)arg1;
- (void)willBecomeHalfScreen:(id)arg0 targetVC:(id)arg1;
- (void)willBecomeFullScreen:(id)arg0 targetVC:(id)arg1;
- (void)didBecomeFullScreen:(id)arg0 targetVC:(id)arg1;
- (id)injectedView;
- (void)closeClicked:(id)arg0;
- (void)setInjectedView:(id)arg0;
- (void).cxx_destruct;

@end
