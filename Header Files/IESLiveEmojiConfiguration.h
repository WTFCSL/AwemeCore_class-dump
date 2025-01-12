//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary;

@interface IESLiveEmojiConfiguration : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    BOOL _noRotation;
    BOOL _reshape;
    unsigned long long _type;
    NSArray *_interactEmojis;
    long long _durationMs;
    long long _start;
    long long _timeOffset;
    long long _offset;
    long long _offsetStart;
    long long _scaleUp;
    long long _reshapeStart;
    NSString *_soundURL;
    long long _x;
    long long _y;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *interactEmojis;
@property (nonatomic) long long durationMs;
@property (nonatomic) long long start;
@property (nonatomic) long long timeOffset;
@property (nonatomic) long long offset;
@property (nonatomic) long long offsetStart;
@property (nonatomic) BOOL noRotation;
@property (nonatomic) long long scaleUp;
@property (nonatomic) BOOL reshape;
@property (nonatomic) long long reshapeStart;
@property (retain, nonatomic) NSString *soundURL;
@property (nonatomic) long long x;
@property (nonatomic) long long y;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interactEmojisJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setReshape:(BOOL)arg0;
- (long long)reshapeStart;
- (id)interactEmojis;
- (void)setInteractEmojis:(id)arg0;
- (long long)offsetStart;
- (void)setOffsetStart:(long long)arg0;
- (BOOL)noRotation;
- (void)setNoRotation:(BOOL)arg0;
- (void)setReshapeStart:(long long)arg0;
- (void)setTimeOffset:(long long)arg0;
- (void)setStart:(long long)arg0;
- (long long)timeOffset;
- (void).cxx_destruct;
- (void)setOffset:(long long)arg0;
- (unsigned long long)type;
- (void)setY:(long long)arg0;
- (long long)y;
- (long long)x;
- (long long)offset;
- (void)setType:(unsigned long long)arg0;
- (void)setX:(long long)arg0;
- (long long)start;
- (BOOL)reshape;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg0;
- (id)soundURL;
- (void)setSoundURL:(id)arg0;
- (void)setScaleUp:(long long)arg0;
- (long long)scaleUp;

@end
