//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEMusicStreamingImpl.LunaCollectMediaListResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* unknown type, empty encoding */ playlistInfo;
    void /* unknown type, empty encoding */ collectedMedia;
    void /* unknown type, empty encoding */ coverURL;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ playlistInfo;
@property (nonatomic, copy) NSArray *collectedMedia;
@property (nonatomic, retain) void /* unknown type, empty encoding */ coverURL;

+ (id)collectedMediaJSONTransformer;
+ (id)playlistInfoJSONTransformer;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)playlistInfo;
- (void)setPlaylistInfo:(id)arg0;
- (id)collectedMedia;
- (void)setCollectedMedia:(id)arg0;
- (BOOL)isBizSuccess;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
