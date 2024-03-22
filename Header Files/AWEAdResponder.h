//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdResponder : HTSService <AWEAdResponder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWECommerceModuleServiceDOUYINHTSAdapterClass;

- (void)handleURLsOrAppStoreLandingEvent:(id)arg0;
- (BOOL)handleOpenURLLandingEvent:(id)arg0;
- (BOOL)handleAuthorURLLandingEvent:(id)arg0;
- (BOOL)handleWebURLLandingEvent:(id)arg0;
- (BOOL)handleUniversalLinkOrWebURLLandingEvent:(id)arg0;
- (BOOL)handleUniversalLinkEvent:(id)arg0;
- (BOOL)handleRedPacketLandingEvent:(id)arg0;
- (BOOL)handleFormPopupEvent:(id)arg0;
- (void)handlePopupEvent:(id)arg0;
- (void)handleDSPAdAutolandingEvent:(id)arg0;
- (void)tryEnterLiveWithSuccessBlock:(id /* block */)arg0 failRoute:(id /* block */)arg1 aweme:(id)arg2;
- (void)tryEnterPersonalPageRoute:(id /* block */)arg0;
- (BOOL)tryOpenWechatMiniAppWithWechatModel:(id)arg0 logInfo:(id)arg1 failRoute:(id /* block */)arg2 successRoute:(id /* block */)arg3;
- (void)trackClickButtonOneJumpOpenWechatWithAppInfo:(id)arg0 logInfo:(id)arg1 label:(id)arg2 errorType:(id)arg3;
- (BOOL)isWechatOpenTaskRunning;
- (BOOL)tryOpenCustomWebViewInFeedScene:(id)arg0;
- (void)makeSmartPhoneCallIfNeeded:(id)arg0 event:(id)arg1;
- (void)showUnsupportedToast:(id)arg0;
- (id)openURLAppendBTMParamsWithEvent:(id)arg0 openURL:(id)arg1;
- (void)trackECShopingActionWithEvent:(id)arg0;
- (id)aAWECommerceModuleServiceDOUYINHTSAdapter;
- (void)transferToWebURLWithActivityPendant:(id)arg0 event:(id)arg1;
- (void)showPopupWithEvent:(id)arg0;
- (void)handleEvent:(id)arg0;

@end