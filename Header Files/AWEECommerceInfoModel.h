//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECommerceInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_category;
    NSString *_text;
    NSString *_schema;
}

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchema:(id)arg0;
- (id)category;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setCategory:(id)arg0;
- (id)text;
- (id)schema;

@end
