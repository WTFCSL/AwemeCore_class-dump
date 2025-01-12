//
//     Generated by private class-dump
//

@class IESLiveUGCVideoHeaderDiffableModel, NSString, NSArray, IESLiveCombineSubject, IESLiveMultiKTVStore, NSMutableDictionary, NSDictionary, IESLiveKTVMVInfo, IESLiveUGCVideoCellModel, IESLiveUGCVideoListDiffableModel, NSNumber;
@protocol IESLiveUGCVideoSelectPanelDelegate;

@interface IESLiveUGCVideoSelectPanelViewModel : NSObject {
    IESLiveUGCVideoHeaderDiffableModel *_topHeaderObject;
    IESLiveUGCVideoListDiffableModel *_officialVideoObject;
    IESLiveUGCVideoHeaderDiffableModel *_midHeaderObject;
    IESLiveUGCVideoListDiffableModel *_ugcVideoObject;
    NSArray *_sectionControllerModelObjectArray;
    IESLiveCombineSubject *_officialModelsChangedSubject;
    IESLiveCombineSubject *_selectedModelChangedSubject;
    IESLiveCombineSubject *_ugcModelsChangedSubject;
    id<IESLiveUGCVideoSelectPanelDelegate> _delegate;
    NSMutableDictionary *_officialVideoDictionary;
    NSArray *_ugcVideoModels;
    NSMutableDictionary *_selectedModelDictionary;
    unsigned long long _viewColumns;
    NSString *_panelTitle;
    NSNumber *_sourceSingerID;
    NSNumber *_sourceSongID;
    NSDictionary *_trackParams;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    IESLiveUGCVideoCellModel *_curSelectedModel;
    IESLiveKTVMVInfo *_curMVInfo;
    NSArray *_cachedObjectArray;
    NSMutableDictionary *_chooseCacheDict;
    IESLiveMultiKTVStore *_store;
}

@property (copy, nonatomic) NSArray *sectionControllerModelObjectArray;
@property (weak, nonatomic) id<IESLiveUGCVideoSelectPanelDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *officialVideoDictionary;
@property (copy, nonatomic) NSArray *ugcVideoModels;
@property (retain, nonatomic) NSMutableDictionary *selectedModelDictionary;
@property (nonatomic) unsigned long long viewColumns;
@property (copy, nonatomic) NSString *panelTitle;
@property (retain, nonatomic) NSNumber *sourceSingerID;
@property (retain, nonatomic) NSNumber *sourceSongID;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (weak, nonatomic) IESLiveUGCVideoCellModel *curSelectedModel;
@property (weak, nonatomic) IESLiveKTVMVInfo *curMVInfo;
@property (retain, nonatomic) IESLiveUGCVideoHeaderDiffableModel *topHeaderObject;
@property (retain, nonatomic) IESLiveUGCVideoListDiffableModel *officialVideoObject;
@property (retain, nonatomic) IESLiveUGCVideoHeaderDiffableModel *midHeaderObject;
@property (retain, nonatomic) IESLiveUGCVideoListDiffableModel *ugcVideoObject;
@property (copy, nonatomic) NSArray *cachedObjectArray;
@property (retain, nonatomic) NSMutableDictionary *chooseCacheDict;
@property (retain, nonatomic) IESLiveCombineSubject *officialModelsChangedSubject;
@property (retain, nonatomic) IESLiveCombineSubject *selectedModelChangedSubject;
@property (retain, nonatomic) IESLiveCombineSubject *ugcModelsChangedSubject;
@property (weak, nonatomic) IESLiveMultiKTVStore *store;

- (void)didSetAttachingDIContext;
- (id)trackParams;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:(id)arg0;
- (void)setTrackParams:(id)arg0;
- (void)setMinCursor:(id)arg0;
- (id)sectionControllerForObject:(id)arg0;
- (id)panelTitle;
- (void)setPanelTitle:(id)arg0;
- (id)sectionControllerModelObjectArray;
- (void)setCachedObjectArray:(id)arg0;
- (id)cachedObjectArray;
- (void)setSectionControllerModelObjectArray:(id)arg0;
- (id)listSectionController;
- (BOOL)isSelfSinging;
- (void)currentPlayingMVDidChange:(id)arg0 singerID:(id)arg1 songID:(id)arg2;
- (void)didSelectCellWithModel:(id)arg0 index:(id)arg1;
- (void)setCurMVInfo:(id)arg0;
- (id)curMVInfo;
- (id)ugcVideoObject;
- (void)fetchMVListWithLoadMore:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)officialModelsChangedSubject;
- (id)selectedModelChangedSubject;
- (id)ugcModelsChangedSubject;
- (void)refreshPanelInfoWithParams:(id)arg0;
- (void)trackPanelDidShowWithEvent:(id)arg0 params:(id)arg1;
- (void)didClickPreviewButton;
- (void)didClickChooseButtonFrom:(id)arg0;
- (void)exchangeOfficialMVWithCompletion:(id /* block */)arg0;
- (id)initWithUGCVideoDelegate:(id)arg0 multiKTVStore:(id)arg1;
- (void)setChooseCacheDict:(id)arg0;
- (void)setOfficialVideoDictionary:(id)arg0;
- (void)setSelectedModelDictionary:(id)arg0;
- (id)topHeaderObject;
- (id)officialVideoObject;
- (id)midHeaderObject;
- (id)singItemKey;
- (void)refreshSelectedStatusWithModel:(id)arg0 itemKey:(id)arg1;
- (void)setSourceSongID:(id)arg0;
- (void)setSourceSingerID:(id)arg0;
- (id)officialVideoDictionary;
- (id)sourceSingerID;
- (id)sourceSongID;
- (void)refreshIsPlayingWithCurMVInfo:(id)arg0 singerID:(id)arg1 songID:(id)arg2;
- (void)refreshWillPlayMask;
- (id)curSelectedModel;
- (id)officialVideoModels;
- (id)completeModelList;
- (id)selectedModelDictionary;
- (id)chooseCacheDict;
- (BOOL)isRemotePlayingSongID:(id)arg0 userID:(id)arg1;
- (id)transformWithServerData:(id)arg0;
- (void)setUgcVideoModels:(id)arg0;
- (id)ugcVideoModels;
- (id)combineLocalData:(id)arg0 serverData:(id)arg1;
- (void)setTopHeaderObject:(id)arg0;
- (void)setOfficialVideoObject:(id)arg0;
- (void)setMidHeaderObject:(id)arg0;
- (void)setUgcVideoObject:(id)arg0;
- (void)setOfficialModelsChangedSubject:(id)arg0;
- (void)setSelectedModelChangedSubject:(id)arg0;
- (void)setUgcModelsChangedSubject:(id)arg0;
- (unsigned long long)viewColumns;
- (void)setViewColumns:(unsigned long long)arg0;
- (void)setCurSelectedModel:(id)arg0;
- (id)userType;
- (void).cxx_destruct;
- (id)store;
- (BOOL)isConnected;
- (void)setStore:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)headerSectionController;
- (double)containerWidth;

@end
