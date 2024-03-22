//
//     Generated by private class-dump
//

@class AWEGCPVideoAnchorContext, NSString;

@interface AWEGCPVideoAnchorWidget : IESGCPBaseWidget <AWEGCPVideoAnchorRouter> {
    AWEGCPVideoAnchorContext *_context;
}

@property (retain, nonatomic) AWEGCPVideoAnchorContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)widgetShouldBeActivated;

- (id)awemeModel;
- (void)anchorDidClickedWithContext:(id)arg0;
- (id)videoAnchorTrackExtraParams;
- (void)anchorViewWillShowWithContext:(id)arg0;
- (id)currentAnchorEnterMethod;
- (id)currentAnchorEnterSubMethod;
- (id)currentAnchorPromoteSceneSubDict;
- (void)widgetDidCreate;
- (void)widgetBindService;
- (void)updatePromoteGameMetaData;
- (void)jumpDetail;
- (void)triggerDataConnection;
- (BOOL)isDataConnectionContentWithModel:(id)arg0;
- (BOOL)hasBigMiniGame;
- (void)trackAnchorOpenUrl;
- (id)getPageAttrReportParams;
- (id)getSubSceneStr;
- (void)reportGameMetaDataNullLog;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
