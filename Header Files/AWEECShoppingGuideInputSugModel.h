//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECShoppingGuideInputSugModel : MTLModel <MTLJSONSerializing> {
    NSString *_recommendID;
    NSString *_content;
}

@property (copy, nonatomic) NSString *recommendID;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)recommendID;
- (void)setRecommendID:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;

@end