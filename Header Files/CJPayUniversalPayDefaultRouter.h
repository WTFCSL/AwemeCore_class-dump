//
//     Generated by private class-dump
//

@class NSString, CJPayNavigationController;
@protocol CJPayAPIDelegate;

@interface CJPayUniversalPayDefaultRouter : NSObject <CJPayDeskRouteDelegate, CJPayAPIDelegate> {
    CJPayNavigationController *_navigationController;
    id<CJPayAPIDelegate> _originalDelegate;
}

@property (retain, nonatomic) CJPayNavigationController *navigationController;
@property (retain, nonatomic) id<CJPayAPIDelegate> originalDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callState:(BOOL)arg0 fromScene:(long long)arg1;
- (void)callState:(BOOL)arg0 fromScene:(long long)arg1 params:(id)arg2;
- (void)onResponse:(id)arg0;
- (void)push:(id)arg0 animated:(BOOL)arg1;
- (void)p_presentVC:(id)arg0 animated:(BOOL)arg1;
- (id)p_handlePushHalfViewController:(id)arg0;
- (id)p_handlePresentHalfViewController:(id)arg0;
- (BOOL)p_topVCIsHalfVC;
- (void)routeToVC:(id)arg0 animated:(BOOL)arg1;
- (void)exitVCWithCallbackId:(id)arg0;
- (void)exitWithCallbackId:(id)arg0;
- (void).cxx_destruct;
- (void)setNavigationController:(id)arg0;
- (id)initWithDelegate:(id)arg0;
- (id)navigationController;
- (id)originalDelegate;
- (void)setOriginalDelegate:(id)arg0;

@end
