//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.BNPlayLyricImp : MTLModel {
    void /* unknown type, empty encoding */ lyric;
    void /* unknown type, empty encoding */ trackColor;
    void /* unknown type, empty encoding */ totalDuration;
    void /* unknown type, empty encoding */ trackID;
    void /* unknown type, empty encoding */ requestID;
    void /* unknown type, empty encoding */ lunaSongMakerTeamInfo;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ translationMetrics;
    void /* unknown type, empty encoding */ lyricHash;
    void /* unknown type, empty encoding */ shouldClear;
    void /* unknown type, empty encoding */ transStartIndex;
    void /* unknown type, empty encoding */ lastIndex;
    void /* unknown type, empty encoding */ lines;
    void /* unknown type, empty encoding */ translationLines;
    void /* unknown type, empty encoding */ translationLineMap;
    void /* unknown type, empty encoding */ lyricParser;
    void /* unknown type, empty encoding */ fromCache;
    void /* unknown type, empty encoding */ hideRequestLyric;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ lyric;
@property (nonatomic, retain) void /* unknown type, empty encoding */ trackColor;
@property (nonatomic) void /* unknown type, empty encoding */ totalDuration;
@property (nonatomic, copy) NSString *trackID;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, retain) void /* unknown type, empty encoding */ lunaSongMakerTeamInfo;
@property (nonatomic, readonly) BOOL hasTranslation;
@property (nonatomic, readonly) BOOL isExpired;
@property (nonatomic) void /* unknown type, empty encoding */ hideRequestLyric;

+ (id)encodingBehaviorsByPropertyKey;

- (void)insertSongMakerTeamInfoToLyricWithTeamInfo:(id)arg0 totalDuration:(double)arg1;
- (void)insertNoLyricHintIfNeedWithTotalDuration:(double)arg0;
- (void)insertLyricContributorInfoIfNeedWithTotalDuration:(double)arg0;
- (id)lunaSongMakerTeamInfo;
- (void)setLunaSongMakerTeamInfo:(id)arg0;
- (BOOL)hasTranslation;
- (BOOL)hideRequestLyric;
- (void)setHideRequestLyric:(BOOL)arg0;
- (id)initWithTrackId:(id)arg0 lyric:(id)arg1 trackColor:(id)arg2 totalDuration:(double)arg3 lunaSongMakerTeamInfo:(id)arg4 requestID:(id)arg5;
- (id)lyric;
- (void)setLyric:(id)arg0;
- (void)setTrackColor:(id)arg0;
- (double)totalDuration;
- (BOOL)isExpired;
- (id)init;
- (void)setRequestID:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (id)requestID;
- (void).cxx_destruct;
- (id)trackID;
- (void)setTrackID:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (void)setTotalDuration:(double)arg0;
- (id)trackColor;

@end
