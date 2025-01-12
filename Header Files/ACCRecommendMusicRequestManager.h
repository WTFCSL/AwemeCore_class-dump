//
//     Generated by private class-dump
//

@class NSNumber, NSMutableArray, AWEVideoPublishViewModel;

@interface ACCRecommendMusicRequestManager : NSObject {
    BOOL _autoDegradeSelectHotMusic;
    BOOL _hotMusicHasMore;
    BOOL _hotMusicIsProcessing;
    BOOL _hotMusicFirstLoading;
    BOOL _aiMusicIsProcessing;
    BOOL _aiMusicHasMore;
    BOOL _isProcessing;
    BOOL _usedHotMusicDefaultMusicList;
    BOOL _aiMusicFirstLoading;
    NSMutableArray *_dataList;
    NSNumber *_hotMusicCursor;
    NSNumber *_aiMusicCursor;
    AWEVideoPublishViewModel *_repository;
    unsigned long long _currentMusicServiceModuleType;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) unsigned long long currentMusicServiceModuleType;
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) BOOL autoDegradeSelectHotMusic;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (nonatomic) BOOL hotMusicIsProcessing;
@property (nonatomic) BOOL hotMusicHasMore;
@property (nonatomic) BOOL hotMusicFirstLoading;
@property (retain, nonatomic) NSNumber *hotMusicCursor;
@property (nonatomic) BOOL usedHotMusicDefaultMusicList;
@property (nonatomic) BOOL aiMusicIsProcessing;
@property (nonatomic) BOOL aiMusicHasMore;
@property (nonatomic) BOOL aiMusicFirstLoading;
@property (retain, nonatomic) NSNumber *aiMusicCursor;

- (void)setDataList:(id)arg0;
- (void)setIsProcessing:(BOOL)arg0;
- (void)resetRequestParams;
- (unsigned long long)currentMusicServiceModuleType;
- (void)setCurrentMusicServiceModuleType:(unsigned long long)arg0;
- (BOOL)useHotMusic;
- (BOOL)hotMusicHasMore;
- (void)fetchInfiniteHotMusic:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)aiMusicHasMore;
- (void)fetchInfiniteAIRecommendMusicWithURI:(id)arg0 isCommercialScene:(BOOL)arg1 otherParams:(id)arg2 fetchResultBlock:(id /* block */)arg3;
- (BOOL)canUseLoadMore;
- (BOOL)autoDegradeSelectHotMusic;
- (unsigned long long)currentRecommendMusicType;
- (id)currentRecommendMusicTypeString;
- (BOOL)hotMusicFirstLoading;
- (BOOL)usedDefaultMusicList;
- (void)setHotMusicFirstLoading:(BOOL)arg0;
- (void)setAiMusicFirstLoading:(BOOL)arg0;
- (void)setAutoDegradeSelectHotMusic:(BOOL)arg0;
- (BOOL)shouldUseAIRecommendationMusic;
- (id)currentRecommendMusicTypeString:(unsigned long long)arg0;
- (BOOL)hotMusicIsProcessing;
- (void)setHotMusicIsProcessing:(BOOL)arg0;
- (void)setUsedHotMusicDefaultMusicList:(BOOL)arg0;
- (void)setHotMusicHasMore:(BOOL)arg0;
- (id)hotMusicCursor;
- (void)setHotMusicCursor:(id)arg0;
- (void)p_fetchDefaultMusicListWithCompletion:(id /* block */)arg0;
- (void)p_fetchMusicListFromLibWithCompletion:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)aiMusicIsProcessing;
- (void)setAiMusicIsProcessing:(BOOL)arg0;
- (id)aiMusicCursor;
- (void)setAiMusicCursor:(id)arg0;
- (void)setAiMusicHasMore:(BOOL)arg0;
- (BOOL)editPageOnlyRequestAIRecommendMusic;
- (BOOL)usedHotMusicDefaultMusicList;
- (BOOL)recordPageOnlyRequestAIRecommendMusic;
- (void)deleteMusicModelIfNeeded:(id)arg0;
- (id)initWithPublishViewModel:(id)arg0 musicServiceModule:(unsigned long long)arg1;
- (BOOL)autoDegradedSelectHotMusicDataSourceSuccess:(BOOL)arg0;
- (BOOL)aiMusicFirstLoading;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;
- (BOOL)isProcessing;
- (id)dataList;

@end
