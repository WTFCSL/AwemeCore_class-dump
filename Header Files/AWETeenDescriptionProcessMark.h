//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenDescriptionProcessMark : NSObject {
    unsigned long long _type;
    NSString *_value;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *value;

+ (id)initWithType:(unsigned long long)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 withValue:(id)arg2;

- (void).cxx_destruct;
- (id)value;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)setValue:(id)arg0;

@end
