//
//     Generated by private class-dump
//

@class NSString, BDXContext, UIView;
@protocol IESECMarketingHybridContainerDelegate, BDXViewContainerProtocol;

@interface IESECMarketingHybridBulletContainer : UIView <BDXContainerLifecycleProtocol, BDXBridgeProviderProtocol, IESECMarketingHybridContainerProtocol> {
    NSString *_schema;
    BDXContext *_context;
    id<IESECMarketingHybridContainerDelegate> _delegate;
    UIView<BDXViewContainerProtocol> *_bdxLynxView;
}

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) BDXContext *context;
@property (weak, nonatomic) id<IESECMarketingHybridContainerDelegate> delegate;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxLynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)container:(id)arg0 didRecieveError:(id)arg1;
- (void)sendEvent:(id)arg0 params:(id)arg1;
- (void)setBdxLynxView:(id)arg0;
- (id)bdxLynxView;
- (id)initWithSchema:(id)arg0 referFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 data:(id)arg2 extra:(id)arg3 commonLog:(id)arg4 lifeCycleDelegate:(id)arg5;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (id)schema;
- (void)loadView;

@end