//
//     Generated by private class-dump
//

@class NSString;

@interface BDPAdModel : NSObject <NSCopying, NSCoding> {
    NSString *_adid;
    NSString *_type;
    long long _status;
    long long _isAllowedInLive;
}

@property (copy, nonatomic) NSString *adid;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long status;
@property (nonatomic) long long isAllowedInLive;

+ (id)modelCustomPropertyMapper;
+ (void)bootstrapLaunch;

- (id)adid;
- (void)setAdid:(id)arg0;
- (long long)isAllowedInLive;
- (void)setIsAllowedInLive:(long long)arg0;
- (void).cxx_destruct;
- (long long)status;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)type;
- (void)setType:(id)arg0;
- (void)setStatus:(long long)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end