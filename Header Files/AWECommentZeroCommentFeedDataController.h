//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWECommentZeroCommentFeedDataContext, NSString, NSNumber;

@interface AWECommentZeroCommentFeedDataController : AWEListDataController <AWEZeroCommentFeedDataControllerProtocol> {
    BOOL _isOuter;
    AWECommentZeroCommentFeedDataContext *_context;
    NSNumber *_cursor;
    NSNumber *_level;
    NSMutableDictionary *_filteredToRaw;
    NSMutableDictionary *_rawToFiltered;
}

@property (retain, nonatomic) AWECommentZeroCommentFeedDataContext *context;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *level;
@property (nonatomic) BOOL isOuter;
@property (retain, nonatomic) NSMutableDictionary *filteredToRaw;
@property (retain, nonatomic) NSMutableDictionary *rawToFiltered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)calculateFilteredDataSource;
- (BOOL)isOuter;
- (void)setIsOuter:(BOOL)arg0;
- (id /* block */)isEqualBlock;
- (void)updateWaterfallStateWithIsOuter:(BOOL)arg0 model:(id)arg1;
- (void)requestWithPullType:(long long)arg0 completion:(id /* block */)arg1;
- (id)requestURLString;
- (id)filteredToRaw;
- (void)setFilteredToRaw:(id)arg0;
- (id)rawToFiltered;
- (void)setRawToFiltered:(id)arg0;
- (void)setLevel:(id)arg0;
- (id)cursor;
- (id)initWithContext:(id)arg0;
- (id)level;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setCursor:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end