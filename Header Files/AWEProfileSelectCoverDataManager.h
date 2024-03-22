//
//     Generated by private class-dump
//

@class NSArray, NSString, NSNumber;

@interface AWEProfileSelectCoverDataManager : NSObject {
    BOOL _postWorkHasMore;
    NSArray *_recommendDataList;
    NSArray *_postWorkDataList;
    NSString *_awemeSourceText;
    NSString *_routerSchema;
    NSNumber *_maxCursor;
}

@property (copy, nonatomic) NSArray *recommendDataList;
@property (copy, nonatomic) NSArray *postWorkDataList;
@property (nonatomic) BOOL postWorkHasMore;
@property (copy, nonatomic) NSString *awemeSourceText;
@property (copy, nonatomic) NSString *routerSchema;
@property (copy, nonatomic) NSNumber *maxCursor;

- (id)maxCursor;
- (void)setMaxCursor:(id)arg0;
- (id)awemeSourceText;
- (void)setAwemeSourceText:(id)arg0;
- (id)routerSchema;
- (void)setRouterSchema:(id)arg0;
- (void)setRecommendDataList:(id)arg0;
- (void)setPostWorkDataList:(id)arg0;
- (void)setPostWorkHasMore:(BOOL)arg0;
- (id)postWorkURLString;
- (id)postWorkDataList;
- (BOOL)postWorkHasMore;
- (void)loadMorePostWorkListWithCompletion:(id /* block */)arg0;
- (void)fetchRecommendListWithCompletion:(id /* block */)arg0;
- (void)fetchPostWorkListWithCompletion:(id /* block */)arg0;
- (id)recommendDataList;
- (void).cxx_destruct;

@end