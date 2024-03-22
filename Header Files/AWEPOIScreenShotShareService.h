//
//     Generated by private class-dump
//

@class AWEPOIScreenShootPanelSheet, NSDictionary, AWEPOIDetailNGPageContext, AWEPOIInfoModel, UIViewController;

@interface AWEPOIScreenShotShareService : NSObject {
    BOOL _isFavorited;
    UIViewController *_target;
    AWEPOIInfoModel *_poiInfo;
    NSDictionary *_trackParams;
    AWEPOIScreenShootPanelSheet *_currentSheet;
    AWEPOIDetailNGPageContext *_context;
}

@property (weak, nonatomic) UIViewController *target;
@property (retain, nonatomic) AWEPOIInfoModel *poiInfo;
@property (nonatomic) BOOL isFavorited;
@property (retain, nonatomic) AWEPOIScreenShootPanelSheet *currentSheet;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;

+ (id)sharedInstance;

- (id)poiInfo;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)showPanel;
- (void)setPoiInfo:(id)arg0;
- (void)setIsFavorited:(BOOL)arg0;
- (id)screenShotImage;
- (void)didReceivePOICollectionStatusChanged:(id)arg0;
- (void)removeScreenShootShareTarget:(id)arg0;
- (void)addTarget:(id)arg0 withContext:(id)arg1 trackParams:(id)arg2;
- (void)userDidTakeScreenshoot:(id)arg0;
- (id)screenShotImageData;
- (void)showFavoriceSuccessToast;
- (void)routeToFavorite:(id)arg0;
- (BOOL)isObservingPOIPage;
- (id)screenShotImageImage:(id)arg0 WithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setTarget:(id)arg0;
- (id)target;
- (id)context;
- (BOOL)isFavorited;
- (void)setCurrentSheet:(id)arg0;
- (id)currentSheet;

@end