//
//     Generated by private class-dump
//

@class SKOverlay, BDAAppStoreDownloadActionModel, NSString;

@interface BDAAppStoreSKOverlayManager : NSObject <SKOverlayDelegate> {
    BOOL _isDownload;
    BOOL _isOpenStore;
    BOOL _hasTouchedSKOverlay;
    SKOverlay *_skoverlay;
    BDAAppStoreDownloadActionModel *_model;
    NSString *_appID;
    id /* block */ _actionBlock;
}

@property (retain, nonatomic) SKOverlay *skoverlay;
@property (retain, nonatomic) BDAAppStoreDownloadActionModel *model;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) BOOL isDownload;
@property (nonatomic) BOOL isOpenStore;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL hasTouchedSKOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)skStoreViewDidAppear:(id)arg0;
- (void)setSkoverlay:(id)arg0;
- (void)resetSKOverlayActionState;
- (void)handleOverlayEvent:(id)arg0;
- (void)handleActiveEvent:(id)arg0;
- (void)rifleViewControllerDidDisappear:(id)arg0;
- (id)skoverlay;
- (void)requestSkOverlayInfoWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)resetBoolValue;
- (void)preloadSKOverlayWithDownloadModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setHasTouchedSKOverlay:(BOOL)arg0;
- (void)setIsOpenStore:(BOOL)arg0;
- (BOOL)hasTouchedSKOverlay;
- (BOOL)isOpenStore;
- (void)dismissSKOverlay:(id)arg0;
- (void)addSKOverlayActionNotifications;
- (void)removeSKOverlayActionNotifications;
- (void)openSKOverlayWithPreload:(id)arg0;
- (void)openSKOverlayWithDownloadModel:(id)arg0;
- (void)setSkoverlayActionEventBlock:(id /* block */)arg0;
- (void)setIsDownload:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)appID;
- (id /* block */)actionBlock;
- (void)dealloc;
- (void)setActionBlock:(id /* block */)arg0;
- (void)windowDidResignKey:(id)arg0;
- (void)storeOverlay:(id)arg0 willStartPresentation:(id)arg1;
- (void)storeOverlay:(id)arg0 didFinishPresentation:(id)arg1;
- (void)storeOverlay:(id)arg0 willStartDismissal:(id)arg1;
- (void)storeOverlay:(id)arg0 didFinishDismissal:(id)arg1;
- (void)storeOverlay:(id)arg0 didFailToLoadWithError:(id)arg1;
- (BOOL)isDownload;

@end
