//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEVoiceOverRuleItemModel : MTLModel <MTLJSONSerializing> {
    NSString *_aid;
    NSString *_focus;
    NSString *_traits;
    NSString *_container;
    NSArray *_label;
}

@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *focus;
@property (copy, nonatomic) NSString *traits;
@property (copy, nonatomic) NSString *container;
@property (copy, nonatomic) NSArray *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)nextPathConfig;
- (id)container;
- (id)traits;
- (void).cxx_destruct;
- (void)setTraits:(id)arg0;
- (void)setContainer:(id)arg0;
- (void)setLabel:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)focus;
- (id)label;
- (void)setFocus:(id)arg0;
- (void)setAid:(id)arg0;
- (id)aid;

@end
