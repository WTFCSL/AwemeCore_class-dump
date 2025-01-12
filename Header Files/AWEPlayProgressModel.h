//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPlayProgressModel : AWEBaseApiModel {
    double _playProgress;
    double _lastModifiedTime;
    NSString *_progressGuildBar;
    long long _watchTimes;
}

@property (nonatomic) double playProgress;
@property (nonatomic) double lastModifiedTime;
@property (copy, nonatomic) NSString *progressGuildBar;
@property (nonatomic) long long watchTimes;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setLastModifiedTime:(double)arg0;
- (double)playProgress;
- (void)setPlayProgress:(double)arg0;
- (id)progressGuildBar;
- (void)setProgressGuildBar:(id)arg0;
- (long long)watchTimes;
- (void)setWatchTimes:(long long)arg0;
- (void).cxx_destruct;
- (double)lastModifiedTime;

@end
