//
//     Generated by private class-dump
//

@class NSString, ACCMusicInfo;

@interface ACCMusicEditInfo : MTLModel <MTLJSONSerializing, NSCopying> {
    ACCMusicInfo *_musicInfo;
    long long _startTime;
    long long _duration;
    double _speed;
}

@property (retain, nonatomic) ACCMusicInfo *musicInfo;
@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (nonatomic) double speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)musicInfo;
- (void)setMusicInfo:(id)arg0;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setSpeed:(double)arg0;
- (long long)duration;
- (long long)startTime;
- (double)speed;
- (void)setDuration:(long long)arg0;

@end
