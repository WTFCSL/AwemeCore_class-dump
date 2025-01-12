//
//     Generated by private class-dump
//

@class DitoGeneralContainerPageContext, NSString, NSHashTable;

@interface AWEPOIDetailNGManager : NSObject <AWEPOIDetailNGPopUpManagerProtocol> {
    BOOL _hadShowLocationBar;
    BOOL _hadShowSysLocationDialog;
    BOOL _hasPOIDetailNGPopUpViewShowing;
    DitoGeneralContainerPageContext *_context;
    NSHashTable *_popupVCsArray;
}

@property (retain, nonatomic) NSHashTable *popupVCsArray;
@property (nonatomic) BOOL hasPOIDetailNGPopUpViewShowing;
@property (weak, nonatomic) DitoGeneralContainerPageContext *context;
@property (nonatomic) BOOL hadShowLocationBar;
@property (nonatomic) BOOL hadShowSysLocationDialog;
@property (readonly, nonatomic) BOOL canShowLocationDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schemaWithPath:(id)arg0 schema:(id)arg1 byAddingQueryDict:(id)arg2;
+ (id)poiLocationReqTriggerMsg;
+ (id)poiDetailLocationServiceConfig;
+ (id)poiDetailLocationServiceConfigWithMessage:(id)arg0;
+ (id)reSplictCollectGuideSchema:(id)arg0 cardType:(id)arg1;
+ (id)sharedInstance;

- (BOOL)isShowPOIDetailInModalView;
- (void)setHadShowSysLocationDialog:(BOOL)arg0;
- (BOOL)canShowLocationDialog;
- (BOOL)hadShowSysLocationDialog;
- (void)setHadShowLocationBar:(BOOL)arg0;
- (void)recordDidShowLocationDialog;
- (BOOL)hadShowLocationBar;
- (id)detailNGBackgroundColor;
- (BOOL)viewInDetailNG:(id)arg0;
- (BOOL)viewInDetailNG:(id)arg0 loopCheck:(BOOL)arg1;
- (BOOL)hasPOIDetailNGPopUpViewShowing;
- (id)popupVCsArray;
- (void)setHasPOIDetailNGPopUpViewShowing:(BOOL)arg0;
- (id)sketchConfigRaw;
- (void)popupPOIDetailNGWithTransitionInfo:(id)arg0;
- (void)dismissNGDetailViewController:(id)arg0;
- (void)popupPOIDetailNGWithTargetViewController:(id)arg0;
- (id)sketchConfig;
- (id)createRepoPOIModelFromDetail:(id)arg0;
- (void)setPopupVCsArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (BOOL)isModalView;

@end
