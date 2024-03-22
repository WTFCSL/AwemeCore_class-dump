//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWENaviAnchorNode : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    long long _type;
    NSString *_anchorId;
    NSString *_tag;
    NSString *_openUrl;
    NSString *_content;
    NSString *_icon;
    long long _source;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) long long source;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setOpenUrl:(id)arg0;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (id)openUrl;
- (id)icon;
- (id)init;
- (long long)source;
- (void).cxx_destruct;
- (long long)type;
- (id)content;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)title;
- (void)setType:(long long)arg0;
- (void)setContent:(id)arg0;
- (void)setIcon:(id)arg0;
- (void)setSource:(long long)arg0;
- (void)setTitle:(id)arg0;

@end
