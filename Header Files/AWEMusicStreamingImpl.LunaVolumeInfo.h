//
//     Generated by private class-dump
//

@interface AWEMusicStreamingImpl.LunaVolumeInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ loudness;
    void /* unknown type, empty encoding */ peak;
}

@property (nonatomic) void /* unknown type, empty encoding */ loudness;
@property (nonatomic) void /* unknown type, empty encoding */ peak;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (id)initWithCoder:(id)arg0;
- (double)loudness;
- (void)setLoudness:(double)arg0;
- (double)peak;
- (void)setPeak:(double)arg0;

@end
