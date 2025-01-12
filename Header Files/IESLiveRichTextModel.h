//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESLiveImage, NSNumber;

@interface IESLiveRichTextModel : IESLiveDynamicMTLModel <MTLJSONSerializing, IESLiveRichTextModel>

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) IESLiveImage *img;
@property (retain, nonatomic) NSNumber *fontSize;
@property (retain, nonatomic) NSString *fontColor;
@property (retain, nonatomic) NSNumber *weight;
@property (readonly, nonatomic) long long modelType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithType:(id)arg0 text:(id)arg1 image:(id)arg2 fontSize:(long long)arg3 fontColor:(id)arg4 weight:(long long)arg5;
- (id)initWithPBModel:(id)arg0;
- (long long)modelType;
- (id)attributes;

@end
