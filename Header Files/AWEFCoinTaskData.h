//
//     Generated by private class-dump
//

@class NSString, AWEFCoinRewardMessage, AWEFCoinTaskDataBubble;

@interface AWEFCoinTaskData : MTLModel <MTLJSONSerializing> {
    BOOL _hasNext;
    BOOL _pendantUpdate;
    long long _nextCycleTime;
    NSString *_nextToken;
    long long _coinAmount;
    NSString *_rewardText;
    AWEFCoinRewardMessage *_rewardMessage;
    AWEFCoinTaskDataBubble *_bubble;
}

@property (nonatomic) BOOL hasNext;
@property (nonatomic) long long nextCycleTime;
@property (copy, nonatomic) NSString *nextToken;
@property (nonatomic) long long coinAmount;
@property (copy, nonatomic) NSString *rewardText;
@property (retain, nonatomic) AWEFCoinRewardMessage *rewardMessage;
@property (retain, nonatomic) AWEFCoinTaskDataBubble *bubble;
@property (nonatomic) BOOL pendantUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setHasNext:(BOOL)arg0;
- (void)setRewardText:(id)arg0;
- (id)rewardText;
- (long long)nextCycleTime;
- (void)setNextCycleTime:(long long)arg0;
- (void)setNextToken:(id)arg0;
- (long long)coinAmount;
- (void)setCoinAmount:(long long)arg0;
- (id)rewardMessage;
- (void)setRewardMessage:(id)arg0;
- (BOOL)pendantUpdate;
- (void)setPendantUpdate:(BOOL)arg0;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:(id)arg0;
- (id)nextToken;
- (BOOL)hasNext;

@end
