//
//     Generated by private class-dump
//

@class NSString;

@interface IESECFeedResourceCardCouponTimeInfoModel : MTLModel <MTLJSONSerializing> {
    long long _expireTime;
}

@property (nonatomic) long long expireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)expireTime;
- (void)setExpireTime:(long long)arg0;

@end
