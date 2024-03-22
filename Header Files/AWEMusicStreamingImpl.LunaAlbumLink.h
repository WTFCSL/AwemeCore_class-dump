//
//     Generated by private class-dump
//

@class NSString, NSArray, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaAlbumLink : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ releaseDate;
    void /* unknown type, empty encoding */ cover;
    void /* unknown type, empty encoding */ playerBg;
    void /* unknown type, empty encoding */ coverGradientColors;
    void /* unknown type, empty encoding */ backgroundColor;
}

@property (nonatomic, readonly) _TtC21AWEMusicStreamingImpl11LunaURLInfo *urlPlayerBg;
@property (nonatomic, readonly) _TtC21AWEMusicStreamingImpl11LunaURLInfo *urlPic;
@property (nonatomic, readonly) _TtC21AWEMusicStreamingImpl11LunaURLInfo *coverImgURLInfo;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) void /* unknown type, empty encoding */ releaseDate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ cover;
@property (nonatomic, retain) void /* unknown type, empty encoding */ playerBg;
@property (nonatomic, copy) NSArray *coverGradientColors;
@property (nonatomic, copy) NSString *backgroundColor;

+ (id)coverJSONTransformer;
+ (id)playerBgJSONTransformer;
+ (id)coverGradientColorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)urlPlayerBg;
- (id)urlPic;
- (id)coverImgURLInfo;
- (id)cover;
- (void)setCover:(id)arg0;
- (id)playerBg;
- (void)setPlayerBg:(id)arg0;
- (id)coverGradientColors;
- (void)setCoverGradientColors:(id)arg0;
- (long long)releaseDate;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)id;
- (void)setReleaseDate:(long long)arg0;
- (id)initWithCoder:(id)arg0;
- (void)setName:(id)arg0;
- (id)backgroundColor;
- (id)name;
- (void)setBackgroundColor:(id)arg0;
- (void)setId:(id)arg0;

@end