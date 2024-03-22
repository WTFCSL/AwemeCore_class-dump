//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEInnerPushExitRuleConfig : MTLModel <MTLJSONSerializing> {
    NSArray *_templateTagArray;
    NSArray *_groupTagArray;
    NSArray *_typeTagArray;
}

@property (copy, nonatomic) NSArray *templateTagArray;
@property (copy, nonatomic) NSArray *groupTagArray;
@property (copy, nonatomic) NSArray *typeTagArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateTagArrayJSONTransformer;
+ (id)groupTagArrayJSONTransformer;
+ (id)typeTagArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)templateTagArray;
- (id)groupTagArray;
- (id)typeTagArray;
- (void)setTemplateTagArray:(id)arg0;
- (void)setGroupTagArray:(id)arg0;
- (void)setTypeTagArray:(id)arg0;
- (void).cxx_destruct;

@end