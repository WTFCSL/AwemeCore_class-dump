//
//     Generated by private class-dump
//

@interface AWELearningImpl.LearningTabDataController : AWEListDataController <CSPChunkRequestDelegate> {
    void /* unknown type, empty encoding */ todayExcellentResponse;
    void /* unknown type, empty encoding */ channelList;
    void /* unknown type, empty encoding */ interestResponseModel;
    void /* unknown type, empty encoding */ channelId;
    void /* unknown type, empty encoding */ totalRequestTimes;
    void /* unknown type, empty encoding */ totalRequestTimesForInterest;
    void /* unknown type, empty encoding */ chunkRequestMangaer;
    void /* unknown type, empty encoding */ chunkIndex;
    void /* unknown type, empty encoding */ chunkCompletion;
    void /* unknown type, empty encoding */ loadmoreTask;
    void /* unknown type, empty encoding */ loadmoreBlock;
    void /* unknown type, empty encoding */ beginLoadRequestListHandler;
    void /* unknown type, empty encoding */ endLoadRequestListHandler;
    void /* unknown type, empty encoding */ appendItemListHandler;
}

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)chunkRequestDidEndWithCommonResponse:(id)arg0 withError:(id)arg1 forceCanceled:(BOOL)arg2;
- (void)didReceiveJSON:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
