//
//     Generated by private class-dump
//

@class NSSet, NSString, NSArray, NSDictionary, BDECIMCache;
@protocol BDECIMCacheProtocol;

@interface BDECIMClientConfig : NSObject {
    BOOL _enableReportUnreadCountByInbox;
    BOOL _includeEmptyConversation;
    BOOL _manuallyEnableWebscoket;
    BOOL _parentChildSession;
    BOOL _websocketUseDY;
    BOOL _isImChainUser;
    BOOL _mixChainFlagKeyIsolation;
    BOOL _enableLoadMsgOnConvUpdate;
    BOOL _isTIMXSDKUser;
    BOOL _isNewStoreUser;
    BOOL _mergeInsertMessageAndConv;
    BOOL _letLongConnectionGoWhenInit;
    BOOL _canPullUserMessageWhenNotInited;
    BOOL _enableMessageACK;
    BOOL _enableMetrics;
    BOOL _canPullRecentConversation;
    int _appVersion;
    int _ecomServiceInbox;
    NSSet *_inboxes;
    long long _service;
    long long _method;
    NSString *_shortLinkServerURL;
    NSArray *_wsServerURLs;
    NSString *_appKey;
    NSString *_appID;
    NSString *_fpID;
    NSString *_deviceId;
    long long _installId;
    long long _authType;
    NSDictionary *_pullReadStateInboxToBizRoleMapper;
    id /* block */ _customParamsBlock;
    NSDictionary *_customHeaders;
    id /* block */ _customHeadersBlock;
    id /* block */ _requestCommonParamsBlock;
    id /* block */ _additionalRequestCommonParamsBlock;
    NSArray *_bizCustomMethods;
    NSArray *_typeDataArr;
    NSString *_businessID;
    long long _bizSDKType;
    NSString *_customBizID;
    NSSet *_filterMsgTypeSet;
    id _websocketIMP;
    NSString *_pigeonTrackPrefix;
    unsigned long long _getByConversationMaxRecursiveCount;
    NSDictionary *_imsdkConfig;
    NSArray *_notDownsamplingEvent;
    long long _loadOpenConvsInterval;
    long long _pullInitListFirstLoadPage;
    long long _pullInitListMaxPage;
    id<BDECIMCacheProtocol> _cacheIMP;
    BDECIMCache *_backCacheIMP;
}

@property (retain, nonatomic) BDECIMCache *backCacheIMP;
@property (copy, nonatomic) NSSet *inboxes;
@property (nonatomic) long long service;
@property (nonatomic) long long method;
@property (copy, nonatomic) NSString *shortLinkServerURL;
@property (copy, nonatomic) NSArray *wsServerURLs;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *fpID;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) int appVersion;
@property (nonatomic) long long installId;
@property (nonatomic) long long authType;
@property (nonatomic) BOOL enableReportUnreadCountByInbox;
@property (copy, nonatomic) NSDictionary *pullReadStateInboxToBizRoleMapper;
@property (copy, nonatomic) id /* block */ customParamsBlock;
@property (copy, nonatomic) NSDictionary *customHeaders;
@property (copy, nonatomic) id /* block */ customHeadersBlock;
@property (copy, nonatomic) id /* block */ requestCommonParamsBlock;
@property (copy, nonatomic) id /* block */ additionalRequestCommonParamsBlock;
@property (copy, nonatomic) NSArray *bizCustomMethods;
@property (nonatomic) BOOL includeEmptyConversation;
@property (nonatomic) BOOL manuallyEnableWebscoket;
@property (copy, nonatomic) NSArray *typeDataArr;
@property (nonatomic) BOOL parentChildSession;
@property (copy, nonatomic) NSString *businessID;
@property (nonatomic) long long bizSDKType;
@property (copy, nonatomic) NSString *customBizID;
@property (nonatomic) BOOL websocketUseDY;
@property (copy, nonatomic) NSSet *filterMsgTypeSet;
@property (weak, nonatomic) id websocketIMP;
@property (copy, nonatomic) NSString *pigeonTrackPrefix;
@property (nonatomic) BOOL isImChainUser;
@property (nonatomic) BOOL mixChainFlagKeyIsolation;
@property (nonatomic) BOOL enableLoadMsgOnConvUpdate;
@property (nonatomic) unsigned long long getByConversationMaxRecursiveCount;
@property (nonatomic) BOOL isTIMXSDKUser;
@property (nonatomic) BOOL isNewStoreUser;
@property (copy, nonatomic) NSDictionary *imsdkConfig;
@property (nonatomic) BOOL mergeInsertMessageAndConv;
@property (copy, nonatomic) NSArray *notDownsamplingEvent;
@property (nonatomic) BOOL letLongConnectionGoWhenInit;
@property (nonatomic) BOOL canPullUserMessageWhenNotInited;
@property (nonatomic) long long loadOpenConvsInterval;
@property (nonatomic) int ecomServiceInbox;
@property (nonatomic) BOOL enableMessageACK;
@property (nonatomic) BOOL enableMetrics;
@property (nonatomic) long long pullInitListFirstLoadPage;
@property (nonatomic) long long pullInitListMaxPage;
@property (nonatomic) BOOL canPullRecentConversation;
@property (retain, nonatomic) id<BDECIMCacheProtocol> cacheIMP;

- (void)setAppKey:(id)arg0;
- (void)setInstallId:(long long)arg0;
- (id)appKey;
- (long long)installId;
- (long long)bizSDKType;
- (id)fpID;
- (void)setFpID:(id)arg0;
- (void)setInboxes:(id)arg0;
- (id)shortLinkServerURL;
- (BOOL)enableReportUnreadCountByInbox;
- (void)setEnableReportUnreadCountByInbox:(BOOL)arg0;
- (BOOL)parentChildSession;
- (BOOL)isNewStoreUser;
- (id)pullReadStateInboxToBizRoleMapper;
- (void)setPullReadStateInboxToBizRoleMapper:(id)arg0;
- (id)websocketIMP;
- (BOOL)isImChainUser;
- (BOOL)mixChainFlagKeyIsolation;
- (void)setMixChainFlagKeyIsolation:(BOOL)arg0;
- (BOOL)enableLoadMsgOnConvUpdate;
- (void)setEnableLoadMsgOnConvUpdate:(BOOL)arg0;
- (unsigned long long)getByConversationMaxRecursiveCount;
- (void)setGetByConversationMaxRecursiveCount:(unsigned long long)arg0;
- (id)imsdkConfig;
- (void)setImsdkConfig:(id)arg0;
- (BOOL)mergeInsertMessageAndConv;
- (void)setMergeInsertMessageAndConv:(BOOL)arg0;
- (id)notDownsamplingEvent;
- (void)setNotDownsamplingEvent:(id)arg0;
- (BOOL)canPullUserMessageWhenNotInited;
- (void)setCanPullUserMessageWhenNotInited:(BOOL)arg0;
- (BOOL)letLongConnectionGoWhenInit;
- (void)setLetLongConnectionGoWhenInit:(BOOL)arg0;
- (long long)loadOpenConvsInterval;
- (void)setLoadOpenConvsInterval:(long long)arg0;
- (int)ecomServiceInbox;
- (void)setEcomServiceInbox:(int)arg0;
- (BOOL)enableMessageACK;
- (void)setEnableMessageACK:(BOOL)arg0;
- (BOOL)enableMetrics;
- (void)setEnableMetrics:(BOOL)arg0;
- (long long)pullInitListFirstLoadPage;
- (void)setPullInitListFirstLoadPage:(long long)arg0;
- (long long)pullInitListMaxPage;
- (void)setPullInitListMaxPage:(long long)arg0;
- (BOOL)canPullRecentConversation;
- (void)setCanPullRecentConversation:(BOOL)arg0;
- (id /* block */)requestCommonParamsBlock;
- (id /* block */)additionalRequestCommonParamsBlock;
- (BOOL)isTIMXSDKUser;
- (id)customBizID;
- (id)backCacheIMP;
- (id)cacheIMP;
- (void)setShortLinkServerURL:(id)arg0;
- (void)setWsServerURLs:(id)arg0;
- (void)setCustomParamsBlock:(id /* block */)arg0;
- (void)setCustomHeadersBlock:(id /* block */)arg0;
- (void)setRequestCommonParamsBlock:(id /* block */)arg0;
- (void)setAdditionalRequestCommonParamsBlock:(id /* block */)arg0;
- (void)setBizCustomMethods:(id)arg0;
- (BOOL)includeEmptyConversation;
- (void)setIncludeEmptyConversation:(BOOL)arg0;
- (BOOL)manuallyEnableWebscoket;
- (void)setManuallyEnableWebscoket:(BOOL)arg0;
- (void)setTypeDataArr:(id)arg0;
- (void)setParentChildSession:(BOOL)arg0;
- (void)setBizSDKType:(long long)arg0;
- (void)setCustomBizID:(id)arg0;
- (void)setWebsocketUseDY:(BOOL)arg0;
- (id)filterMsgTypeSet;
- (void)setFilterMsgTypeSet:(id)arg0;
- (void)setWebsocketIMP:(id)arg0;
- (void)setPigeonTrackPrefix:(id)arg0;
- (void)setIsImChainUser:(BOOL)arg0;
- (void)setIsTIMXSDKUser:(BOOL)arg0;
- (void)setIsNewStoreUser:(BOOL)arg0;
- (void)setCacheIMP:(id)arg0;
- (void)setBackCacheIMP:(id)arg0;
- (id)typeDataArr;
- (id)pigeonTrackPrefix;
- (id)wsServerURLs;
- (id /* block */)customParamsBlock;
- (id /* block */)customHeadersBlock;
- (BOOL)websocketUseDY;
- (id)bizCustomMethods;
- (void)setAppID:(id)arg0;
- (void)setAppVersion:(int)arg0;
- (void).cxx_destruct;
- (id)deviceId;
- (void)setService:(long long)arg0;
- (long long)method;
- (long long)authType;
- (void)setMethod:(long long)arg0;
- (int)appVersion;
- (id)appID;
- (id)businessID;
- (void)setDeviceId:(id)arg0;
- (void)setAuthType:(long long)arg0;
- (long long)service;
- (void)setBusinessID:(id)arg0;
- (id)inboxes;
- (id)customHeaders;
- (void)setCustomHeaders:(id)arg0;

@end
