//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEMusicStreamingImpl.PlaylistDeleteTracksResponseInfo : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* unknown type, empty encoding */ playlistInfo;
    void /* unknown type, empty encoding */ mediaArr;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ playlistInfo;
@property (nonatomic, copy) NSArray *mediaArr;

+ (id)playlistInfoJSONTransformer;
+ (id)mediaArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)playlistInfo;
- (void)setPlaylistInfo:(id)arg0;
- (id)mediaArr;
- (void)setMediaArr:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;

@end
