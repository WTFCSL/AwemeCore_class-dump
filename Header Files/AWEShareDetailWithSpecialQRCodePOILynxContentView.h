//
//     Generated by private class-dump
//

@class AWEUILoadingView, NSString, UIView, NSMutableArray, AWEShareContext;
@protocol BDXViewContainerProtocol;

@interface AWEShareDetailWithSpecialQRCodePOILynxContentView : AWEShareDetailWithQRCodeBaseContentView <BDXContainerLifecycleProtocol> {
    BOOL _containerDidFirstScreen;
    UIView<BDXViewContainerProtocol> *_bulletView;
    AWEShareContext *_shareContext;
    NSMutableArray *_bridgeSubscriberList;
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) NSMutableArray *bridgeSubscriberList;
@property (nonatomic) BOOL containerDidFirstScreen;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)containerDidFirstScreen:(id)arg0;
- (void)setShareContext:(id)arg0;
- (void)dismissLoading;
- (id)shareContext;
- (void)bindEvent;
- (id)bulletView;
- (void)setBulletView:(id)arg0;
- (id)bridgeSubscriberList;
- (void)setBridgeSubscriberList:(id)arg0;
- (void)setIsQRCodeLoaded:(BOOL)arg0;
- (void)setContainerDidFirstScreen:(BOOL)arg0;
- (BOOL)containerDidFirstScreen;
- (id)imageToSaveToAlbum;
- (void)layoutSubviewIfNeed;
- (void)loadBulletView;
- (void)updateQRcode;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)dealloc;
- (void)setUpSubviews;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (struct CGSize { double x0; double x1; })contentViewSize;
- (void)showLoading;

@end
