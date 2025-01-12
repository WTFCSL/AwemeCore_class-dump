//
//     Generated by private class-dump
//

@class AWESmartFeedLastViewModel, AWEConcernFeedResponseMonitor, AWEConcernFeedRequestParamBuilder, NSString;

@interface AWEConcernFeedDataController : AWEListDataController <AWEConcernFeedDataControllerProtocol> {
    BOOL isUploadAwemeInsertedBeforeInitialFetch;
    BOOL currentRequestContainsForceInsert;
    long long _level;
    AWESmartFeedLastViewModel *lastViewModel;
    NSString *blankPanelText;
    NSString *_previousPageValue;
    AWEConcernFeedRequestParamBuilder *_paramsBuilder;
    AWEConcernFeedResponseMonitor *_responseMonitor;
}

@property (retain, nonatomic) AWEConcernFeedRequestParamBuilder *paramsBuilder;
@property (retain, nonatomic) AWEConcernFeedResponseMonitor *responseMonitor;
@property (retain, nonatomic) AWESmartFeedLastViewModel *lastViewModel;
@property (nonatomic) BOOL isUploadAwemeInsertedBeforeInitialFetch;
@property (copy, nonatomic) NSString *blankPanelText;
@property (copy, nonatomic) NSString *previousPageValue;
@property (nonatomic) long long level;
@property (nonatomic) BOOL currentRequestContainsForceInsert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)setPreviousPageValue:(id)arg0;
- (BOOL)isUploadAwemeInsertedBeforeInitialFetch;
- (void)setIsUploadAwemeInsertedBeforeInitialFetch:(BOOL)arg0;
- (id)lastViewModel;
- (void)setLastViewModel:(id)arg0;
- (id)blankPanelText;
- (void)setBlankPanelText:(id)arg0;
- (id)previousPageValue;
- (void)albumAppendImagesNotificationHandler:(id)arg0;
- (id)paramsBuilder;
- (void)didFinishRequestType:(unsigned long long)arg0 response:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)requestFollowFeedWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)didFinishLoadMoreWithResponse:(id)arg0 error:(id)arg1 completion:(id /* block */)arg2;
- (void)updateConcernCardListInfo:(id)arg0 feedPullType:(unsigned long long)arg1;
- (id)filterDuplicatedAwemeWithArray:(id)arg0 requestID:(id)arg1;
- (BOOL)shouldSaveAwemeBeforeInitRequest;
- (void)didFinishTransferResponse:(id)arg0 toAwemeList:(id)arg1 pullType:(unsigned long long)arg2;
- (id)responseMonitor;
- (void)setCurrentRequestContainsForceInsert:(BOOL)arg0;
- (BOOL)currentRequestContainsForceInsert;
- (void)setParamsBuilder:(id)arg0;
- (void)setResponseMonitor:(id)arg0;
- (void)setLevel:(long long)arg0;
- (id)init;
- (long long)level;
- (void).cxx_destruct;
- (id)urlPath;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
