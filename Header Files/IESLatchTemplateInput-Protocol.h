//
//     Generated by private class-dump
//

@class NSDictionary, NSString, IESLatchFlatSchema;

@protocol IESLatchTemplateInput <NSObject>

@property (copy, nonatomic) NSDictionary *variables;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) IESLatchFlatSchema *schema;
@property (copy, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSDictionary *globalProps;

- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (void)setTraceId:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)traceId;
- (void)setName:(id)arg0;
- (id)schema;
- (id)name;
- (id)variables;
- (void)setVariables:(id)arg0;

@end