//
//     Generated by private class-dump
//

@class BDUGDeepLinkInfo, NSMutableArray, NSString;
@protocol BDUGDeepLinkDelegate;

@interface BDUGDeepLinkManager : NSObject {
    BOOL _disableIDFA;
    BOOL _settingsHasUpdated;
    BDUGDeepLinkInfo *_info;
    id<BDUGDeepLinkDelegate> _delegate;
    long long _deepLinkType;
    NSMutableArray *_pasteboardConsumers;
    id /* block */ _settingsUpdatedBlock;
    NSMutableArray *_stayForUpdateUris;
    NSString *_currentScheme;
    NSString *_codeLaunchMode;
}

@property (nonatomic) long long deepLinkType;
@property (retain, nonatomic) BDUGDeepLinkInfo *info;
@property (weak, nonatomic) id<BDUGDeepLinkDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *pasteboardConsumers;
@property (copy, nonatomic) id /* block */ settingsUpdatedBlock;
@property (nonatomic) BOOL settingsHasUpdated;
@property (retain, nonatomic) NSMutableArray *stayForUpdateUris;
@property (copy, nonatomic) NSString *currentScheme;
@property (copy, nonatomic) NSString *codeLaunchMode;
@property (nonatomic) BOOL disableIDFA;

+ (BOOL)isAttributed;
+ (id)shareInstance;

- (id)buildQueryFromDictionary:(id)arg0;
- (id)connectMethodName;
- (void)setDisableIDFA:(BOOL)arg0;
- (void)startAppleSearchAdsAttribution;
- (void)startAttribution;
- (void)startTokenAttribution;
- (void)startLocalAttribution;
- (double)delayReportSecconds;
- (void)reportTokenToServer:(id)arg0;
- (void)attributionTokenWithCompletion:(id /* block */)arg0;
- (void)reportAttributionDataToServer:(id)arg0;
- (void)setDeepLinkType:(long long)arg0;
- (void)consumeScheme:(id)arg0;
- (void)setPasteboardConsumers:(id)arg0;
- (void)setStayForUpdateUris:(id)arg0;
- (void)settingsStoreNotification;
- (long long)deepLinkType;
- (void)routerWithScheme:(id)arg0;
- (void)trackZlinkTokenVerify:(id)arg0 code:(long long)arg1 duration:(long long)arg2;
- (void)parseSchemeParams:(id)arg0 completion:(id /* block */)arg1;
- (void)consumeZlinkData:(id)arg0;
- (id)currentScheme;
- (void)setCurrentScheme:(id)arg0;
- (BOOL)disableIDFA;
- (void)trackZlinkFingerprint:(long long)arg0 duration:(long long)arg1 message:(id)arg2;
- (void)onEventWithUri:(id)arg0 type:(long long)arg1 extra:(id)arg2;
- (void)trackZlinkClipboardVerify:(id)arg0 code:(long long)arg1 duration:(long long)arg2;
- (void)uploadDeviceFuzzyAttributionIfNeed;
- (void)parsePasteboard:(id)arg0 completion:(id /* block */)arg1;
- (void)request:(id)arg0 isPasteboard:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)handleUniversalLink:(id)arg0;
- (void)handleScheme:(id)arg0;
- (BOOL)settingsHasUpdated;
- (void)setSettingsUpdatedBlock:(id /* block */)arg0;
- (id)stayForUpdateUris;
- (void)trackZlinkParseAppLink:(id)arg0 result:(long long)arg1;
- (void)trackZlinkNetworkTimeConsuming:(long long)arg0 timeout:(id)arg1 code:(long long)arg2 requestUrl:(id)arg3;
- (void)consumeZlinkToken:(id)arg0;
- (void)setSettingsHasUpdated:(BOOL)arg0;
- (id /* block */)settingsUpdatedBlock;
- (id)pasteboardConsumers;
- (void)trackZlinkSdkInit:(long long)arg0;
- (void)innerDeepLinkWithType:(long long)arg0 uri:(id)arg1;
- (void)trackZlinkDetermineUniversalLink:(id)arg0 settingsHasUpdated:(BOOL)arg1;
- (id)codeLaunchMode;
- (void)launchEventWithUri:(id)arg0 label:(id)arg1 entrance:(id)arg2 eventParams:(id)arg3;
- (void)setCodeLaunchMode:(id)arg0;
- (id)zlinkDataWithLink:(id)arg0;
- (void)registerDeepLinkWithInfo:(id)arg0 delegate:(id)arg1;
- (void)deepLinkWithType:(long long)arg0 uri:(id)arg1;
- (BOOL)isZlink:(id)arg0 withType:(long long)arg1;
- (void)registerPasteboardNotificationName:(id)arg0;
- (id)gdLabelForUri:(id)arg0;
- (void)launchEventWithUri:(id)arg0 label:(id)arg1 entrance:(id)arg2;
- (id)init;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;
- (id)platform;
- (unsigned long long)authorizationStatus;
- (id)delegate;
- (void)applicationDidEnterBackground;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)launchMode;
- (id)sdkVersion;

@end