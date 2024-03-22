//
//     Generated by private class-dump
//

@class NSString, TabResponse, TabItem, NSDictionary, IESLiveSearchFrequencyManager, NSMutableArray, HTSLiveFeedDataApi, NSNumber;

@interface IESLiveSearchListDataManager : HTSLiveApi {
    BOOL _hasMore;
    BOOL _fromRec;
    BOOL _showRecommend;
    BOOL _requestOnAir;
    NSMutableArray *_dataSource;
    NSString *_requestID;
    NSDictionary *_logPassback;
    IESLiveSearchFrequencyManager *_frequencyManager;
    NSString *_channelID;
    NSNumber *_offset;
    NSString *_keyword;
    NSString *_enterMethod;
    HTSLiveFeedDataApi *_feedApi;
    TabResponse *_tabModel;
    TabItem *_tabconfig;
}

@property (nonatomic) BOOL requestOnAir;
@property (retain, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) HTSLiveFeedDataApi *feedApi;
@property (retain, nonatomic) TabResponse *tabModel;
@property (retain, nonatomic) TabItem *tabconfig;
@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL fromRec;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL showRecommend;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) IESLiveSearchFrequencyManager *frequencyManager;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (BOOL)enableShowChallenge;
- (BOOL)showRecommend;
- (id)buildEnterRoomSourcePage;
- (id)feedApi;
- (void)setFeedApi:(id)arg0;
- (void)setTabModel:(id)arg0;
- (id)tabModel;
- (void)setFrequencyManager:(id)arg0;
- (id)frequencyManager;
- (BOOL)requestOnAir;
- (void)setRequestOnAir:(BOOL)arg0;
- (id)initWithTabModel:(id)arg0;
- (void)initFeedApi;
- (void)setFromRec:(BOOL)arg0;
- (void)fetchWithKeyword:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)fromRec;
- (void)fetchFeedData:(id /* block */)arg0 first:(BOOL)arg1;
- (BOOL)isDuplicateLive:(id)arg0;
- (id)makeLiveTitle:(id)arg0;
- (void)setShowRecommend:(BOOL)arg0;
- (void)setTabconfig:(id)arg0;
- (void)parseChannelIDFromUrl:(id)arg0;
- (id)tabconfig;
- (id)enterFromParamWithConfig:(id)arg0;
- (void)initialFetchWithKeyword:(id)arg0 enterMethod:(id)arg1 completion:(id /* block */)arg2;
- (void)loadMoreWithcompletion:(id /* block */)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (id)channelID;
- (void).cxx_destruct;
- (void)setOffset:(id)arg0;
- (id)offset;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setChannelID:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;

@end
