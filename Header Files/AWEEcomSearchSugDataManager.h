//
//     Generated by private class-dump
//

@class NSString, AWESearchSugRecommendWordsModel, AWEEcomSearchSugState, NSDictionary, NSMutableArray, UIViewController, AWEEcomSearchViewModel, AWERecommendWordQueryRecordModel;
@protocol AWEHttpTask;

@interface AWEEcomSearchSugDataManager : NSObject {
    BOOL _isSugFromResult;
    NSMutableArray *_dataArray;
    AWEEcomSearchViewModel *_searchViewModel;
    AWEEcomSearchSugState *_sugState;
    AWESearchSugRecommendWordsModel *_guessWordsModel;
    NSString *_requestID;
    NSString *_query;
    AWERecommendWordQueryRecordModel *_wordsQueryRecord;
    NSDictionary *_logPassback;
    UIViewController *_referenceViewController;
    NSString *_selectedContent;
    NSString *_sessionID;
    NSDictionary *_sugExtra;
    double _gapTime;
    NSString *_pitayaUploadInfoString;
    id<AWEHttpTask> _task;
    NSMutableArray *_sugHistoryArray;
}

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (retain, nonatomic) NSMutableArray *sugHistoryArray;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) AWEEcomSearchViewModel *searchViewModel;
@property (retain, nonatomic) AWEEcomSearchSugState *sugState;
@property (retain, nonatomic) AWESearchSugRecommendWordsModel *guessWordsModel;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) AWERecommendWordQueryRecordModel *wordsQueryRecord;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (weak, nonatomic) UIViewController *referenceViewController;
@property (nonatomic) BOOL isSugFromResult;
@property (copy, nonatomic) NSString *selectedContent;
@property (retain, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSDictionary *sugExtra;
@property (nonatomic) double gapTime;
@property (copy, nonatomic) NSString *pitayaUploadInfoString;

- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)setGapTime:(double)arg0;
- (double)gapTime;
- (id)wordsQueryRecord;
- (void)setWordsQueryRecord:(id)arg0;
- (id)searchViewModel;
- (void)setSearchViewModel:(id)arg0;
- (void)p_handleRefreshServerTimeCost:(id)arg0;
- (void)setPitayaUploadInfoString:(id)arg0;
- (id)pitayaUploadInfoString;
- (id)sugExtra;
- (id)sugState;
- (id)getFinalGetUrl:(id)arg0 withParams:(id)arg1;
- (id)getSugParamWithTextFieldParams:(id)arg0;
- (void)saveSugWord:(id)arg0;
- (void)setGuessWordsModel:(id)arg0;
- (BOOL)isSugFromResult;
- (id)getLastSearchQueryParams;
- (id)sugHistoryArray;
- (void)hasBeenSearched;
- (void)fetchSearchSugWithQuery:(id)arg0 type:(unsigned long long)arg1 textFieldParams:(id)arg2 completion:(id /* block */)arg3;
- (void)cleanSugHistory;
- (void)setSugState:(id)arg0;
- (id)guessWordsModel;
- (void)setIsSugFromResult:(BOOL)arg0;
- (void)setSugExtra:(id)arg0;
- (void)setSugHistoryArray:(id)arg0;
- (id)init;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (void)setTask:(id)arg0;
- (id)query;
- (id)task;
- (void)setQuery:(id)arg0;
- (id)dataArray;
- (id)selectedContent;
- (void)setSelectedContent:(id)arg0;
- (void)setDataArray:(id)arg0;
- (id)referenceViewController;
- (void)setReferenceViewController:(id)arg0;

@end
