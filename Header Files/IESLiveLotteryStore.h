//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveLotteryConfig, LotteryInfo, IESLiveCountTimer, NSDictionary, IESLiveGCDTimer, NSMutableArray, IESLiveLotteryApi, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveLotteryReaction;

@interface IESLiveLotteryStore : NSObject <HTSLiveMessageSubscriber, IESLiveLotteryActions, IESLiveDataSyncDelegate> {
    BOOL _hasReviewingLottery;
    int _tempStateType;
    id<IESLiveLotteryReaction> _reaction;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_trackContext;
    id<IESLiveRoomService> _roomModel;
    LotteryInfo *_currentLottery;
    IESLiveLotteryConfig *_currentConfig;
    NSDictionary *_lotteryConfig;
    unsigned long long _triggerTemporaryType;
    long long _followerCountChange;
    long long _luckyCount;
    long long _candidateTotalCount;
    long long _tempStateDurationTime;
    IESLiveLotteryApi *_lotteryApi;
    NSDictionary *_lotteryConfigsNew;
    IESLiveGCDTimer *_countTimer;
    long long _enterBackgroundLotteryID;
    double _enterBackgroundCurrentTime;
    double _enterBackgroundRemainTime;
    NSMutableArray *_proccessedLotterys;
    NSMutableArray *_participatedLotterys;
    long long _followerCount;
    IESLiveCountTimer *_requestFollowInfoTimer;
    long long _requestTime;
    NSDictionary *_lotteryVersionDic;
}

@property (retain, nonatomic) IESLiveLotteryApi *lotteryApi;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) LotteryInfo *currentLottery;
@property (retain, nonatomic) IESLiveLotteryConfig *currentConfig;
@property (nonatomic) BOOL hasReviewingLottery;
@property (retain, nonatomic) NSDictionary *lotteryConfig;
@property (retain, nonatomic) NSDictionary *lotteryConfigsNew;
@property (retain, nonatomic) IESLiveGCDTimer *countTimer;
@property (nonatomic) long long enterBackgroundLotteryID;
@property (nonatomic) double enterBackgroundCurrentTime;
@property (nonatomic) double enterBackgroundRemainTime;
@property (retain, nonatomic) NSMutableArray *proccessedLotterys;
@property (retain, nonatomic) NSMutableArray *participatedLotterys;
@property (nonatomic) long long followerCount;
@property (retain, nonatomic) IESLiveCountTimer *requestFollowInfoTimer;
@property (nonatomic) long long requestTime;
@property (retain, nonatomic) NSDictionary *lotteryVersionDic;
@property (weak, nonatomic) id<IESLiveLotteryReaction> reaction;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) unsigned long long triggerTemporaryType;
@property (nonatomic) int tempStateType;
@property (nonatomic) long long followerCountChange;
@property (nonatomic) long long luckyCount;
@property (nonatomic) long long candidateTotalCount;
@property (nonatomic) long long tempStateDurationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (id)roomModel;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setFollowerCount:(long long)arg0;
- (long long)followerCount;
- (void)setCountTimer:(id)arg0;
- (id)countTimer;
- (void)setRoomModel:(id)arg0;
- (id)initWithRoomModel:(id)arg0;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (void)p_cancelTimer;
- (void)loadEnterRoomLottery;
- (void)receivedAnchorSubmitCompleted;
- (long long)getCurrentLotteryRemainTime;
- (long long)luckyCount;
- (long long)candidateTotalCount;
- (id)lotteryConfig;
- (void)subscribeBackEndData;
- (void)setTriggerTemporaryType:(unsigned long long)arg0;
- (void)setFollowerCountChange:(long long)arg0;
- (void)startRequestFollowInfo;
- (long long)followerCountChange;
- (void)stopRequestFollowInfo;
- (unsigned long long)triggerTemporaryType;
- (int)tempStateType;
- (void)setTempStateType:(int)arg0;
- (void)setLuckyCount:(long long)arg0;
- (long long)currentLotteryType;
- (id)currentLottery;
- (id)isModelFromMessage;
- (id)getLotteryInfoDictionary;
- (void)setTempStateDurationTime:(long long)arg0;
- (void)clearCurrentLotteryAfterDismiss;
- (void)monitorLotteryResultPannelShowWithParams:(id)arg0;
- (BOOL)hasReviewingLottery;
- (void)p_fetchReviewingLottery;
- (id)getLotteryConfig;
- (id)getLotteryConfigsNew;
- (id)lotteryApi;
- (id)requestFollowInfoTimer;
- (void)setRequestFollowInfoTimer:(id)arg0;
- (void)p_handleLotteryInfoSyncData:(id)arg0;
- (void)monitorLotteryMessageReceivedWithMessage:(id)arg0;
- (void)p_receiveLotteryModel:(id)arg0;
- (void)setLotteryVersionDic:(id)arg0;
- (id)participatedLotterys;
- (id)proccessedLotterys;
- (void)p_fetchCandidateStateWithCompletion:(id /* block */)arg0 retryCount:(long long)arg1;
- (void)p_fetchLotteryInfo;
- (void)setHasReviewingLottery:(BOOL)arg0;
- (void)setEnterBackgroundRemainTime:(double)arg0;
- (void)setEnterBackgroundCurrentTime:(double)arg0;
- (void)setEnterBackgroundLotteryID:(long long)arg0;
- (double)enterBackgroundRemainTime;
- (double)enterBackgroundCurrentTime;
- (long long)enterBackgroundLotteryID;
- (id)p_getLotteryMonitorExtraDictionaryWithLottery:(id)arg0;
- (void)setCurrentLottery:(id)arg0;
- (void)monitorLotteryInfoApiWithResource:(id)arg0 startTime:(double)arg1 response:(id)arg2 error:(id)arg3;
- (void)setCandidateTotalCount:(long long)arg0;
- (long long)tempStateDurationTime;
- (id)lotteryConfigsNew;
- (id)lotteryVersionDic;
- (void)p_handleLotteryCountDownIfNeeded:(id)arg0;
- (void)p_countDownLottery:(id)arg0;
- (void)monitorLotteryResultApiWithStartTime:(double)arg0 response:(id)arg1 error:(id)arg2 needRetry:(BOOL)arg3;
- (BOOL)p_enableMonitor;
- (void)p_monitorWithEvent:(id)arg0 success:(BOOL)arg1 extra:(id)arg2;
- (id)p_getLotteryApiCallExtraDictionaryWithPath:(id)arg0 duration:(id)arg1 error:(id)arg2;
- (id)p_getIntArrayStringWithArray:(id)arg0;
- (void)monitorLotteryConfigApiWithStartTime:(double)arg0 response:(id)arg1 error:(id)arg2;
- (void)setLotteryConfig:(id)arg0;
- (void)setLotteryApi:(id)arg0;
- (void)setLotteryConfigsNew:(id)arg0;
- (void)setProccessedLotterys:(id)arg0;
- (void)setParticipatedLotterys:(id)arg0;
- (void)setRequestTime:(long long)arg0;
- (long long)requestTime;
- (void)appDidEnterBackground:(id)arg0;
- (void).cxx_destruct;
- (void)setup;
- (void)appWillEnterForeground:(id)arg0;
- (id)currentConfig;
- (void)setCurrentConfig:(id)arg0;
- (void)dealloc;
- (void)messageReceived:(id)arg0;
- (id)reaction;
- (void)setReaction:(id)arg0;

@end
