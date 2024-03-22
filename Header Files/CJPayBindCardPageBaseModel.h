//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayBindCardPageBaseModel : JSONModel <CJPayBindCardPageModelProtocol> {
    NSString *_appId;
    NSString *_merchantId;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;
+ (id)keyMapperDict;
+ (id)keysOfParams;

- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (id)appId;
- (id)merchantId;
- (void)setMerchantId:(id)arg0;

@end