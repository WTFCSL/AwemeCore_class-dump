//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, AWEIronManLandingPageDataController, NSDictionary, NSArray, UIViewController;

@interface AWEIronManLandingPageRecentlyUsedViewModel : MTLModel <MTLJSONSerializing, AWEIronManLandingPagePreloadProtocol, AWEIronManLandingPageViewModelProtocol, AWEIronManLandingPageInteractiveProtocol, AWEIronManLandingPageDetailPageViewModelProtocol, AWEIronManLandingPageTrackerViewModelProtocol, AWEIronManLandingPageCloudGameViewModelProtocol> {
    BOOL _hasMore;
    BOOL _cloudGameHasMore;
    BOOL _isFetching;
    BOOL _firstFetchFinshed;
    unsigned long long _originalOffset;
    unsigned long long _originalCloudGameOffset;
    unsigned long long _enterFrom;
    unsigned long long _section;
    UIViewController *_containerVC;
    NSArray *_modelList;
    unsigned long long _uiVersion;
    NSDictionary *_bdpExtra;
    NSDictionary *_commonRequestParamDict;
    NSDictionary *_commonTrackDict;
    long long _maxPreloadLimit;
    long long _refreshCount;
    long long _vmLocation;
    NSMutableDictionary *_trackStatus;
    AWEIronManLandingPageDataController *_dataVc;
}

@property (retain, nonatomic) NSMutableDictionary *trackStatus;
@property (retain, nonatomic) AWEIronManLandingPageDataController *dataVc;
@property (nonatomic) BOOL firstFetchFinshed;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long vmLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long maxPreloadLimit;
@property (nonatomic) unsigned long long uiVersion;
@property (nonatomic) unsigned long long enterFrom;
@property (copy, nonatomic) NSDictionary *bdpExtra;
@property (copy, nonatomic) NSDictionary *commonRequestParamDict;
@property (nonatomic) unsigned long long section;
@property (retain, nonatomic) NSArray *modelList;
@property (weak, nonatomic) UIViewController *containerVC;
@property BOOL isFetching;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long originalOffset;
@property (copy, nonatomic) NSDictionary *commonTrackDict;
@property (nonatomic) BOOL cloudGameHasMore;
@property (nonatomic) unsigned long long originalCloudGameOffset;

+ (id)modelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(unsigned long long)arg0;
- (unsigned long long)enterFrom;
- (void)setContainerVC:(id)arg0;
- (id)containerVC;
- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)setTrackStatus:(id)arg0;
- (id)trackStatus;
- (id)modelList;
- (void)setModelList:(id)arg0;
- (id)commonTrackDict;
- (void)setCommonTrackDict:(id)arg0;
- (BOOL)firstFetchFinshed;
- (void)didReceivedUserAction:(unsigned long long)arg0 itemModel:(id)arg1;
- (void)preloadItemIfNeed:(id)arg0 index:(long long)arg1;
- (id)bdpExtra;
- (void)trackEvent:(id)arg0 atIndex:(unsigned long long)arg1 params:(id)arg2;
- (void)setDataVc:(id)arg0;
- (void)setUiVersion:(unsigned long long)arg0;
- (void)removeCollectionNoti:(id)arg0;
- (unsigned long long)uiVersion;
- (id)dataVc;
- (void)setOriginalOffset:(unsigned long long)arg0;
- (void)setFirstFetchFinshed:(BOOL)arg0;
- (void)fetchMore:(unsigned long long)arg0;
- (void)refreshDataWithCount:(unsigned long long)arg0;
- (id)eventStatusKeyAtIndex:(unsigned long long)arg0 event:(id)arg1;
- (long long)maxPreloadLimit;
- (void)setMaxPreloadLimit:(long long)arg0;
- (void)setBdpExtra:(id)arg0;
- (id)commonRequestParamDict;
- (void)setCommonRequestParamDict:(id)arg0;
- (long long)vmLocation;
- (void)setVmLocation:(long long)arg0;
- (void)deleteRecentlyUsedNoti:(id)arg0;
- (unsigned long long)originalCloudGameOffset;
- (void)setOriginalCloudGameOffset:(unsigned long long)arg0;
- (BOOL)cloudGameHasMore;
- (void)setCloudGameHasMore:(BOOL)arg0;
- (void)deleteRecentlyUseActionWithItemModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setSection:(unsigned long long)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)dealloc;
- (void)addObserver;
- (unsigned long long)section;
- (unsigned long long)originalOffset;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg0;
- (long long)refreshCount;
- (void)setRefreshCount:(long long)arg0;

@end