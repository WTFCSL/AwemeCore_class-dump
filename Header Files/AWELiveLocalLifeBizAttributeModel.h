//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveLocalLifeBizAttributeModel : MTLModel <MTLJSONSerializing> {
    long long _type;
    NSString *_name;
    NSString *_content;
    NSString *_color;
    NSString *_prefixIconUrl;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *prefixIconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)prefixIconUrl;
- (void)setPrefixIconUrl:(id)arg0;
- (id)color;
- (void).cxx_destruct;
- (long long)type;
- (id)content;
- (void)setType:(long long)arg0;
- (void)setContent:(id)arg0;
- (void)setName:(id)arg0;
- (id)name;
- (void)setColor:(id)arg0;

@end