//
//     Generated by private class-dump
//

@class NSString, AWELynxContainer, NSObject;
@protocol AWELynxLightContainerDelegate;

@interface AWELynxLightContainer : UIViewController <BDLynxViewDelegate, BDLynxViewUIDelegate> {
    BOOL _isLoading;
    AWELynxContainer *_lynxView;
    NSObject<AWELynxLightContainerDelegate> *_delegate;
}

@property (weak, nonatomic) NSObject<AWELynxLightContainerDelegate> *delegate;
@property (retain, nonatomic) AWELynxContainer *lynxView;
@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxView;
- (void)sendEvent:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (void)lynxViewDidStartLoading:(id)arg0;
- (void)lynxViewDidFirstScreen:(id)arg0;
- (void)lynxView:(id)arg0 didRecieveError:(id)arg1;
- (void)setLynxView:(id)arg0;
- (id)getParams;
- (void)lynxView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)lynxView:(id)arg0 didFailDownloadWithError:(id)arg1;
- (void)lynxViewDidFinishLoad:(id)arg0;
- (void)lynxView:(id)arg0 didFallbackWithError:(id)arg1;
- (void)lynxView:(id)arg0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)registerBridgeHandlers;
- (id)getDefaultConfig;
- (void)handleFailedToLoadWithError:(id)arg0;
- (void)updateLayoutWithBlock:(id /* block */)arg0;
- (void)reload;
- (BOOL)isLoading;
- (void)sendEvent:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setIsLoading:(BOOL)arg0;
- (void)viewDidLoad;

@end