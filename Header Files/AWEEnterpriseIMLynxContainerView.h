//
//     Generated by private class-dump
//

@class AWEEnterpriseIMLynxReuseDelegateObject, AWEEnterpriseIMLynxContainerViewModel, NSString, UIView, NSDate, AWELynxContainer;
@protocol BDXViewContainerProtocol;

@interface AWEEnterpriseIMLynxContainerView : AWEEnterpriseMessageBaseView <BDLynxViewDelegate, BDXContainerLifecycleProtocol, AWEEnterpriseIMLynxReuseDelegateObjectDelegate> {
    id /* block */ _didFinishLynxLoadBlock;
    NSDate *_startLoadTimeDate;
    AWELynxContainer *_lynxContainer;
    UIView<BDXViewContainerProtocol> *_bulletContainer;
    AWEEnterpriseIMLynxReuseDelegateObject *_delegateObject;
    AWEEnterpriseIMLynxContainerViewModel *_viewModel;
}

@property (copy, nonatomic) NSDate *startLoadTimeDate;
@property (retain, nonatomic) AWELynxContainer *lynxContainer;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletContainer;
@property (retain, nonatomic) AWEEnterpriseIMLynxReuseDelegateObject *delegateObject;
@property (weak, nonatomic) AWEEnterpriseIMLynxContainerViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)containerDidFirstScreen:(id)arg0;
- (void)lynxViewDidStartLoading:(id)arg0;
- (void)lynxViewDidFirstScreen:(id)arg0;
- (id)lynxContainer;
- (void)setLynxContainer:(id)arg0;
- (void)bindViewModel:(id)arg0;
- (id)lynxEngine;
- (void)setStartLoadTimeDate:(id)arg0;
- (id)startLoadTimeDate;
- (void)lynxView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)lynxView:(id)arg0 didFailDownloadWithError:(id)arg1;
- (void)enterpriseLynxReuseDelegateObject:(id)arg0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)setBulletContainer:(id)arg0;
- (id)bulletContainer;
- (void)setDelegateObject:(id)arg0;
- (id /* block */)didFinishLynxLoadBlock;
- (void)p_didFinishLynxLoadWithSuccess:(BOOL)arg0;
- (void)lynxDidEndDisplaying;
- (void)setDidFinishLynxLoadBlock:(id /* block */)arg0;
- (id)delegateObject;
- (id)init;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
