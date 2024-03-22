//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESHYHybridViewProtocol, IESHYHybridViewLifecycleProtocol;

@interface AnnieLiveBizCardLifeCycle : NSObject <BDXContainerLifecycleProtocol> {
    id<IESHYHybridViewLifecycleProtocol> _puzzleDelegate;
    UIView<IESHYHybridViewProtocol> *_cardKitViewProxy;
}

@property (weak, nonatomic) id<IESHYHybridViewLifecycleProtocol> puzzleDelegate;
@property (retain, nonatomic) UIView<IESHYHybridViewProtocol> *cardKitViewProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)containerWillCreated:(id)arg0 view:(id)arg1;
- (void)containerDidCreated:(id)arg0 view:(id)arg1;
- (void)containerWillDestory:(id)arg0;
- (BOOL)container:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(id)arg2;
- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)containerDidStartLoading:(id)arg0;
- (void)containerDidFirstScreen:(id)arg0;
- (void)containerDidUpdate:(id)arg0;
- (void)container:(id)arg0 didRecieveError:(id)arg1;
- (void)containerDidPageUpdate:(id)arg0;
- (void)containerDidConstructJSRuntime:(id)arg0;
- (id)cardKitViewProxy;
- (id)puzzleDelegate;
- (void)setPuzzleDelegate:(id)arg0;
- (void)setCardKitViewProxy:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg0;

@end
