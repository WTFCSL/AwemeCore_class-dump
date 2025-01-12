//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, AWEStorage;

@interface AWENearbyJumpLabelFreqRecordMgr : NSObject <AWERelationLabelFreqRecordMgrProtocol> {
    BOOL _tokenBucket;
    BOOL _canShowLabelToday;
    BOOL _isUnderObserver;
    BOOL _isDownClock;
    BOOL _isLabelFrequencyEffective;
    NSMutableSet *_allAwemeIdOfShowedLabel;
    long long _lastShowLabelIndex;
    long long _refershIndexSub;
    long long _numOfWithOutJumpLabelFeed;
    long long _dayNumsSince1970;
    long long _numOflabelsHaveShowedToday;
    long long _numOfConsecutiveUnClickedLabels;
    AWEStorage *_settingsStorage;
    long long _numCanLabelShowOneDay;
    long long _numOfLabelShowInterval;
    long long _numToUnderClock;
    long long _numOfLabelShowIntervalUnderClock;
}

@property (nonatomic) BOOL tokenBucket;
@property (nonatomic) BOOL canShowLabelToday;
@property (nonatomic) BOOL isUnderObserver;
@property (retain, nonatomic) NSMutableSet *allAwemeIdOfShowedLabel;
@property (nonatomic) long long lastShowLabelIndex;
@property (nonatomic) long long refershIndexSub;
@property (nonatomic) long long numOfWithOutJumpLabelFeed;
@property (nonatomic) BOOL isDownClock;
@property (nonatomic) long long dayNumsSince1970;
@property (nonatomic) long long numOflabelsHaveShowedToday;
@property (nonatomic) long long numOfConsecutiveUnClickedLabels;
@property (retain, nonatomic) AWEStorage *settingsStorage;
@property (nonatomic) long long numCanLabelShowOneDay;
@property (nonatomic) long long numOfLabelShowInterval;
@property (nonatomic) long long numToUnderClock;
@property (nonatomic) long long numOfLabelShowIntervalUnderClock;
@property (nonatomic) BOOL isLabelFrequencyEffective;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchSettings;
- (void)feedEndRefreshWithReferString:(id)arg0 withList:(id)arg1;
- (void)feedTabelDidEndScroll:(id)arg0;
- (void)updateLocalSettings;
- (id)settingsStorage;
- (void)setDayNumsSince1970:(long long)arg0;
- (long long)dayNumsSince1970;
- (long long)p_getTodayNumsSince1970;
- (BOOL)isLabelFrequencyEffective;
- (BOOL)canShowLabelToday;
- (void)setRefershIndexSub:(long long)arg0;
- (void)setNumOfWithOutJumpLabelFeed:(long long)arg0;
- (void)setLastShowLabelIndex:(long long)arg0;
- (id)allAwemeIdOfShowedLabel;
- (BOOL)isDownClock;
- (long long)numOfConsecutiveUnClickedLabels;
- (void)setNumOfConsecutiveUnClickedLabels:(long long)arg0;
- (void)setIsDownClock:(BOOL)arg0;
- (void)setNumOflabelsHaveShowedToday:(long long)arg0;
- (long long)numOflabelsHaveShowedToday;
- (BOOL)isUnderObserver;
- (void)setIsUnderObserver:(BOOL)arg0;
- (long long)refershIndexSub;
- (long long)lastShowLabelIndex;
- (long long)numOfWithOutJumpLabelFeed;
- (long long)frequenceOfShowLabel;
- (BOOL)recoverToken;
- (void)getTokenWithResultBlk:(id /* block */)arg0;
- (void)initSettings;
- (void)labelHasShowWithAWEAwemeModel:(id)arg0;
- (void)labelHasClickWithAWEAwemeModel:(id)arg0;
- (void)setCanShowLabelToday:(BOOL)arg0;
- (void)setAllAwemeIdOfShowedLabel:(id)arg0;
- (void)setSettingsStorage:(id)arg0;
- (long long)numCanLabelShowOneDay;
- (void)setNumCanLabelShowOneDay:(long long)arg0;
- (long long)numOfLabelShowInterval;
- (void)setNumOfLabelShowInterval:(long long)arg0;
- (long long)numToUnderClock;
- (void)setNumToUnderClock:(long long)arg0;
- (long long)numOfLabelShowIntervalUnderClock;
- (void)setNumOfLabelShowIntervalUnderClock:(long long)arg0;
- (void)setIsLabelFrequencyEffective:(BOOL)arg0;
- (void).cxx_destruct;
- (void)removeObserver;
- (void)setTokenBucket:(BOOL)arg0;
- (BOOL)tokenBucket;
- (void)addObserver;
- (void)updateData;
- (void)cleanData;

@end
