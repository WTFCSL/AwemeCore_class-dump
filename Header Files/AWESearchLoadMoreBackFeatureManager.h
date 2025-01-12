//
//     Generated by private class-dump
//

@class AWELoadMoreAdInfoModel, NSString, NSLock, NSMutableArray;

@interface AWESearchLoadMoreBackFeatureManager : NSObject <AWESearchLoadMoreBackFeatureManager> {
    BOOL _isEnterGeneralSearchVC;
    BOOL _isEnterDetailSearchVC;
    NSString *_currentShowGeneralSearchVCStr;
    NSLock *_lock;
    NSMutableArray *_storeLoadMoreInformationArr;
}

@property (copy, nonatomic) NSString *currentShowGeneralSearchVCStr;
@property (nonatomic) BOOL isEnterGeneralSearchVC;
@property (nonatomic) BOOL isEnterDetailSearchVC;
@property (retain, nonatomic) NSLock *lock;
@property (readonly, nonatomic) AWELoadMoreAdInfoModel *currenLoadMoreInfo;
@property (retain, nonatomic) NSMutableArray *storeLoadMoreInformationArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)addLoadMoreInfoModelWithGeneralSearchModelArray:(id)arg0;
- (void)insertAssociatedAdWithModel:(id)arg0;
- (id)consumerLastLoadMoreInfoDictionary;
- (void)recordEnterGeneralSearchViewController:(BOOL)arg0 vc:(id)arg1;
- (void)recordEnterSearchDetailViewController:(BOOL)arg0 aweme:(id)arg1;
- (void)recordLikeClickWith:(id)arg0;
- (void)recordADClickWith:(id)arg0;
- (void)recordPlaybackTimeWith:(id)arg0;
- (void)recordPlaybackTimeWith:(id)arg0 playbackTime:(double)arg1 loopTimes:(long long)arg2;
- (void)deleteCurrentLoadMoreInfoModel;
- (BOOL)isEnterGeneralSearchVC;
- (id)currentShowGeneralSearchVCStr;
- (id)currenLoadMoreInfo;
- (id)storeLoadMoreInformationArr;
- (void)recordCurrentShowVideoPlayTimeAndLoopTimes;
- (BOOL)isEnterDetailSearchVC;
- (id)currenLoadMoreInfoDictionaryList;
- (void)setIsEnterGeneralSearchVC:(BOOL)arg0;
- (void)setCurrentShowGeneralSearchVCStr:(id)arg0;
- (void)setIsEnterDetailSearchVC:(BOOL)arg0;
- (id)interactiveInformationWithAweme:(id)arg0;
- (id)interactiveInformationWithCreativeID:(id)arg0;
- (id)mergeCurrentLoadMoreInfoModel:(id)arg0;
- (void)setStoreLoadMoreInformationArr:(id)arg0;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
