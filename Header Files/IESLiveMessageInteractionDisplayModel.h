//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESLiveMessageInteractionDisplayModel : NSObject {
    long long _PV;
    double _levelTotal;
    double _arriveDelayTimeTotal;
    double _showDelayTimeTotal;
    long long _PVMale;
    long long _PVFemale;
    double _commentPVPotential;
    double _commentLengthTotal;
    double _commentScoreTotal;
    long long _enterPVFollow;
    long long _enterPVCity;
    long long _anchorOptRollCount;
    long long _bothPriorityEffectCount;
    long long _highPriorityEffectCount;
    long long _lowPriorityEffectCount;
    long long _floatMsgCount;
    NSString *_roomHotLevel;
    long long _highPriorityActionNumber;
    long long _mediumPriorityActionNumber;
    long long _lowPriorityActionNumber;
    long long _baseActionNumber;
    long long _commentActionNumber;
    long long _sendGiftActionNumber;
    long long _orderActionNumber;
    long long _otherActionNumber;
    double _giftRewardNumTotal;
    double _giftRewardMoneyTotal;
    NSMutableDictionary *_commonTagPVData;
}

@property (nonatomic) long long PV;
@property (nonatomic) double levelTotal;
@property (nonatomic) double arriveDelayTimeTotal;
@property (nonatomic) double showDelayTimeTotal;
@property (nonatomic) long long PVMale;
@property (nonatomic) long long PVFemale;
@property (nonatomic) double commentPVPotential;
@property (nonatomic) double commentLengthTotal;
@property (nonatomic) double commentScoreTotal;
@property (nonatomic) long long enterPVFollow;
@property (nonatomic) long long enterPVCity;
@property (nonatomic) long long anchorOptRollCount;
@property (nonatomic) long long bothPriorityEffectCount;
@property (nonatomic) long long highPriorityEffectCount;
@property (nonatomic) long long lowPriorityEffectCount;
@property (nonatomic) long long floatMsgCount;
@property (retain, nonatomic) NSString *roomHotLevel;
@property (nonatomic) long long highPriorityActionNumber;
@property (nonatomic) long long mediumPriorityActionNumber;
@property (nonatomic) long long lowPriorityActionNumber;
@property (nonatomic) long long baseActionNumber;
@property (nonatomic) long long commentActionNumber;
@property (nonatomic) long long sendGiftActionNumber;
@property (nonatomic) long long orderActionNumber;
@property (nonatomic) long long otherActionNumber;
@property (nonatomic) double giftRewardNumTotal;
@property (nonatomic) double giftRewardMoneyTotal;
@property (retain, nonatomic) NSMutableDictionary *commonTagPVData;

- (id)commonTrackData;
- (long long)PV;
- (double)levelTotal;
- (double)arriveDelayTimeTotal;
- (double)showDelayTimeTotal;
- (double)commentLengthTotal;
- (double)commentScoreTotal;
- (double)giftRewardNumTotal;
- (double)giftRewardMoneyTotal;
- (void)setPV:(long long)arg0;
- (void)setLevelTotal:(double)arg0;
- (void)setArriveDelayTimeTotal:(double)arg0;
- (void)setShowDelayTimeTotal:(double)arg0;
- (void)setPVMale:(long long)arg0;
- (void)setPVFemale:(long long)arg0;
- (void)setCommentLengthTotal:(double)arg0;
- (void)setCommentScoreTotal:(double)arg0;
- (void)setCommentPVPotential:(double)arg0;
- (id)commonTagPVData;
- (void)setEnterPVFollow:(long long)arg0;
- (void)setEnterPVCity:(long long)arg0;
- (void)setGiftRewardNumTotal:(double)arg0;
- (void)setGiftRewardMoneyTotal:(double)arg0;
- (void)setAnchorOptRollCount:(long long)arg0;
- (void)setLowPriorityEffectCount:(long long)arg0;
- (void)setHighPriorityEffectCount:(long long)arg0;
- (void)setBothPriorityEffectCount:(long long)arg0;
- (void)setHighPriorityActionNumber:(long long)arg0;
- (void)setMediumPriorityActionNumber:(long long)arg0;
- (void)setLowPriorityActionNumber:(long long)arg0;
- (void)setBaseActionNumber:(long long)arg0;
- (void)setCommentActionNumber:(long long)arg0;
- (void)setSendGiftActionNumber:(long long)arg0;
- (void)setOrderActionNumber:(long long)arg0;
- (void)setOtherActionNumber:(long long)arg0;
- (id)levelAvg;
- (id)arriveDelayTimeAvg;
- (id)showDelayTimeAvg;
- (long long)PVMale;
- (long long)PVFemale;
- (double)commentPVPotential;
- (id)commentLengthAvg;
- (id)commentScoreAvg;
- (long long)enterPVFollow;
- (long long)enterPVCity;
- (id)giftRewardNumAvg;
- (id)giftRewardMoneyAvg;
- (long long)bothPriorityEffectCount;
- (long long)highPriorityEffectCount;
- (long long)lowPriorityEffectCount;
- (long long)floatMsgCount;
- (id)roomHotLevel;
- (long long)highPriorityActionNumber;
- (long long)mediumPriorityActionNumber;
- (long long)lowPriorityActionNumber;
- (long long)baseActionNumber;
- (long long)commentActionNumber;
- (long long)sendGiftActionNumber;
- (long long)orderActionNumber;
- (long long)otherActionNumber;
- (id)commentTrackData;
- (id)enterTrackData;
- (id)followTrackData;
- (id)likeTrackData;
- (id)shareTrackData;
- (id)giftTrackData;
- (id)ecomTrackData;
- (id)highEnterTrackData;
- (id)individualStrategyData;
- (id)envalueInfoStrategyData;
- (long long)anchorOptRollCount;
- (void)setFloatMsgCount:(long long)arg0;
- (void)setRoomHotLevel:(id)arg0;
- (void)setCommonTagPVData:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)resetData;

@end
