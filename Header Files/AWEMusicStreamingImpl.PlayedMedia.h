//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.PlayedMedia : NSObject {
    void /* unknown type, empty encoding */ playedMills;
    void /* unknown type, empty encoding */ mediaID;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ duration;
}

@property (nonatomic) void /* unknown type, empty encoding */ playedMills;
@property (nonatomic, copy) NSString *mediaID;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) void /* unknown type, empty encoding */ duration;

- (long long)playedMills;
- (void)setPlayedMills:(long long)arg0;
- (id)initWithMedia:(id)arg0 playedMills:(long long)arg1 duration:(long long)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)type;
- (long long)duration;
- (void)setType:(id)arg0;
- (void)setDuration:(long long)arg0;
- (void)setMediaID:(id)arg0;
- (id)mediaID;

@end
