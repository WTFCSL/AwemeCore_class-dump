//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveCommentStructurePart : NSObject {
    unsigned long long _type;
    NSString *_contentValue;
    long long _position;
    long long _length;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *contentValue;
@property (nonatomic) long long position;
@property (nonatomic) long long length;

+ (id)initWithType:(long long)arg0 conentValue:(id)arg1 position:(long long)arg2 length:(long long)arg3;

- (void)setContentValue:(id)arg0;
- (void)setLength:(long long)arg0;
- (void).cxx_destruct;
- (long long)position;
- (unsigned long long)type;
- (void)setPosition:(long long)arg0;
- (long long)length;
- (void)setType:(unsigned long long)arg0;
- (id)contentValue;

@end
