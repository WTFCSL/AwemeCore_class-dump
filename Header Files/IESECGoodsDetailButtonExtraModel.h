//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsDetailButtonExtraModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _membershipStatus;
    NSString *_buttonText;
    NSString *_joinMemberUrl;
    NSString *_defaultText;
}

@property (nonatomic) unsigned long long membershipStatus;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *joinMemberUrl;
@property (copy, nonatomic) NSString *defaultText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONStringToDictTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)membershipStatus;
- (id)joinMemberUrl;
- (void)setMembershipStatus:(unsigned long long)arg0;
- (void)setJoinMemberUrl:(id)arg0;
- (void).cxx_destruct;
- (id)buttonText;
- (void)setButtonText:(id)arg0;
- (id)defaultText;
- (void)setDefaultText:(id)arg0;

@end
