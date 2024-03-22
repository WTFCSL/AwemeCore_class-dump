//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESECMallInnerFeedNode;

@interface IESECMallInnerFeedDataSource : IESECListDataController {
    BOOL _flagForPreloadData;
    IESECMallInnerFeedNode *_node;
    long long _dataCount;
    NSMutableDictionary *_hasShownCommentCountIndexMap;
    long long _cursor;
    long long _pageNum;
    NSMutableDictionary *_mixedFeedRequestParams;
}

@property (nonatomic) long long cursor;
@property (nonatomic) long long pageNum;
@property (retain, nonatomic) NSMutableDictionary *mixedFeedRequestParams;
@property (retain, nonatomic) IESECMallInnerFeedNode *node;
@property (nonatomic) BOOL flagForPreloadData;
@property (nonatomic) long long dataCount;
@property (retain, nonatomic) NSMutableDictionary *hasShownCommentCountIndexMap;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)fetchData:(id /* block */)arg0;
- (void)setPageNum:(long long)arg0;
- (long long)pageNum;
- (void)insertPreloadCards:(id)arg0;
- (BOOL)flagForPreloadData;
- (id)hasShownCommentCountIndexMap;
- (void)insertPreloadFirstScreen:(id)arg0 withCursor:(id)arg1;
- (void)modelTransformer:(id)arg0;
- (void)insertPreloadFirstScreen:(id)arg0;
- (id)getMixedFeedRequestParams;
- (void)setFlagForPreloadData:(BOOL)arg0;
- (void)setHasShownCommentCountIndexMap:(id)arg0;
- (id)mixedFeedRequestParams;
- (void)setMixedFeedRequestParams:(id)arg0;
- (long long)cursor;
- (id)node;
- (id)init;
- (void).cxx_destruct;
- (void)setCursor:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (void)setNode:(id)arg0;
- (long long)dataCount;
- (void)setDataCount:(long long)arg0;

@end