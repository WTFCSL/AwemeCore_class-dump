//
//     Generated by private class-dump
//

@class NSMutableArray, NSString, AWEAwemeModel, AWEUserModel, UIViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@protocol AWEUserProFileAdVideoDataController <AWECrotocol>

+ (id)profileDetailVideoAdGuideTagTextIfSlideDown:(BOOL)arg0;
+ (long long)adGuideTagShowType;
+ (BOOL)canShowProfileTipsBarWithModel:(id)arg0;
+ (long long)profileAdsTipsBarType;
+ (id)profileAdsTipsBarText;

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isUserFingureDragging;
@property (copy, nonatomic) id /* block */ userProfileInsertAdVideoDetailBlock;
@property (nonatomic) BOOL isBigIndexLocateToJustWatchedItemStartRequest;
@property (nonatomic) BOOL isInsertAdModelFail;
@property (nonatomic) BOOL isDetailVCAnimating;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailVC;
@property (retain, nonatomic) AWEAwemeModel *initialAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) NSMutableArray *adModels;
@property (nonatomic) BOOL profileAdPreloadEnable;
@property (copy, nonatomic) NSString *entranceID;
@property (copy, nonatomic) NSString *outFlowEnterFrom;
@property (nonatomic) unsigned long long entranceType;
@property (nonatomic) unsigned long long userRelationType;
@property (nonatomic) BOOL detailVCIsDeletingVideo;
@property (nonatomic) BOOL isPerfPagingEnable;

- (id)detailVC;
- (unsigned long long)slotAdType;
- (id)adModels;
- (void)setAdModels:(id)arg0;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg0;
- (void)updateProfileAdPreloadEnableStatus:(BOOL)arg0;
- (void)rawDataSourceClear;
- (long long)rawDataIndexWithoutAdVideo:(id)arg0;
- (void)userProfileVideoSwitchWithIndex:(long long)arg0 awemeModel:(id)arg1;
- (void)startShowUserProfileAwemeDetailWithInitalIndex:(long long)arg0;
- (void)refreshDataSourceWithRawAwemeModels:(id)arg0;
- (id)adVideoItemIDs;
- (void)clearAdVideoData;
- (void)resetFetchDataTaskIfNeed;
- (BOOL)isEnableInsertAdVideoInUserProfile;
- (void)videoWillDisplayWithModel:(id)arg0 index:(long long)arg1;
- (void)tryChangeAdShowTimeGapIfNeed:(id)arg0 index:(long long)arg1;
- (void)trackMonitorEvent:(id)arg0 creativeID:(id)arg1 adExtraData:(id)arg2;
- (void)startShowMixDetailWithAwemeModel:(id)arg0;
- (void)mixVideoSwitchWithIndex:(long long)arg0 awemeModel:(id)arg1;
- (void)refreshDataSourceWithRawMixAwemeDetail:(id)arg0 atFront:(BOOL)arg1;
- (void)updateOriginalTableViewHeight:(double)arg0;
- (double)originalTableViewHeight;
- (double)recaculateScrollContentOffsetWithScrollingVelocity:(struct CGPoint { double x0; double x1; })arg0 contentOffset:(struct CGPoint { double x0; double x1; })arg1 maxOffsetY:(double)arg2;
- (void)tryUpdateAdCellHeight:(id)arg0;
- (double)cellHeightWithAdModel:(id)arg0;
- (long long)adLiveStreamShowCount;
- (long long)indexFromContentOffsetY:(double)arg0;
- (double)startOffsetFromIndex:(long long)arg0;
- (void)tryRebuildAdLiveStreamPreCount;
- (BOOL)isUserFingureDragging;
- (void)setIsUserFingureDragging:(BOOL)arg0;
- (id /* block */)userProfileInsertAdVideoDetailBlock;
- (void)setUserProfileInsertAdVideoDetailBlock:(id /* block */)arg0;
- (BOOL)isBigIndexLocateToJustWatchedItemStartRequest;
- (void)setIsBigIndexLocateToJustWatchedItemStartRequest:(BOOL)arg0;
- (BOOL)isInsertAdModelFail;
- (void)setIsInsertAdModelFail:(BOOL)arg0;
- (BOOL)isDetailVCAnimating;
- (void)setIsDetailVCAnimating:(BOOL)arg0;
- (void)setDetailVC:(id)arg0;
- (id)initialAwemeModel;
- (void)setInitialAwemeModel:(id)arg0;
- (BOOL)profileAdPreloadEnable;
- (void)setProfileAdPreloadEnable:(BOOL)arg0;
- (id)entranceID;
- (void)setEntranceID:(id)arg0;
- (id)outFlowEnterFrom;
- (void)setOutFlowEnterFrom:(id)arg0;
- (unsigned long long)userRelationType;
- (void)setUserRelationType:(unsigned long long)arg0;
- (BOOL)detailVCIsDeletingVideo;
- (void)setDetailVCIsDeletingVideo:(BOOL)arg0;
- (BOOL)isPerfPagingEnable;
- (void)setIsPerfPagingEnable:(BOOL)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end
