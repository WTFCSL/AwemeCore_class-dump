//
//     Generated by private class-dump
//

@interface IESLiveLinkLiveVideoParam : NSObject {
    long long _width;
    long long _height;
    long long _fps;
    long long _bitRateKbps;
    long long _gop;
}

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long fps;
@property (nonatomic) long long bitRateKbps;
@property (nonatomic) long long gop;

- (long long)gop;
- (void)setGop:(long long)arg0;
- (long long)bitRateKbps;
- (void)setBitRateKbps:(long long)arg0;
- (id)init;
- (long long)height;
- (void)setWidth:(long long)arg0;
- (void)setHeight:(long long)arg0;
- (long long)fps;
- (long long)width;
- (void)setFps:(long long)arg0;

@end
