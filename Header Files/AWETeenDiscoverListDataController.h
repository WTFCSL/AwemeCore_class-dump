//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenDiscoverListDataController : AWEListDataController {
    NSString *_channelId;
    long long _channelKind;
    unsigned long long _cursor;
    unsigned long long _cardCursor;
    unsigned long long _albumListCount;
    NSString *_pageToken;
}

@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long cardCursor;
@property (nonatomic) unsigned long long albumListCount;
@property (copy, nonatomic) NSString *pageToken;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) long long channelKind;

+ (void)fetchRecentWatchedWithCompletion:(id /* block */)arg0;
+ (void)p_filterRecentlyWatchSection:(id)arg0;
+ (void)fetchChannelDataWithCompletion:(id /* block */)arg0;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)pageToken;
- (void)setPageToken:(id)arg0;
- (long long)channelKind;
- (void)setChannelKind:(long long)arg0;
- (void)p_fetchWithPullType:(long long)arg0 completion:(id /* block */)arg1;
- (void)teen_loadMoreWithCompletion:(id /* block */)arg0;
- (void)teen_refreshWithCompletion:(id /* block */)arg0;
- (void)teen_initFetchWithCompletion:(id /* block */)arg0;
- (void)setCardCursor:(unsigned long long)arg0;
- (void)setAlbumListCount:(unsigned long long)arg0;
- (unsigned long long)cardCursor;
- (unsigned long long)albumListCount;
- (unsigned long long)cursor;
- (void).cxx_destruct;
- (void)setCursor:(unsigned long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)channelId;
- (void)setChannelId:(id)arg0;

@end
