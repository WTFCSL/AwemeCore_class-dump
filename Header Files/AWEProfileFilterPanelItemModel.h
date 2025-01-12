//
//     Generated by private class-dump
//

@class NSString;

@interface AWEProfileFilterPanelItemModel : MTLModel <MTLJSONSerializing> {
    BOOL _isDefaultRule;
    long long _ruleID;
    NSString *_title;
    NSString *_sectionType;
}

@property (nonatomic) long long ruleID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *sectionType;
@property (nonatomic) BOOL isDefaultRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setRuleID:(long long)arg0;
- (BOOL)isDefaultRule;
- (void)setIsDefaultRule:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setSectionType:(id)arg0;
- (id)sectionType;
- (id)title;
- (void)setTitle:(id)arg0;
- (long long)ruleID;

@end
