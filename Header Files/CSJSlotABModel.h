//
//     Generated by private class-dump
//

@class NSString;

@interface CSJSlotABModel : NSObject <NSCoding> {
    NSString *_rit;
    long long _adSlotType;
    NSString *_extra;
    double _timestamp;
}

@property (copy, nonatomic) NSString *rit;
@property (nonatomic) long long adSlotType;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) double timestamp;

- (void)setExtra:(id)arg0;
- (id)rit;
- (void)setAdSlotType:(long long)arg0;
- (long long)adSlotType;
- (void)setupDataWithDictionary:(id)arg0;
- (void)setRit:(id)arg0;
- (BOOL)isMemberOfClass:(Class)arg0;
- (double)timestamp;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (id)initWithDictionary:(id)arg0;
- (BOOL)isValid;
- (id)extra;
- (id)initWithCoder:(id)arg0;
- (void)setTimestamp:(double)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
