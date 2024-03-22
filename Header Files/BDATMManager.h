//
//     Generated by private class-dump
//

@protocol BDATMStaticValueProtocol;

@interface BDATMManager : NSObject {
    BOOL _isAlogEnabled;
    BOOL _isUploadLogEnabled;
    BOOL _isAPPLogHookEnabled;
    id /* block */ _networkRequestHandler;
    id /* block */ _adTrackHandler;
    id /* block */ _trackHandler;
    id /* block */ _aLogHandler;
    id /* block */ _uploadLogHandler;
    id<BDATMStaticValueProtocol> _staticValueImpl;
    long long _uploadDuration;
}

@property (copy, nonatomic) id /* block */ networkRequestHandler;
@property (copy, nonatomic) id /* block */ trackHandler;
@property (copy, nonatomic) id /* block */ adTrackHandler;
@property (copy, nonatomic) id /* block */ aLogHandler;
@property (copy, nonatomic) id /* block */ uploadLogHandler;
@property (nonatomic) BOOL isAlogEnabled;
@property (nonatomic) BOOL isUploadLogEnabled;
@property (nonatomic) long long uploadDuration;
@property (nonatomic) BOOL isAPPLogHookEnabled;
@property (retain, nonatomic) id<BDATMStaticValueProtocol> staticValueImpl;

+ (id)ruleHitted:(id)arg0 withParams:(id)arg1;
+ (id)hitSamplingWithRuleContent:(id)arg0;
+ (id)hitSamplingWithRuleContent:(id)arg0 eventName:(id)arg1;
+ (id)assembleParams:(id)arg0 eventName:(id)arg1 rule:(id)arg2;
+ (id)shared;

- (void)setupWithConfig:(id)arg0;
- (void)sendAdEventWithLabel:(id)arg0 refer:(id)arg1 tag:(id)arg2 rawRules:(id)arg3;
- (void)setIsUploadLogEnabled:(BOOL)arg0;
- (void)setIsAlogEnabled:(BOOL)arg0;
- (void)setIsAPPLogHookEnabled:(BOOL)arg0;
- (void)registerGeckoAccesskey:(id)arg0;
- (void)requestAutoRulesWithParams:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isAPPLogHookEnabled;
- (void)sendEventForCopyWithOriginParams:(id)arg0 dynamicParams:(id)arg1 contentParams:(id)arg2;
- (id /* block */)uploadLogHandler;
- (BOOL)isUploadLogEnabled;
- (id)parseRawRules:(id)arg0 error:(id *)arg1;
- (id)cidWithRawValue:(id)arg0;
- (id /* block */)adTrackHandler;
- (id /* block */)trackHandler;
- (id)eventNameOfExtraParams:(id)arg0;
- (id)tagOfExtraParams:(id)arg0;
- (id)eventNameOfV3:(id)arg0;
- (void)setNetworkRequestHandler:(id /* block */)arg0;
- (void)setTrackHandler:(id /* block */)arg0;
- (void)setAdTrackHandler:(id /* block */)arg0;
- (void)setALogHandler:(id /* block */)arg0;
- (void)setUploadLogHandler:(id /* block */)arg0;
- (void)sendUserEvent:(id)arg0 rawRules:(id)arg1;
- (void)sendEventWithCommonParams:(id)arg0 extraParams:(id)arg1 dynamicParams:(id)arg2 completion:(id /* block */)arg3;
- (void)sendEventV3WithCommonParams:(id)arg0 extraParams:(id)arg1 dynamicParams:(id)arg2 completion:(id /* block */)arg3;
- (void)registerNetworkRequestHandler:(id /* block */)arg0;
- (void)registerTrackHandler:(id /* block */)arg0;
- (void)registerAdTrackHandler:(id /* block */)arg0;
- (void)registerAlogHandler:(id /* block */)arg0;
- (void)registerLogUploadHandler:(id /* block */)arg0;
- (id /* block */)networkRequestHandler;
- (id /* block */)aLogHandler;
- (id)staticValueImpl;
- (void)setStaticValueImpl:(id)arg0;
- (BOOL)isAlogEnabled;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isValidValue:(id)arg0;
- (long long)uploadDuration;
- (void)setUploadDuration:(long long)arg0;

@end