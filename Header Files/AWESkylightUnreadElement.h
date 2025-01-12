//
//     Generated by private class-dump
//

@class NSTimer, AWESkylightDotConfig, NSError, AWEConcernSkylightCellModel, NSArray, NSString, AWESkylightUnreadInnerDetailController, AWESkylightUnreadDataController, NSObject, AWEFeedChannelEnterModel, AWESkylightUserUpdateResponseModel;
@protocol AWEConcernSkylightContainerProtocol;

@interface AWESkylightUnreadElement : NSObject <AWEConcernSkylightMessage, AWESkylightUnreadMessage, AWEUserMessage, AWEConcernFollowListUnreadCacheMessage, AWEConcernSkylightElementProtocol> {
    BOOL _isShowingSkylight;
    BOOL _isContainerViewAppearing;
    BOOL _hasScrollToConcern;
    BOOL _isEnterFromUnreadDotOnFollowTab;
    BOOL _isEnterInner;
    BOOL _hasRedDot;
    NSArray *_highValueUserList;
    NSError *_error;
    AWEConcernSkylightCellModel *_cellModel;
    AWESkylightUserUpdateResponseModel *_responseModel;
    NSObject<AWEConcernSkylightContainerProtocol> *_skylightContainer;
    AWESkylightUnreadDataController *_dataController;
    AWESkylightDotConfig *_dotConfig;
    NSTimer *_redDotTimer;
    AWEFeedChannelEnterModel *_enterModel;
    AWESkylightUnreadInnerDetailController *_innerDetailController;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEConcernSkylightCellModel *cellModel;
@property (retain, nonatomic) AWESkylightUserUpdateResponseModel *responseModel;
@property (weak, nonatomic) NSObject<AWEConcernSkylightContainerProtocol> *skylightContainer;
@property (retain, nonatomic) AWESkylightUnreadDataController *dataController;
@property (nonatomic) BOOL isShowingSkylight;
@property (nonatomic) BOOL isContainerViewAppearing;
@property (nonatomic) BOOL hasScrollToConcern;
@property (nonatomic) BOOL isEnterFromUnreadDotOnFollowTab;
@property (retain, nonatomic) AWESkylightDotConfig *dotConfig;
@property (retain, nonatomic) NSTimer *redDotTimer;
@property (retain, nonatomic) AWEFeedChannelEnterModel *enterModel;
@property (retain, nonatomic) AWESkylightUnreadInnerDetailController *innerDetailController;
@property (nonatomic) BOOL isEnterInner;
@property (nonatomic) BOOL hasRedDot;
@property (retain, nonatomic) NSArray *highValueUserList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreate;
+ (id)generateWithSkylightContainer:(id)arg0 dataController:(id)arg1;
+ (id)elementKey;

- (void)didSpecialFollowWithUser:(id)arg0 error:(id)arg1;
- (void)didCancelSpecialFollowWithUser:(id)arg0 error:(id)arg1;
- (void)containerScrollViewWillBeginDragging:(id)arg0;
- (void)containerScrollViewDidEndDecelerating:(id)arg0;
- (void)containerScrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setCellModel:(id)arg0;
- (void)followListUnreadCacheDidChangeWithUserID:(id)arg0 deleteItemIDs:(id)arg1;
- (void)setDataController:(id)arg0;
- (void)willCloseSkylightWithAnimated:(BOOL)arg0 actionMethod:(unsigned long long)arg1;
- (void)willShowSkylightWithAnimated:(BOOL)arg0 actionMethod:(unsigned long long)arg1;
- (void)setEnterModel:(id)arg0;
- (id)enterModel;
- (void)setHasRedDot:(BOOL)arg0;
- (id)skylightContainer;
- (BOOL)hasRedDot;
- (void)setHasScrollToConcern:(BOOL)arg0;
- (BOOL)hasScrollToConcern;
- (void)refreshWithNeedHandleData:(BOOL)arg0 complete:(id /* block */)arg1;
- (id)headerConfig;
- (void)clearDataSource;
- (BOOL)shouldShowSkylight;
- (BOOL)shouldShowEmptyInSkylight;
- (struct CGSize { double x0; double x1; })itemSizeWithIndex:(long long)arg0 cellModel:(id)arg1;
- (void)containerViewWillDisappear;
- (void)containerViewDidAppear;
- (void)containerEnterFollowWithModel:(id)arg0;
- (void)didScrollToConcern:(BOOL)arg0;
- (void)didSelectItemAtIndexPath:(id)arg0 cellModel:(id)arg1;
- (BOOL)removeDataSourceWithUser:(id)arg0;
- (id)uniqueIDArrayForDuplicate;
- (void)didShowSkylightWithActionMethod:(unsigned long long)arg0;
- (void)setSkylightContainer:(id)arg0;
- (void)setHighValueUserList:(id)arg0;
- (id)highValueUserList;
- (void)updateUnreadEntranceWithModel:(id)arg0;
- (void)setIsShowingSkylight:(BOOL)arg0;
- (void)willShowSkylightWithActionMethod:(unsigned long long)arg0;
- (BOOL)isShowingSkylight;
- (id)initWithSkylightContainer:(id)arg0;
- (BOOL)canShowUnreadEntrance;
- (void)refreshDataWithNeedUpdateFoldState:(BOOL)arg0;
- (BOOL)canRemoveElementWithReponseModel:(id)arg0;
- (id)dotConfig;
- (void)refreshWithNeedHandleData:(BOOL)arg0 needHighValueFollow:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)setIsContainerViewAppearing:(BOOL)arg0;
- (void)setIsEnterFromUnreadDotOnFollowTab:(BOOL)arg0;
- (void)showUnreadDotIfNeed;
- (BOOL)isEnterInner;
- (void)setIsEnterInner:(BOOL)arg0;
- (id)redDotTimer;
- (void)enterUnreadDetailWithCellModel:(id)arg0;
- (id)innerDetailController;
- (id)displayedUserIDArray;
- (BOOL)removeUnreadFlagEnable;
- (BOOL)isContainerViewAppearing;
- (BOOL)isEnterFromUnreadDotOnFollowTab;
- (void)setDotConfig:(id)arg0;
- (void)hideUnreadRedDotTimer;
- (void)setRedDotTimer:(id)arg0;
- (BOOL)isContainUnreadCell;
- (void)setInnerDetailController:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)setError:(id)arg0;
- (void)dealloc;
- (unsigned long long)cellType;
- (id)error;
- (id)dataController;
- (id)cellModel;
- (id)responseModel;
- (void)setResponseModel:(id)arg0;
- (void)containerViewDidLoad;
- (void)refreshData;
- (void)addObservers;
- (id)requestError;

@end
