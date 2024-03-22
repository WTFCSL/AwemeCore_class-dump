//
//     Generated by private class-dump
//

@class NSString, AWESmartFeedResponseModel, AWEAwemeModel;

@protocol AWEConcernPreloadManagerProtocol <NSObject>

@property (nonatomic) long long noticeCount;
@property (nonatomic) long long leftVideoCount;
@property (nonatomic) long long followTabPosition;
@property (copy, nonatomic) NSString *noticeType;
@property (copy, nonatomic) NSString *leftTabName;
@property (copy, nonatomic) NSString *rightTabName;
@property (copy, nonatomic) NSString *currentPageName;
@property (nonatomic) long long currentTabPosition;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (nonatomic) BOOL isInProgress;
@property (retain, nonatomic) AWESmartFeedResponseModel *preloadResponseModel;

- (id)currentAwemeModel;
- (void)setNoticeType:(id)arg0;
- (void)registerNotification;
- (id)currentPageName;
- (void)setPreloadResponseModel:(id)arg0;
- (id)preloadResponseModel;
- (void)preloadFollowFeedWithCompletion:(id /* block */)arg0;
- (void)clearPreload;
- (void)trackPreloadMissWithReason:(unsigned long long)arg0;
- (void)setFollowTabPosition:(long long)arg0;
- (long long)followTabPosition;
- (void)setLeftTabName:(id)arg0;
- (void)setRightTabName:(id)arg0;
- (long long)noticeCount;
- (id)leftTabName;
- (id)rightTabName;
- (void)cancelPreload;
- (void)addPreloadResultToFakeRefreshList;
- (BOOL)preloadResultExpired;
- (BOOL)isExperimentOn;
- (BOOL)preloadResultReady;
- (id)featureParams;
- (void)configWithTabList:(id)arg0;
- (void)trackPreloadHitRate:(BOOL)arg0;
- (void)setNoticeCount:(long long)arg0;
- (long long)leftVideoCount;
- (void)setLeftVideoCount:(long long)arg0;
- (void)setCurrentPageName:(id)arg0;
- (long long)currentTabPosition;
- (void)setCurrentTabPosition:(long long)arg0;
- (void)setCurrentAwemeModel:(id)arg0;
- (void)setIsInProgress:(BOOL)arg0;
- (BOOL)isInProgress;
- (id)noticeType;

@end