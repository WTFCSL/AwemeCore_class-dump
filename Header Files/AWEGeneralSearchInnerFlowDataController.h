//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, NSNumber, NSMutableArray;

@interface AWEGeneralSearchInnerFlowDataController : AWEListDataController <AWEGeneralSearchInnerFlowDataControllerProtocol> {
    BOOL _loadmoreHasMore;
    BOOL hasShownNextItemInflow;
    BOOL _isSingleCard;
    BOOL _isLoadMore;
    BOOL _hasTriggeredPitaya;
    AWEAwemeModel *originModel;
    id /* block */ currentCellIndex;
    NSString *_keyword;
    NSDictionary *_logPassback;
    NSDictionary *_previousLogPassback;
    NSString *_currentSearchResultID;
    long long _docType;
    NSString *_alaSrc;
    NSString *_searchID;
    NSMutableArray *_pitayaSceneArray;
    NSString *_outerSearchSource;
    NSString *_requestURL;
    long long _fetchCount;
    NSNumber *_cursor;
    NSDictionary *_additionalRequestParams;
    Class _responseModelClass;
}

@property (retain, nonatomic) NSString *requestURL;
@property (nonatomic) long long fetchCount;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSDictionary *additionalRequestParams;
@property (retain, nonatomic) Class responseModelClass;
@property (nonatomic) BOOL isLoadMore;
@property (nonatomic) BOOL hasTriggeredPitaya;
@property (retain, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSDictionary *previousLogPassback;
@property (retain, nonatomic) NSString *currentSearchResultID;
@property (nonatomic) long long docType;
@property (retain, nonatomic) NSString *alaSrc;
@property (copy, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSMutableArray *pitayaSceneArray;
@property (nonatomic) BOOL isSingleCard;
@property (retain, nonatomic) NSString *outerSearchSource;
@property (nonatomic) BOOL hasShownNextItemInflow;
@property (retain, nonatomic) AWEAwemeModel *originModel;
@property (copy, nonatomic) id /* block */ currentCellIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLoadmoreHasMore:(BOOL)arg0;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (Class)responseModelClass;
- (id)originModel;
- (void)setOriginModel:(id)arg0;
- (void)p_fetchAwemeListWithCompletion:(id /* block */)arg0;
- (id)p_validateRequestParams;
- (id)p_commonRequestParams;
- (void)setResponseModelClass:(Class)arg0;
- (BOOL)hasShownNextItemInflow;
- (BOOL)isLoadMore;
- (void)setHasShownNextItemInflow:(BOOL)arg0;
- (void)setCurrentCellIndex:(id /* block */)arg0;
- (void)setPreviousLogPassback:(id)arg0;
- (void)setCurrentSearchResultID:(id)arg0;
- (void)setAlaSrc:(id)arg0;
- (void)setPitayaSceneArray:(id)arg0;
- (void)setOuterSearchSource:(id)arg0;
- (void)setIsSingleCard:(BOOL)arg0;
- (void)setIsLoadMore:(BOOL)arg0;
- (id)previousLogPassback;
- (id)currentSearchResultID;
- (id)alaSrc;
- (void)runPitayaTaskForInnerSearchWithResponse:(id)arg0 innerSearchID:(id)arg1;
- (id)buildSendBackDocsForRequest;
- (BOOL)isSingleCard;
- (id)outerSearchSource;
- (id)pitayaSceneArray;
- (void)p_trackInnerFlowPitayaMonitor:(id)arg0;
- (BOOL)hasTriggeredPitaya;
- (void)setHasTriggeredPitaya:(BOOL)arg0;
- (id)cursor;
- (id)init;
- (void).cxx_destruct;
- (id)requestURL;
- (void)setRequestURL:(id)arg0;
- (void)setCursor:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (id)searchID;
- (void)setSearchID:(id)arg0;
- (void)setDocType:(long long)arg0;
- (void)setFetchCount:(long long)arg0;
- (long long)fetchCount;
- (void)setAdditionalRequestParams:(id)arg0;
- (id)additionalRequestParams;
- (long long)docType;
- (id /* block */)currentCellIndex;

@end
