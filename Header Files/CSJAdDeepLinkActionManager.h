//
//     Generated by private class-dump
//

@class CSJASlotContext, NSMutableDictionary, CSJMaterialMeta;
@protocol CSJAd;

@interface CSJAdDeepLinkActionManager : NSObject {
    BOOL _hasEnterBackground;
    long long _deeplinkJumpTime;
    NSMutableDictionary *_trackInfoDic;
    CSJMaterialMeta<CSJAd> *_materialMeta;
    CSJMaterialMeta<CSJAd> *_doubleOpenDeepLinkMeta;
    CSJASlotContext *_doubleOpenDeepLinkContext;
    double _doubleOpenDeepLinkTime;
}

@property (nonatomic) BOOL hasEnterBackground;
@property (nonatomic) long long deeplinkJumpTime;
@property (retain, nonatomic) NSMutableDictionary *trackInfoDic;
@property (retain, nonatomic) CSJMaterialMeta<CSJAd> *materialMeta;
@property (weak, nonatomic) CSJMaterialMeta<CSJAd> *doubleOpenDeepLinkMeta;
@property (weak, nonatomic) CSJASlotContext *doubleOpenDeepLinkContext;
@property (nonatomic) double doubleOpenDeepLinkTime;

+ (id)sharedManager;

- (BOOL)hasEnterBackground;
- (void)appDidEnterBackgroundNotification;
- (void)appDidBecomeActiveNotification;
- (BOOL)pbu_handleWCMiniappActionWithModel:(id)arg0 context:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)pbu_handleLinksActionWithModel:(id)arg0 context:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)canPresentPlayableLandingPageWithContext:(id)arg0 meta:(id)arg1;
- (void)pbu_openPlayableVCWithModel:(id)arg0 context:(id)arg1;
- (BOOL)pbu_handleActionWithModel:(id)arg0 context:(id)arg1;
- (void)pbu_report_ulink_resultWithModel:(id)arg0 context:(id)arg1;
- (void)pbu_handleDplActionWithModel:(id)arg0 context:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)wcMiniappTypeWithMeta:(id)arg0 success:(BOOL)arg1;
- (void)pbu_doubleDeepLinkWithModel:(id)arg0 context:(id)arg1;
- (void)pbu_report_dpl_resultWithModel:(id)arg0 context:(id)arg1 adExtraDataDic:(id)arg2;
- (void)pbu_handleFallbackActionWithModel:(id)arg0 context:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)pbu_openWebVCWithFallbackURL:(id)arg0 model:(id)arg1 context:(id)arg2;
- (void)pbu_report_dpl_TrackWithModel:(id)arg0 context:(id)arg1 adExtraDataDic:(id)arg2;
- (id)trackInfoDic;
- (void)setDeeplinkJumpTime:(long long)arg0;
- (id)doubleOpenDeepLinkMeta;
- (void)setDoubleOpenDeepLinkTime:(double)arg0;
- (long long)deeplinkJumpTime;
- (void)setTrackInfoDic:(id)arg0;
- (double)doubleOpenDeepLinkTime;
- (void)checkAppStatusWithTimeDiff:(double)arg0;
- (id)doubleOpenDeepLinkContext;
- (void)showAlertWithMeta:(id)arg0 context:(id)arg1;
- (void)clearHistoryDoubleOpen;
- (void)handleActionWithModel:(id)arg0 context:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setDoubleOpenDeepLinkMeta:(id)arg0;
- (void)setDoubleOpenDeepLinkContext:(id)arg0;
- (id)realPresentingViewControllerFromViewController:(id)arg0;
- (id)materialMeta;
- (void)setMaterialMeta:(id)arg0;
- (id)pbu_urlWithString:(id)arg0;
- (void)setHasEnterBackground:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)currentTime;
- (void)dealloc;

@end