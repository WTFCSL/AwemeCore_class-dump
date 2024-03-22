//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, NSNumber;
@protocol AWEHttpTask;

@interface ACCMusicFavoriteListRepository : NSObject <ACCMusicListRepositoryProtocol> {
    BOOL _hasMore;
    NSDictionary *_bizParams;
    unsigned long long _countPerPage;
    NSNumber *_channelId;
    NSArray *_musicList;
    unsigned long long _cursor;
    id<AWEHttpTask> _requestTask;
}

@property (retain, nonatomic) NSArray *musicList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (nonatomic) unsigned long long countPerPage;
@property (retain, nonatomic) NSNumber *channelId;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bizParams;
- (void)setBizParams:(id)arg0;
- (id)musicList;
- (void)setMusicList:(id)arg0;
- (void)toggleMusicId:(id)arg0 favorite:(BOOL)arg1;
- (BOOL)fetchWithParams:(id)arg0 completion:(id /* block */)arg1;
- (unsigned long long)countPerPage;
- (void)toggleMusic:(id)arg0 favorite:(BOOL)arg1;
- (unsigned long long)recTypeOfMusic:(id)arg0;
- (void)setCountPerPage:(unsigned long long)arg0;
- (unsigned long long)cursor;
- (void)setRequestTask:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)requestTask;
- (void)reset;
- (void)setCursor:(unsigned long long)arg0;
- (id)channelId;
- (void)setChannelId:(id)arg0;

@end