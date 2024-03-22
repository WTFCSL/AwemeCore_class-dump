//
//     Generated by private class-dump
//

@class HTSVideoData;

@interface IESVideoVolumConvertConfig : NSObject {
    long long _type;
    unsigned long long _pointsCount;
    HTSVideoData *_videoData;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long pointsCount;
@property (retain, nonatomic) HTSVideoData *videoData;

- (id)videoData;
- (void)setVideoData:(id)arg0;
- (void)setPointsCount:(unsigned long long)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (unsigned long long)pointsCount;

@end