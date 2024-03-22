//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary, AWEAwemeModel, NSMutableArray;

@interface AWEECommerceFeedGoodsVideoDataController : AWEListDataController <AWEECFeedGoodsVideoDataControllerProtocol, IESECCommentKOLEvaluationDataManagerProtocol> {
    BOOL _waitingFirstItem;
    BOOL _removeDataAfterRequestCallback;
    BOOL _isMallPlayer;
    NSString *_productID;
    NSDictionary *_extraParams;
    AWEAwemeModel *_preLoadModel;
    NSString *_kolEnterFrom;
    long long _pageNum;
    NSArray *_pendingAwemeList;
    NSMutableArray *_evaluationModels;
}

@property (nonatomic) long long pageNum;
@property (copy, nonatomic) NSArray *pendingAwemeList;
@property (retain, nonatomic) NSMutableArray *evaluationModels;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) AWEAwemeModel *preLoadModel;
@property (copy, nonatomic) NSString *kolEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL waitingFirstItem;
@property (nonatomic) BOOL removeDataAfterRequestCallback;
@property (nonatomic) BOOL isMallPlayer;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)requestNextPageWithCompletion:(id /* block */)arg0;
- (void)setPageNum:(long long)arg0;
- (long long)pageNum;
- (id)kolEnterFrom;
- (void)fetchECGoodsVideoListWithParameters:(id)arg0 completion:(id /* block */)arg1;
- (void)setKolEnterFrom:(id)arg0;
- (void)setRemoveDataAfterRequestCallback:(BOOL)arg0;
- (void)setWaitingFirstItem:(BOOL)arg0;
- (void)setIsMallPlayer:(BOOL)arg0;
- (BOOL)waitingFirstItem;
- (void)setPendingAwemeList:(id)arg0;
- (id)pendingAwemeList;
- (id)preLoadModel;
- (void)setPreLoadModel:(id)arg0;
- (BOOL)removeDataAfterRequestCallback;
- (BOOL)isMallPlayer;
- (void)addElementsFromArray:(id)arg0;
- (id)evaluationModels;
- (id)evaluationModelFromAweme:(id)arg0;
- (id)evaluationDataSource;
- (void)loadMoreEvaluationWithCompletion:(id /* block */)arg0;
- (void)forceUpdateEvaluationDataSource;
- (void)toggleDiggStatusAtIndex:(long long)arg0;
- (void)setEvaluationModels:(id)arg0;
- (id)productID;
- (id)init;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (BOOL)hasMore;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)resetDataSource;

@end