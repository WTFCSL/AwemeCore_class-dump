//
//     Generated by private class-dump
//

@class NSString, BDXLynxMapContentStyleModel;

@interface BDXLynxMapTextModel : MTLModel <MTLJSONSerializing> {
    NSString *_content;
    BDXLynxMapContentStyleModel *_contentStyle;
}

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) BDXLynxMapContentStyleModel *contentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelsWithArray:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;
- (id)contentStyle;
- (void)setContentStyle:(id)arg0;

@end