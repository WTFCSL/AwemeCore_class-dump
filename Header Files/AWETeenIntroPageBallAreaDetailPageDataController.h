//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenIntroPageBallAreaDetailPageDataController : AWEListDataController {
    long long _ballAreaFeedCursor;
    NSString *_pageToken;
}

@property (nonatomic) long long ballAreaFeedCursor;
@property (copy, nonatomic) NSString *pageToken;

- (id)pageToken;
- (void)setPageToken:(id)arg0;
- (void)fetchBallAreaFeed:(id)arg0 DataWithPullType:(long long)arg1 completion:(id /* block */)arg2;
- (void)setBallAreaFeedCursor:(long long)arg0;
- (long long)ballAreaFeedCursor;
- (void)ballArea:(id)arg0 initFetchWithCompletion:(id /* block */)arg1;
- (void)ballArea:(id)arg0 loadMoreWithCompletion:(id /* block */)arg1;
- (void).cxx_destruct;

@end
