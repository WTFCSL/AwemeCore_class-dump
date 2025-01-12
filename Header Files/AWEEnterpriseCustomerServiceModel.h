//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEEnterpriseCustomerServiceModel : MTLModel <MTLJSONSerializing> {
    long long _aweType;
    NSString *_pushDetail;
    NSString *_cardId;
    NSArray *_templateAry;
}

@property (nonatomic) long long aweType;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSArray *templateAry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)templateAry;
- (long long)aweType;
- (void)setAweType:(long long)arg0;
- (id)pushDetail;
- (void)setPushDetail:(id)arg0;
- (void)setTemplateAry:(id)arg0;
- (void).cxx_destruct;
- (id)cardId;
- (void)setCardId:(id)arg0;

@end
