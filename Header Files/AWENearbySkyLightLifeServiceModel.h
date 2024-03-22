//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWENearbySkyLightLifeServiceModel : MTLModel <MTLJSONSerializing> {
    AWEURLModel *_iconUrl;
    NSString *_title;
    NSString *_schema;
}

@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)schema;
- (void)setTitle:(id)arg0;

@end