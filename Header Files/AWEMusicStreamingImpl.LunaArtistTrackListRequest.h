//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.LunaArtistTrackListRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* unknown type, empty encoding */ sortType;
    void /* unknown type, empty encoding */ artistID;
    void /* unknown type, empty encoding */ maxCursor;
    void /* unknown type, empty encoding */ count;
}

@property (nonatomic) void /* unknown type, empty encoding */ sortType;
@property (nonatomic, copy) NSString *artistID;
@property (nonatomic, copy) NSString *maxCursor;
@property (nonatomic) void /* unknown type, empty encoding */ count;

- (id)maxCursor;
- (void)setMaxCursor:(id)arg0;
- (id)initWithArtistID:(id)arg0 sortType:(long long)arg1;
- (Class)responseModelClass;
- (void)setCount:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)method;
- (id)path;
- (long long)count;
- (id)params;
- (long long)sortType;
- (void)setSortType:(long long)arg0;
- (id)artistID;
- (void)setArtistID:(id)arg0;

@end
