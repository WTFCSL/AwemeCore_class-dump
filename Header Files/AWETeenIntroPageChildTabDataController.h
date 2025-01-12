//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenIntroPageChildTabDataController : AWEListDataController {
    long long _ua;
    long long _channelFeedCursor;
    NSString *_pageToken;
}

@property (nonatomic) long long channelFeedCursor;
@property (copy, nonatomic) NSString *pageToken;
@property (nonatomic) long long ua;

- (void)setUa:(long long)arg0;
- (long long)ua;
- (id)pageToken;
- (void)setPageToken:(id)arg0;
- (void)fetchChildTabFeed:(id)arg0 channelKind:(long long)arg1 withPullType:(long long)arg2 completion:(id /* block */)arg3;
- (void)setChannelFeedCursor:(long long)arg0;
- (long long)channelFeedCursor;
- (void)childTab:(id)arg0 channelKind:(long long)arg1 initFetchWithCompletion:(id /* block */)arg2;
- (void)childTab:(id)arg0 channelKind:(long long)arg1 loadMoreWithCompletion:(id /* block */)arg2;
- (void).cxx_destruct;

@end
