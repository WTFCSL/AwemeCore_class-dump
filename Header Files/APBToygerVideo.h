//
//     Generated by private class-dump
//

@interface APBToygerVideo : NSObject {
    BOOL _enable;
    long long _width;
    long long _height;
    long long _duration;
    long long _bitrate;
    long long _fps;
}

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long duration;
@property (nonatomic) long long bitrate;
@property (nonatomic) long long fps;
@property (nonatomic) BOOL enable;

+ (id)defaultConfig;

- (BOOL)enable;
- (long long)height;
- (long long)bitrate;
- (long long)duration;
- (void)setWidth:(long long)arg0;
- (void)setEnable:(BOOL)arg0;
- (void)setHeight:(long long)arg0;
- (long long)fps;
- (long long)width;
- (void)setDuration:(long long)arg0;
- (void)setBitrate:(long long)arg0;
- (void)setFps:(long long)arg0;

@end
