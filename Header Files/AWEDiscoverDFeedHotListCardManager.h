//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEDiscoverDFeedHotListCardManager : NSObject <AWEDiscoverDFeedHotListCardManagerProtocol> {
    BOOL _isHotSpotConsumed;
    BOOL _isHotSpotPlayFinishCountReachStandard;
    NSArray *_cachedHotListCardModels;
    double _latestRequestCardTime;
}

@property (retain, nonatomic) NSArray *cachedHotListCardModels;
@property (nonatomic) BOOL isHotSpotConsumed;
@property (nonatomic) BOOL isHotSpotPlayFinishCountReachStandard;
@property (nonatomic) double latestRequestCardTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)markHotSpotIsConsumed;
- (BOOL)isHotSpotPlayFinishCountReachStandard;
- (void)setIsHotSpotPlayFinishCountReachStandard:(BOOL)arg0;
- (void)validateThreeDayClickStatus;
- (void)setIsHotSpotConsumed:(BOOL)arg0;
- (BOOL)isHotSpotConsumed;
- (void)recordHotSpotListConsumptionReason:(id)arg0;
- (BOOL)checkIfCanShowHotListCardForTimeAndCountLimit;
- (void)recordHotSpotListRequested;
- (void)setLatestRequestCardTime:(double)arg0;
- (void)addShowedCountForItem:(id)arg0;
- (long long)feedHotListCardMaxShowCountPerDay;
- (double)latestRequestCardTime;
- (double)triggerIntervalTime;
- (id)cachedHotListCardModels;
- (void)syncModelsToCache;
- (void)setCachedHotListCardModels:(id)arg0;
- (void)sortCachedHotListCardModels;
- (void)markHotSpotListCardNeverShow;
- (void)addToHotSpotVideoPlayFinishedList:(id)arg0;
- (void)markVisitHotSearchList;
- (void)markClickedHotTipBottomBar;
- (void)clearHotSpotConsumptionStatus;
- (void)recordHotSpotCardIsClicked:(id)arg0;
- (BOOL)shouldRequestHotListCard;
- (void)recordHotSpotListRequest:(id)arg0;
- (void)recordHotSpotListConsumption:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
