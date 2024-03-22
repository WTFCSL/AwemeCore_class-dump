//
//     Generated by private class-dump
//

@class NSArray, NSNumber;

@interface AWEPlaylistListResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_playlistInfo;
    long long _cursor;
    unsigned long long _playlistType;
    NSNumber *_totalCount;
}

@property (retain, nonatomic) NSArray *playlistInfo;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) unsigned long long playlistType;
@property (retain, nonatomic) NSNumber *totalCount;

+ (id)playlistInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)playlistInfo;
- (void)setPlaylistInfo:(id)arg0;
- (long long)cursor;
- (unsigned long long)playlistType;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setPlaylistType:(unsigned long long)arg0;
- (id)totalCount;
- (void)setCursor:(long long)arg0;
- (void)setTotalCount:(id)arg0;

@end