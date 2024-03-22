//
//     Generated by private class-dump
//

@class NSString, NSArray, _TtC21AWEMusicStreamingImpl16LunaMyAlbumState, _TtC21AWEMusicStreamingImpl14LunaAlbumStats;

@interface AWEMusicStreamingImpl.LunaAlbum : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ $__lazy_storage_$_artists;
    void /* unknown type, empty encoding */ company;
    void /* unknown type, empty encoding */ tracksCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_state;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stats;
    void /* unknown type, empty encoding */ cover;
    void /* unknown type, empty encoding */ playerBg;
    void /* unknown type, empty encoding */ releaseDate;
    void /* unknown type, empty encoding */ isFromFeed;
    void /* unknown type, empty encoding */ PCLines;
    void /* unknown type, empty encoding */ coverGradientColors;
    void /* unknown type, empty encoding */ coverShadowColor;
    void /* unknown type, empty encoding */ backgroundColor;
    void /* unknown type, empty encoding */ featuredCommentTagColor;
    void /* unknown type, empty encoding */ intro;
    void /* unknown type, empty encoding */ isExplicit;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ relationMedia;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *artists;
@property (nonatomic, copy) NSString *company;
@property (nonatomic) void /* unknown type, empty encoding */ tracksCount;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaMyAlbumState *state;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaAlbumStats *stats;
@property (nonatomic, retain) void /* unknown type, empty encoding */ cover;
@property (nonatomic, retain) void /* unknown type, empty encoding */ playerBg;
@property (nonatomic) void /* unknown type, empty encoding */ releaseDate;
@property (nonatomic) void /* unknown type, empty encoding */ isFromFeed;
@property (nonatomic, copy) NSArray *PCLines;
@property (nonatomic, copy) NSArray *coverGradientColors;
@property (nonatomic, retain) void /* unknown type, empty encoding */ coverShadowColor;
@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ featuredCommentTagColor;
@property (nonatomic, copy) NSString *intro;
@property (nonatomic) void /* unknown type, empty encoding */ isExplicit;
@property (nonatomic) void /* unknown type, empty encoding */ status;
@property (nonatomic, copy) NSString *relationMedia;

+ (id)coverJSONTransformer;
+ (id)playerBgJSONTransformer;
+ (id)coverGradientColorsJSONTransformer;
+ (id)coverShadowColorJSONTransformer;
+ (id)featuredCommentTagColorJSONTransformer;
+ (id)stateJSONTransformer;
+ (id)statsJSONTransformer;
+ (id)artistsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (id)playerBg;
- (void)setPlayerBg:(id)arg0;
- (id)coverGradientColors;
- (void)setCoverGradientColors:(id)arg0;
- (void)setIsFromFeed:(BOOL)arg0;
- (id)PCLines;
- (void)setPCLines:(id)arg0;
- (id)coverShadowColor;
- (void)setCoverShadowColor:(id)arg0;
- (id)featuredCommentTagColor;
- (void)setFeaturedCommentTagColor:(id)arg0;
- (void)setTracksCount:(long long)arg0;
- (void)setIntro:(id)arg0;
- (BOOL)isFromFeed;
- (id)relationMedia;
- (void)setRelationMedia:(id)arg0;
- (long long)releaseDate;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)state;
- (long long)status;
- (void)setState:(id)arg0;
- (id)id;
- (void)setReleaseDate:(long long)arg0;
- (BOOL)isExplicit;
- (void)setStatus:(long long)arg0;
- (id)initWithCoder:(id)arg0;
- (void)setName:(id)arg0;
- (id)backgroundColor;
- (id)stats;
- (id)name;
- (void)setBackgroundColor:(id)arg0;
- (void)setId:(id)arg0;
- (id)intro;
- (id)company;
- (long long)tracksCount;
- (id)artists;
- (void)setArtists:(id)arg0;
- (void)setIsExplicit:(BOOL)arg0;
- (void)setCompany:(id)arg0;
- (void)setStats:(id)arg0;

@end