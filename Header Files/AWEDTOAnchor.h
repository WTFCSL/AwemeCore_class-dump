//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEDTOAnchor : MTLModel <MTLJSONSerializing> {
    BOOL _passiveAnchor;
    NSString *_reserved_kw_id;
    long long _type;
    NSString *_content;
    NSString *_title;
    long long _source;
    NSString *_tag;
    long long _passiveOptions;
    NSDictionary *_publishParams;
    NSDictionary *_lifePublishFinishParams;
}

@property (copy, nonatomic) NSDictionary *icon;
@property (copy, nonatomic) NSString *reserved_kw_id;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL passiveAnchor;
@property (nonatomic) long long passiveOptions;
@property (copy, nonatomic) NSDictionary *publishParams;
@property (copy, nonatomic) NSDictionary *lifePublishFinishParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awe_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_draft;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)passiveAnchor;
- (void)setPassiveAnchor:(BOOL)arg0;
- (long long)passiveOptions;
- (void)setPassiveOptions:(long long)arg0;
- (id)lifePublishFinishParams;
- (void)setLifePublishFinishParams:(id)arg0;
- (id)reserved_kw_id;
- (void)setReserved_kw_id:(id)arg0;
- (id)publishParams;
- (void)setPublishParams:(id)arg0;
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
