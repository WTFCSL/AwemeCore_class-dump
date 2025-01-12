//
//     Generated by private class-dump
//

@class NSString, UIView, NSMutableArray, AWEShareContext;
@protocol BDXViewContainerProtocol;

@interface AWEShareDetailWithSpecialQRCodeBookContentView : AWEShareDetailWithQRCodeBaseContentView <BDXContainerLifecycleProtocol> {
    BOOL _containerDidFirstScreen;
    UIView<BDXViewContainerProtocol> *_bulletView;
    AWEShareContext *_shareContext;
    NSMutableArray *_bridgeSubscriberList;
    NSString *_bookTemplateID;
}

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) NSMutableArray *bridgeSubscriberList;
@property (copy, nonatomic) NSString *bookTemplateID;
@property (nonatomic) BOOL containerDidFirstScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidFirstScreen:(id)arg0;
- (void)setShareContext:(id)arg0;
- (id)shareContext;
- (void)bindEvent;
- (id)commonTrackParams;
- (id)bulletView;
- (void)setBulletView:(id)arg0;
- (id)bridgeSubscriberList;
- (void)setBridgeSubscriberList:(id)arg0;
- (void)setIsQRCodeLoaded:(BOOL)arg0;
- (void)setContainerDidFirstScreen:(BOOL)arg0;
- (BOOL)containerDidFirstScreen;
- (id)imageToSaveToAlbum;
- (void)setBookTemplateID:(id)arg0;
- (void)loadBulletView;
- (id)bookTemplateID;
- (void)updateQRcode;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)dealloc;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
