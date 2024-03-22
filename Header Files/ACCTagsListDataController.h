//
//     Generated by private class-dump
//

@class NSString;

@interface ACCTagsListDataController : NSObject {
    long long _type;
    NSString *_currentFrameUri;
    long long _currentCursor;
}

@property (nonatomic) long long currentCursor;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *currentFrameUri;

- (void)loadMoreWithKeyword:(id)arg0 completion:(id /* block */)arg1;
- (void)searchWithKeyword:(id)arg0 completion:(id /* block */)arg1;
- (void)setCurrentCursor:(long long)arg0;
- (long long)currentCursor;
- (id)currentFrameUri;
- (void)setCurrentFrameUri:(id)arg0;
- (void)fetchRecommendDataWithCompletion:(id /* block */)arg0;
- (id)requestParametersWithKeyword:(id)arg0 requestType:(id)arg1;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)requestURL;

@end
