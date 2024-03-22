//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOPublishUserDeclarationOption : MTLModel <MTLJSONSerializing> {
    NSString *_text;
    NSString *_value;
    NSString *_imageUrl;
    NSString *_routerUrl;
    NSString *_group;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *routerUrl;
@property (copy, nonatomic) NSString *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)routerUrl;
- (void)setRouterUrl:(id)arg0;
- (void).cxx_destruct;
- (id)value;
- (void)setText:(id)arg0;
- (id)group;
- (id)text;
- (void)setValue:(id)arg0;
- (void)setGroup:(id)arg0;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;

@end