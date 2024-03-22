//
//     Generated by private class-dump
//

@class _TtC21AWEMusicStreamingImpl16LunaMyTrackState, NSString, NSArray, _TtC21AWEMusicStreamingImpl14LunaMediaStats, _TtC21AWEMusicStreamingImpl18LunaTrackLabelInfo, _TtC21AWEMusicStreamingImpl15LunaTrackChorus, _TtC21AWEMusicStreamingImpl19LunaLimitedFreeInfo, _TtC21AWEMusicStreamingImpl21LunaSongMakerTeamInfo, _TtC21AWEMusicStreamingImpl16LunaTrackPreview;

@interface AWEMusicStreamingImpl.LunaTrack : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ album;
    void /* unknown type, empty encoding */ $__lazy_storage_$_artists;
    void /* unknown type, empty encoding */ duration;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ subName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_preview;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chorus;
    void /* unknown type, empty encoding */ $__lazy_storage_$_state;
    void /* unknown type, empty encoding */ publishedTime;
    void /* unknown type, empty encoding */ vid;
    void /* unknown type, empty encoding */ isInstrumental;
    void /* unknown type, empty encoding */ isFromFeed;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ shareStatus;
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ $__lazy_storage_$_songTeamInfo;
    void /* unknown type, empty encoding */ mediaType;
    void /* unknown type, empty encoding */ simID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bitRates;
    void /* unknown type, empty encoding */ recommendContentSource;
    void /* unknown type, empty encoding */ relationMedia;
    void /* unknown type, empty encoding */ isExplicit;
    void /* unknown type, empty encoding */ digitalTrackInfo;
    void /* unknown type, empty encoding */ trackColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stats;
    void /* unknown type, empty encoding */ $__lazy_storage_$_limitedFreeInfo;
    void /* unknown type, empty encoding */ miniLunaFeature;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, retain) void /* unknown type, empty encoding */ album;
@property (nonatomic, copy) NSArray *artists;
@property (nonatomic) void /* unknown type, empty encoding */ duration;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *subName;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaTrackPreview *preview;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaTrackChorus *chorus;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaMyTrackState *state;
@property (nonatomic) void /* unknown type, empty encoding */ publishedTime;
@property (nonatomic, copy) NSString *vid;
@property (nonatomic) void /* unknown type, empty encoding */ isInstrumental;
@property (nonatomic) void /* unknown type, empty encoding */ isFromFeed;
@property (nonatomic) void /* unknown type, empty encoding */ status;
@property (nonatomic) void /* unknown type, empty encoding */ shareStatus;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaTrackLabelInfo *label;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl21LunaSongMakerTeamInfo *songTeamInfo;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic) void /* unknown type, empty encoding */ simID;
@property (nonatomic, copy) NSArray *bitRates;
@property (nonatomic, copy) NSString *recommendContentSource;
@property (nonatomic, copy) NSString *relationMedia;
@property (nonatomic) void /* unknown type, empty encoding */ isExplicit;
@property (nonatomic, retain) void /* unknown type, empty encoding */ digitalTrackInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ trackColor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaMediaStats *stats;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl19LunaLimitedFreeInfo *limitedFreeInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ miniLunaFeature;

+ (id)stateJSONTransformer;
+ (id)statsJSONTransformer;
+ (id)albumJSONTransformer;
+ (id)artistsJSONTransformer;
+ (id)previewJSONTransformer;
+ (id)chorusJSONTransformer;
+ (id)labelJSONTransformer;
+ (id)songTeamInfoJSONTransformer;
+ (id)bitRatesJSONTransformer;
+ (id)digitalTrackInfoJSONTransformer;
+ (id)trackColorJSONTransformer;
+ (id)limitedFreeInfoJSONTransformer;
+ (id)miniLunaAnchorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)vid;
- (id)chorus;
- (void)setChorus:(id)arg0;
- (void)setVid:(id)arg0;
- (void)setTrackColor:(id)arg0;
- (void)setIsFromFeed:(BOOL)arg0;
- (id)subName;
- (void)setSubName:(id)arg0;
- (long long)publishedTime;
- (void)setPublishedTime:(long long)arg0;
- (BOOL)isInstrumental;
- (void)setIsInstrumental:(BOOL)arg0;
- (BOOL)isFromFeed;
- (id)songTeamInfo;
- (void)setSongTeamInfo:(id)arg0;
- (long long)simID;
- (void)setSimID:(long long)arg0;
- (id)bitRates;
- (void)setBitRates:(id)arg0;
- (id)recommendContentSource;
- (void)setRecommendContentSource:(id)arg0;
- (id)relationMedia;
- (void)setRelationMedia:(id)arg0;
- (id)digitalTrackInfo;
- (void)setDigitalTrackInfo:(id)arg0;
- (id)limitedFreeInfo;
- (void)setLimitedFreeInfo:(id)arg0;
- (id)miniLunaFeature;
- (void)setMiniLunaFeature:(id)arg0;
- (id)album;
- (id)init;
- (void)setMediaType:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)state;
- (id)preview;
- (long long)status;
- (void)setState:(id)arg0;
- (id)mediaType;
- (void)setLabel:(id)arg0;
- (id)id;
- (long long)duration;
- (BOOL)isExplicit;
- (void)setPreview:(id)arg0;
- (void)setStatus:(long long)arg0;
- (id)initWithCoder:(id)arg0;
- (void)setName:(id)arg0;
- (id)label;
- (id)stats;
- (id)name;
- (void)setDuration:(long long)arg0;
- (void)setAlbum:(id)arg0;
- (void)setId:(id)arg0;
- (void)setShareStatus:(long long)arg0;
- (long long)shareStatus;
- (id)artists;
- (void)setArtists:(id)arg0;
- (void)setIsExplicit:(BOOL)arg0;
- (id)trackColor;
- (void)setStats:(id)arg0;

@end