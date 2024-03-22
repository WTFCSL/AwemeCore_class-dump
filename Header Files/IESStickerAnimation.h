//
//     Generated by private class-dump
//

@class NSArray;

@interface IESStickerAnimation : NSObject <NSCopying> {
    BOOL _isAbsoluteFrameTs;
    unsigned long long _type;
    NSArray *_values;
    NSArray *_frameTs;
    unsigned long long _repeatType;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *values;
@property (copy, nonatomic) NSArray *frameTs;
@property (nonatomic) BOOL isAbsoluteFrameTs;
@property (nonatomic) unsigned long long repeatType;

- (id)frameTs;
- (void)setIsAbsoluteFrameTs:(BOOL)arg0;
- (BOOL)isAbsoluteFrameTs;
- (void)setFrameTs:(id)arg0;
- (id)init;
- (unsigned long long)repeatType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)type;
- (id)values;
- (void)setType:(unsigned long long)arg0;
- (void)setValues:(id)arg0;
- (void)setRepeatType:(unsigned long long)arg0;

@end