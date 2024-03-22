//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommerceQuickShopProcessModel : MTLModel <MTLJSONSerializing> {
    NSString *_processText;
    NSString *_enterText;
    NSString *_transBgText;
}

@property (copy, nonatomic) NSString *processText;
@property (copy, nonatomic) NSString *enterText;
@property (copy, nonatomic) NSString *transBgText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)processText;
- (void)setProcessText:(id)arg0;
- (id)enterText;
- (void)setEnterText:(id)arg0;
- (id)transBgText;
- (void)setTransBgText:(id)arg0;
- (void).cxx_destruct;

@end