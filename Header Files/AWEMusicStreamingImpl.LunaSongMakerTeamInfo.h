//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEMusicStreamingImpl.LunaSongMakerTeamInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ composers;
    void /* unknown type, empty encoding */ lyricists;
}

@property (nonatomic, copy) NSArray *composers;
@property (nonatomic, copy) NSArray *lyricists;

+ (id)composersJSONTransformer;
+ (id)lyricistsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)composers;
- (void)setComposers:(id)arg0;
- (id)lyricists;
- (void)setLyricists:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;

@end