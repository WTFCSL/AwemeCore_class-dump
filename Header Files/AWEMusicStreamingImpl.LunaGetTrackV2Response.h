//
//     Generated by private class-dump
//

@interface AWEMusicStreamingImpl.LunaGetTrackV2Response : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* unknown type, empty encoding */ lyric;
    void /* unknown type, empty encoding */ track;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ riskResult;
    void /* unknown type, empty encoding */ expireAt;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ lyric;
@property (nonatomic, retain) void /* unknown type, empty encoding */ track;
@property (nonatomic, retain) void /* unknown type, empty encoding */ player;
@property (nonatomic) void /* unknown type, empty encoding */ riskResult;
@property (nonatomic) void /* unknown type, empty encoding */ expireAt;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lyric;
- (void)setLyric:(id)arg0;
- (long long)expireAt;
- (void)setExpireAt:(long long)arg0;
- (long long)riskResult;
- (void)setRiskResult:(long long)arg0;
- (BOOL)isExpired;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)player;
- (id)track;
- (void)setTrack:(id)arg0;

@end