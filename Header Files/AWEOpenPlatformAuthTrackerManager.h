//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableArray, AWEOpenPlatformAuthFlowManager;

@interface AWEOpenPlatformAuthTrackerManager : NSObject {
    BOOL _isNewEntrance;
    BOOL _skipAll;
    BOOL _hasEnterBack;
    BOOL _trackOpenAuthShowDurationOnce;
    BOOL _trackAuthNotesShowOncs;
    NSString *_authID;
    NSDictionary *_trackInfo;
    NSString *_clientKey;
    NSString *_launchMethod;
    double _authStartTimeStamp;
    double _authInAppStartTimeStamp;
    NSString *_sdkVersion;
    NSString *_authSource;
    double _authPageShowTimeStamp;
    NSMutableArray *_authInfoShowArray;
    NSMutableArray *_authInfoSelectArray;
    unsigned long long _scopeType;
    unsigned long long _pageType;
    AWEOpenPlatformAuthFlowManager *_flowManager;
    long long _showOrder;
}

@property (weak, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (nonatomic) BOOL trackOpenAuthShowDurationOnce;
@property (nonatomic) long long showOrder;
@property (nonatomic) BOOL trackAuthNotesShowOncs;
@property (retain, nonatomic) NSString *authID;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *launchMethod;
@property (nonatomic) double authStartTimeStamp;
@property (nonatomic) double authInAppStartTimeStamp;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *authSource;
@property (nonatomic) BOOL isNewEntrance;
@property (nonatomic) double authPageShowTimeStamp;
@property (retain, nonatomic) NSMutableArray *authInfoShowArray;
@property (retain, nonatomic) NSMutableArray *authInfoSelectArray;
@property (nonatomic) unsigned long long scopeType;
@property (nonatomic) unsigned long long pageType;
@property (nonatomic) BOOL skipAll;
@property (nonatomic) BOOL hasEnterBack;

+ (id)shareManager;
+ (void)trackNetworkResultWithRspDict:(id)arg0 error:(id)arg1 costMS:(double)arg2 extraDict:(id)arg3;

- (id)enterMethod;
- (id)commonParams;
- (void)setShowOrder:(long long)arg0;
- (long long)showOrder;
- (void)cleanAllCache;
- (void)trackerEditClick:(id)arg0;
- (void)setAuthInfoShowArray:(id)arg0;
- (void)trackAuthResultWithErrorCode:(long long)arg0 withErrorMsg:(id)arg1;
- (id)authInfoSelectArray;
- (void)setSkipAll:(BOOL)arg0;
- (void)trackAuthRiskPushShow;
- (void)trackAuthRiskPushClick:(id)arg0;
- (void)trackAuthRiskTrigger;
- (void)trackAuthNotesShow:(unsigned long long)arg0;
- (void)trackAuthButtomModelShowWithModelType:(id)arg0 authInfoShow:(id)arg1 authInfoSelect:(id)arg2 scopeType:(unsigned long long)arg3;
- (BOOL)hasEnterBack;
- (void)trackClickOrEnterBackAtPosition:(id)arg0 hasEnterBack:(BOOL)arg1;
- (void)trackAuthButtomModelClickWithModelType:(id)arg0 clickType:(id)arg1 authInfoShow:(id)arg2 authInfoSelect:(id)arg3 scopeType:(unsigned long long)arg4;
- (void)trackShowQuestionMark:(unsigned long long)arg0 scopeType:(unsigned long long)arg1 authItem:(id)arg2;
- (void)updateAuthPageShowTimeStampFromNow;
- (void)trackAuthNotify:(unsigned long long)arg0 authInfoShow:(id)arg1 authInfoSelect:(id)arg2 scopeType:(unsigned long long)arg3;
- (void)trackAuthSubmit:(unsigned long long)arg0 authInfoShow:(id)arg1 authInfoSelect:(id)arg2 scopeType:(unsigned long long)arg3;
- (void)trackAuthRefuse:(unsigned long long)arg0 refuseType:(id)arg1 authInfoShow:(id)arg2 authInfoSelect:(id)arg3 scopeType:(unsigned long long)arg4;
- (void)setHasEnterBack:(BOOL)arg0;
- (void)trackClickQuestionMark:(unsigned long long)arg0 scopeType:(unsigned long long)arg1 authItem:(id)arg2;
- (void)initWithClientKey:(id)arg0 launchMethod:(id)arg1 authStartStamp:(id)arg2 pageType:(unsigned long long)arg3;
- (void)trackAwemeAuthTrigger;
- (void)cleanAuthInfoCache;
- (void)updateAuthInAppStartTimeStampFromNow;
- (void)setLaunchMethod:(id)arg0;
- (void)updateAuthStartTimeStampFromNow;
- (void)cleanBaseCache;
- (void)setAuthInAppStartTimeStamp:(double)arg0;
- (void)setAuthPageShowTimeStamp:(double)arg0;
- (id)getAuthSource;
- (double)getOpenSDKLaunchDuration;
- (BOOL)isNewEntrance;
- (BOOL)trackOpenAuthShowDurationOnce;
- (void)setTrackOpenAuthShowDurationOnce:(BOOL)arg0;
- (double)getOpenSDKAuthDuration;
- (double)getOpenSDKAuthInAppDuration;
- (id)authInfoShowArray;
- (BOOL)skipAll;
- (BOOL)trackAuthNotesShowOncs;
- (void)setTrackAuthNotesShowOncs:(BOOL)arg0;
- (double)authPageShowTimeStamp;
- (void)setAuthSource:(id)arg0;
- (void)setIsNewEntrance:(BOOL)arg0;
- (void)setAuthInfoSelectArray:(id)arg0;
- (double)authInAppStartTimeStamp;
- (id)authSource;
- (void)trackAwemeAuthLynxLoadError:(id)arg0 withLynxAuthID:(id)arg1;
- (void)trackCommentHyperLinkAtHalf:(BOOL)arg0 isShow:(BOOL)arg1;
- (void)trackInfoIconWithEvent:(id)arg0;
- (id)clientKey;
- (unsigned long long)pageType;
- (void).cxx_destruct;
- (unsigned long long)scopeType;
- (void)setClientKey:(id)arg0;
- (void)setPageType:(unsigned long long)arg0;
- (id)sdkVersion;
- (void)setScopeType:(unsigned long long)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (double)authStartTimeStamp;
- (void)setAuthStartTimeStamp:(double)arg0;
- (void)setSdkVersion:(id)arg0;
- (id)authID;
- (void)setAuthID:(id)arg0;
- (id)launchMethod;
- (id)flowManager;
- (void)setFlowManager:(id)arg0;
- (void)initWithFlowManager:(id)arg0;

@end
