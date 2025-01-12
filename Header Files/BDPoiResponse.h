//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface BDPoiResponse : NSObject <NSCopying> {
    long long _total;
    long long _length;
    long long _page;
    long long _size;
    NSArray *_poiList;
    NSDictionary *_poiInfos;
}

@property (nonatomic) long long total;
@property (nonatomic) long long length;
@property (nonatomic) long long page;
@property (nonatomic) long long size;
@property (copy, nonatomic) NSArray *poiList;
@property (copy, nonatomic) NSDictionary *poiInfos;

+ (id)responeWithDictionary:(id)arg0;

- (void)setPoiList:(id)arg0;
- (void)setPoiInfos:(id)arg0;
- (id)poiList;
- (id)poiInfos;
- (long long)total;
- (void)setLength:(long long)arg0;
- (long long)page;
- (void).cxx_destruct;
- (void)setPage:(long long)arg0;
- (long long)length;
- (long long)size;
- (void)setSize:(long long)arg0;
- (void)setTotal:(long long)arg0;

@end
