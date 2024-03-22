//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicMVEditInfo : MTLModel <ACCMusicMVEditInfoProtocol, MTLJSONSerializing> {
    long long _templateID;
    long long _startTime;
    long long _duration;
    double _speed;
}

@property (nonatomic) long long templateID;
@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (nonatomic) double speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long templateID;
@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (nonatomic) double speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setStartTime:(long long)arg0;
- (long long)templateID;
- (void)setSpeed:(double)arg0;
- (long long)duration;
- (long long)startTime;
- (void)setTemplateID:(long long)arg0;
- (double)speed;
- (void)setDuration:(long long)arg0;

@end