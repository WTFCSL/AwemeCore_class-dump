//
//     Generated by private class-dump
//

@class NSString;

@interface TempoExpressionToken : NSObject {
    long long _type;
    NSString *_value;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *value;

+ (id)tokenWithType:(long long)arg0 value:(id)arg1;

- (void).cxx_destruct;
- (id)value;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setValue:(id)arg0;

@end