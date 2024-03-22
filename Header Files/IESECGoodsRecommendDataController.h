//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESECGoodsDetailParameters, IESECGoodsRecommendDataControllerInputParams, NSMutableArray, NSNumber;
@protocol IESECHTTPRequestTask;

@interface IESECGoodsRecommendDataController : IESECListDataController {
    id<IESECHTTPRequestTask> _activatedTask;
    IESECGoodsDetailParameters *_parameters;
    IESECGoodsRecommendDataControllerInputParams *_inputParams;
    long long _currentPage;
    NSNumber *_statusCode;
    NSMutableArray *_requestFeedbackArray;
    NSString *_logID;
    NSNumber *_feedType;
    NSString *_enterFrom;
    NSString *_metaParams;
    unsigned long long _sceneType;
    NSString *_filterStringForNextRequest;
    long long _cursor;
    NSMutableArray *_filterItemList;
    NSDictionary *_feedbackModelConfig;
}

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSMutableArray *filterItemList;
@property (retain, nonatomic) NSDictionary *feedbackModelConfig;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) IESECGoodsRecommendDataControllerInputParams *inputParams;
@property (nonatomic) long long currentPage;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSMutableArray *requestFeedbackArray;
@property (copy, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *feedType;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *metaParams;
@property (nonatomic) unsigned long long sceneType;
@property (copy, nonatomic) NSString *filterStringForNextRequest;

+ (void)feedbackAdDisLikeWithRecommendItem:(id)arg0;
+ (id)filterStringWithRecommendItem:(id)arg0 sceneType:(unsigned long long)arg1;
+ (id)requestRecommendListWithProductID:(id)arg0 pageSize:(long long)arg1 page:(long long)arg2 cursor:(long long)arg3 requestAdditions:(id)arg4 completion:(id /* block */)arg5;
+ (void)fetchFeedbackConfigWithCompletion:(id /* block */)arg0;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)requestNextPageWithCompletion:(id /* block */)arg0;
- (id)metaParams;
- (void)setMetaParams:(id)arg0;
- (id)constructFeedbackString;
- (id)requestFeedbackArray;
- (void)setRequestFeedbackArray:(id)arg0;
- (id)filterItemList;
- (id)constructFilterList;
- (BOOL)shouldLimitPageSizeAccordingToFeedType;
- (void)saveRecommandItem:(id)arg0 requestID:(id)arg1;
- (void)cancelCurrentActivatedRequest;
- (id)filterStringForNextRequest;
- (void)setFilterStringForNextRequest:(id)arg0;
- (void)monitorFavoriteFeedRateEndWithModel:(id)arg0 error:(id)arg1;
- (id)feedbackModelConfig;
- (void)setFeedbackModelConfig:(id)arg0;
- (void)configFeedbackToRecommendList;
- (id)getInputParamsFromParameters:(id)arg0;
- (void)setFilterItemList:(id)arg0;
- (id)statusCode;
- (long long)cursor;
- (void)setStatusCode:(id)arg0;
- (id)init;
- (id)feedType;
- (void)setFeedType:(id)arg0;
- (void).cxx_destruct;
- (void)setCurrentPage:(long long)arg0;
- (void)setParameters:(id)arg0;
- (long long)currentPage;
- (void)reset;
- (void)setCursor:(long long)arg0;
- (id)parameters;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg0;
- (id)logID;
- (id)inputParams;
- (void)setInputParams:(id)arg0;
- (void)setLogID:(id)arg0;

@end
