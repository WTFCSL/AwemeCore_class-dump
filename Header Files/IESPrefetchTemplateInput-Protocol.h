//
//     Generated by private class-dump
//

@class NSDictionary, NSString, IESPrefetchFlatSchema;

@protocol IESPrefetchTemplateInput <NSObject>

@property (copy, nonatomic) NSDictionary *variables;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) IESPrefetchFlatSchema *schema;
@property (copy, nonatomic) NSString *traceId;

- (void)setTraceId:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)traceId;
- (void)setName:(id)arg0;
- (id)schema;
- (id)name;
- (id)variables;
- (void)setVariables:(id)arg0;

@end
