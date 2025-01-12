//
//     Generated by private class-dump
//

@class NSLock, NSMutableArray, NSMutableDictionary;

@interface BUApplogRaptorTracker : BURaptorTracker {
    long long _willSaveCount;
    long long _saveSuccessCount;
    long long _saveFailCount;
    long long _didSaveCount;
    long long _willSendCount;
    long long _didSendCount;
    long long _sendSuccessValidCount;
    long long _sendSuccessInvalidCount;
    long long _sendFailCount;
    long long _haveSendResultCount;
    long long _requestCount;
    long long _requestSuccessCount;
    long long _requestFailCount;
    long long _sdkSendSuccessCount;
    NSMutableArray *_willSaveArray;
    NSMutableArray *_saveSuccessArray;
    NSMutableArray *_willSendArray;
    NSMutableArray *_sendSuccessValidArray;
    NSLock *_extraInfoLock;
    NSMutableDictionary *_labelCountDict;
}

@property (nonatomic) long long willSaveCount;
@property (nonatomic) long long saveSuccessCount;
@property (nonatomic) long long saveFailCount;
@property (nonatomic) long long didSaveCount;
@property (nonatomic) long long willSendCount;
@property (nonatomic) long long didSendCount;
@property (nonatomic) long long sendSuccessValidCount;
@property (nonatomic) long long sendSuccessInvalidCount;
@property (nonatomic) long long sendFailCount;
@property (nonatomic) long long haveSendResultCount;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long requestSuccessCount;
@property (nonatomic) long long requestFailCount;
@property (nonatomic) long long sdkSendSuccessCount;
@property (retain, nonatomic) NSMutableArray *willSaveArray;
@property (retain, nonatomic) NSMutableArray *saveSuccessArray;
@property (retain, nonatomic) NSMutableArray *willSendArray;
@property (retain, nonatomic) NSMutableArray *sendSuccessValidArray;
@property (retain, nonatomic) NSLock *extraInfoLock;
@property (retain, nonatomic) NSMutableDictionary *labelCountDict;

+ (id)sharedInstance;

- (void)_pbu_setMutDict:(id)arg0 key:(id)arg1 modelArray:(id)arg2 needReqid:(BOOL)arg3;
- (id)labelCountDict;
- (id)willSaveArray;
- (id)saveSuccessArray;
- (id)willSendArray;
- (id)sendSuccessValidArray;
- (long long)willSaveCount;
- (long long)saveSuccessCount;
- (long long)saveFailCount;
- (long long)didSaveCount;
- (long long)willSendCount;
- (long long)didSendCount;
- (long long)sendSuccessValidCount;
- (long long)sendSuccessInvalidCount;
- (long long)sendFailCount;
- (long long)haveSendResultCount;
- (long long)requestSuccessCount;
- (long long)requestFailCount;
- (long long)sdkSendSuccessCount;
- (void)_pbu_reset;
- (void)_pbu_report_stats_monitorIfNeed;
- (void)_pbu_insertExtraInfo_eventWillSaveWithModel:(id)arg0;
- (void)setWillSaveCount:(long long)arg0;
- (void)_pbu_insertIntoArray:(id)arg0 modelArray:(id)arg1 needReqid:(BOOL)arg2 logid:(id)arg3;
- (void)setSaveFailCount:(long long)arg0;
- (void)setSaveSuccessCount:(long long)arg0;
- (void)setDidSaveCount:(long long)arg0;
- (void)setWillSendCount:(long long)arg0;
- (void)setSendSuccessValidCount:(long long)arg0;
- (void)setSendSuccessInvalidCount:(long long)arg0;
- (void)setRequestSuccessCount:(long long)arg0;
- (void)setSdkSendSuccessCount:(long long)arg0;
- (void)setSendFailCount:(long long)arg0;
- (void)setRequestFailCount:(long long)arg0;
- (void)setHaveSendResultCount:(long long)arg0;
- (void)setDidSendCount:(long long)arg0;
- (id)extraInfoLock;
- (BOOL)checkDeviceIdChanged;
- (BOOL)checkForceLanguageChanged;
- (id)_v1DictWithOriginV1Dict:(id)arg0 isDoubleSend:(BOOL)arg1;
- (id)_v3DictWithOriginV1Dict:(id)arg0 isDoubleSend:(BOOL)arg1;
- (void)setWillSaveArray:(id)arg0;
- (void)setSaveSuccessArray:(id)arg0;
- (void)setWillSendArray:(id)arg0;
- (void)setSendSuccessValidArray:(id)arg0;
- (void)setLabelCountDict:(id)arg0;
- (void)setExtraInfoLock:(id)arg0;
- (void)_pbu_setMutDict:(id)arg0 key:(id)arg1 modelArray:(id)arg2;
- (void)eventWillSaveWithModel:(id)arg0;
- (void)eventDidSaveSuccessWithModel:(id)arg0;
- (void)eventDidSaveFailedWithModel:(id)arg0 error:(id)arg1;
- (void)eventDidSaveWithModel:(id)arg0;
- (void)eventDidSendSuccessWithModelArray:(id)arg0 valid:(BOOL)arg1 logid:(id)arg2;
- (void)eventDidSendFailedWithModelArray:(id)arg0 error:(id)arg1;
- (void)eventHaveSendResultWithModelArray:(id)arg0;
- (id)extraInfoBeforeSendWithIsStationClick:(BOOL)arg0;
- (void)eventWillSendWithModelArray:(id)arg0;
- (void)eventDidSendWithModelArray:(id)arg0;
- (void)_pbu_inUnknown_sendWithPostDict:(id)arg0 completionHandler:(id /* block */)arg1;
- (long long)raptorTrackerType;
- (Class)raptorModelClass;
- (id)willCleanNotificationName;
- (id)didCleanNotificationName;
- (id)sentNotificationName;
- (id)eventKey;
- (id)init;
- (void).cxx_destruct;
- (long long)requestCount;
- (void)setRequestCount:(long long)arg0;

@end
