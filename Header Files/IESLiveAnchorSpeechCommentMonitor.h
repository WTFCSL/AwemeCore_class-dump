//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveAnchorSpeechCommentMonitor : NSObject {
    long long _userActionCount;
    long long _keywordCount;
    long long _asrStartCount;
    long long _asrCompleteCount;
    long long _asrNoResultTimeoutCount;
    long long _asrFinalTimeoutCount;
    long long _asrInterruptCount;
    long long _keywordDiscardCount;
    long long _asrNetworkErrorCount;
    long long _asrServiceErrorCount;
    long long _matchSuccessCount;
    long long _matchFailedCount;
    id<IESLiveRoomService> _room;
    NSString *_keyword;
    double _traceback;
    NSString *_reqId;
    double _asrStartTimeStamp;
    double _asrFirstResultTimeStamp;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) double traceback;
@property (copy, nonatomic) NSString *reqId;
@property (nonatomic) double asrStartTimeStamp;
@property (nonatomic) double asrFirstResultTimeStamp;
@property (nonatomic) long long userActionCount;
@property (nonatomic) long long keywordCount;
@property (nonatomic) long long asrStartCount;
@property (nonatomic) long long asrCompleteCount;
@property (nonatomic) long long asrNoResultTimeoutCount;
@property (nonatomic) long long asrFinalTimeoutCount;
@property (nonatomic) long long asrInterruptCount;
@property (nonatomic) long long keywordDiscardCount;
@property (nonatomic) long long asrNetworkErrorCount;
@property (nonatomic) long long asrServiceErrorCount;
@property (nonatomic) long long matchSuccessCount;
@property (nonatomic) long long matchFailedCount;

- (id)reqId;
- (void)setReqId:(id)arg0;
- (void)trackSpeechEngineInitWithAsr:(BOOL)arg0 ret:(long long)arg1 duration:(double)arg2;
- (void)trackSpeechEngineStartWithAsr:(BOOL)arg0 ret:(long long)arg1;
- (long long)asrNetworkErrorCount;
- (void)setAsrNetworkErrorCount:(long long)arg0;
- (long long)asrServiceErrorCount;
- (void)setAsrServiceErrorCount:(long long)arg0;
- (void)trackSpeechEngineErrorWithAsr:(BOOL)arg0 ret:(long long)arg1 reqId:(id)arg2 errMsg:(id)arg3;
- (id)anchorSpeechCommentDataParams;
- (void)trackKwsModelDownloadErrorWithRet:(long long)arg0;
- (long long)userActionCount;
- (void)setUserActionCount:(long long)arg0;
- (long long)asrFinalTimeoutCount;
- (void)setAsrFinalTimeoutCount:(long long)arg0;
- (long long)asrNoResultTimeoutCount;
- (void)setAsrNoResultTimeoutCount:(long long)arg0;
- (long long)matchFailedCount;
- (void)setMatchFailedCount:(long long)arg0;
- (long long)matchSuccessCount;
- (void)setMatchSuccessCount:(long long)arg0;
- (void)trackAsrStopWithResult:(id)arg0;
- (void)trackAsrInterruptionWithReqId:(id)arg0 result:(id)arg1;
- (void)setKeywordCount:(long long)arg0;
- (long long)asrInterruptCount;
- (void)setAsrInterruptCount:(long long)arg0;
- (long long)keywordDiscardCount;
- (void)setKeywordDiscardCount:(long long)arg0;
- (void)recordKwsWakeUpWithKeyword:(id)arg0 traceback:(double)arg1;
- (void)recordAsrReturnFirstResult;
- (long long)asrCompleteCount;
- (void)setAsrCompleteCount:(long long)arg0;
- (long long)asrStartCount;
- (void)setAsrStartCount:(long long)arg0;
- (void)recordAsrStartWithReqId:(id)arg0;
- (id)commonExtraParamsWithAsr:(BOOL)arg0;
- (id)engineNameWithAsr:(BOOL)arg0;
- (void)setTraceback:(double)arg0;
- (void)setAsrStartTimeStamp:(double)arg0;
- (void)setAsrFirstResultTimeStamp:(double)arg0;
- (double)asrStartTimeStamp;
- (double)traceback;
- (double)asrFirstResultTimeStamp;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (id)initWithRoom:(id)arg0;
- (long long)keywordCount;

@end
