//
//     Generated by private class-dump
//

@class NSArray, NSString, NSNumber;

@interface AWEMiniLunaGetPlaylistsResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_playlists;
    NSString *_cursor;
    NSNumber *_totalNumber;
}

@property (retain, nonatomic) NSArray *playlists;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *cursor;
@property (retain, nonatomic) NSNumber *totalNumber;

+ (id)playlistsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setPlaylists:(id)arg0;
- (id)totalNumber;
- (void)setTotalNumber:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;
- (id)playlists;

@end
