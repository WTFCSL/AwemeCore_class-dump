//
//     Generated by private class-dump
//

@class NSSet, NSDictionary, NSString, AWENearbyGuideSceneInfoModel;

@interface AWEEnterNearbyUnderTakeManager : NSObject <AWEUserMessage> {
    BOOL _isFirstFeedFreshFinished;
    BOOL _isFirstDiamondFreshFinished;
    BOOL _isUnderTake;
    long long _currUnderTakeType;
    NSSet *_landingVideoIDs;
    AWENearbyGuideSceneInfoModel *_generalUndertakeInfo;
    NSDictionary *_originParams;
    long long _pageType;
}

@property (retain, nonatomic) AWENearbyGuideSceneInfoModel *generalUndertakeInfo;
@property (copy, nonatomic) NSSet *landingVideoIDs;
@property (copy, nonatomic) NSDictionary *originParams;
@property (nonatomic) BOOL isUnderTake;
@property (nonatomic) BOOL isFirstFeedFreshFinished;
@property (nonatomic) BOOL isFirstDiamondFreshFinished;
@property (nonatomic) long long currUnderTakeType;
@property (nonatomic) long long pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)redirectURLByNearbyUnderTake:(id)arg0;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (id)initWithPageType:(long long)arg0;
- (BOOL)isUnderTake;
- (void)cleanUnderTake;
- (void)setCurrUnderTakeType:(long long)arg0;
- (void)setIsUnderTake:(BOOL)arg0;
- (void)resetUnderTakeStateWithType:(long long)arg0;
- (void)setGeneralUndertakeInfo:(id)arg0;
- (void)filiterBlackListParams;
- (id)generalUndertakeInfo;
- (void)setOriginParams:(id)arg0;
- (void)trackEventFailedJsonDictionary:(id)arg0 scene:(id)arg1 extraInfo:(id)arg2;
- (BOOL)checkFloatBackEnable:(id)arg0;
- (void)mergeNonEmtpyStringKVFrom:(id)arg0 toMDict:(id)arg1 keys:(id)arg2;
- (void)mergeNonEmtpyStringKVFrom:(id)arg0 toMDict:(id)arg1;
- (id)getUnderTakeHalfScreenContainerModel;
- (void)setLandingVideoIDs:(id)arg0;
- (long long)currUnderTakeType;
- (void)setIsFirstFeedFreshFinished:(BOOL)arg0;
- (void)setIsFirstDiamondFreshFinished:(BOOL)arg0;
- (long long)getUnderTakeStatus;
- (void)removeUnderTakeGuideContextWithKey:(id)arg0;
- (void)removeDiamondUpdateInfoWithKey:(id)arg0;
- (void)addObserveInNearbyAppear;
- (BOOL)readyUnderTakeWithGuideSceneInfoModel:(id)arg0;
- (BOOL)readyUnderTakeWithQueryParams:(id)arg0 type:(long long)arg1;
- (void)setLandingLifeVideoIDs:(id)arg0;
- (void)recordEnterNearbyTimeStamp;
- (id)underTakeContext;
- (id)getFeedWhenUnderTakeTrackParams;
- (id)getDiamondWhenUnderTakeTrackParams;
- (BOOL)isUnderTakeStatus;
- (BOOL)tryClearnUnderTakeWithTakeType:(long long)arg0;
- (void)cleanFloatBackUnderTake;
- (void)addFeedTrackParams:(id)arg0 diamondTrackParams:(id)arg1 commonTrackParams:(id)arg2;
- (void)updateFeedTrackParams:(id)arg0 diamondTrackParams:(id)arg1 commonTrackParams:(id)arg2;
- (id)getUnderTakeToastText;
- (void)cleanUnderTakeHalfScreenData;
- (id)getUnderTakeDiamondUpdateInfoWithID:(id)arg0;
- (BOOL)isFirstFeedFreshFinished;
- (BOOL)isFirstDiamondFreshFinished;
- (id)landingVideoIDs;
- (id)originParams;
- (long long)pageType;
- (void).cxx_destruct;
- (void)setPageType:(long long)arg0;
- (void)dealloc;

@end
