//
//     Generated by private class-dump
//

@interface AWEMusicStreamingImpl.LunaSearchItem : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ entity;
    void /* unknown type, empty encoding */ meta;
    void /* unknown type, empty encoding */ lyricsMatchInfo;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ entity;
@property (nonatomic, retain) void /* unknown type, empty encoding */ meta;
@property (nonatomic, retain) void /* unknown type, empty encoding */ lyricsMatchInfo;

+ (id)entityJSONTransformer;
+ (id)metaJSONTransformer;
+ (id)lyricsMatchInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)lyricsMatchInfo;
- (void)setLyricsMatchInfo:(id)arg0;
- (void)setEntity:(id)arg0;
- (id)entity;
- (id)init;
- (void)setMeta:(id)arg0;
- (id)meta;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;

@end