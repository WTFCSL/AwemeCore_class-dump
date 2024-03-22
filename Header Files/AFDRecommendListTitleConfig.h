//
//     Generated by private class-dump
//

@class NSString;

@interface AFDRecommendListTitleConfig : MTLModel <MTLJSONSerializing> {
    NSString *_titleNegative;
    NSString *_titlePositive;
    NSString *_changeSetting;
    NSString *_bottomContent;
}

@property (retain, nonatomic) NSString *titleNegative;
@property (retain, nonatomic) NSString *titlePositive;
@property (retain, nonatomic) NSString *changeSetting;
@property (retain, nonatomic) NSString *bottomContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)titleNegative;
- (id)titlePositive;
- (id)changeSetting;
- (id)bottomContent;
- (void)setTitleNegative:(id)arg0;
- (void)setTitlePositive:(id)arg0;
- (void)setChangeSetting:(id)arg0;
- (void)setBottomContent:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;

@end
