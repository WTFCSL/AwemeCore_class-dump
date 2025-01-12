//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWETeenAlbumCollectListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_albums;
    unsigned long long _cursor;
    unsigned long long _count;
    NSString *_pageToken;
}

@property (copy, nonatomic) NSArray *albums;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *pageToken;

+ (id)albumsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)pageToken;
- (void)setPageToken:(id)arg0;
- (void)setCount:(unsigned long long)arg0;
- (unsigned long long)cursor;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)albums;
- (void)setCursor:(unsigned long long)arg0;
- (void)setAlbums:(id)arg0;

@end
