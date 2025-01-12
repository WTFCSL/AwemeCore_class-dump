//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGameModel : MTLModel <MTLJSONSerializing> {
    NSString *_identifier;
    NSString *_coverUrl;
    NSString *_name;
    NSString *_subLabel;
    NSString *_schema;
    NSString *_badge;
    NSString *_badgeColor;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subLabel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *badge;
@property (copy, nonatomic) NSString *badgeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (void)setBadge:(id)arg0;
- (id)badge;
- (id)badgeColor;
- (void)setBadgeColor:(id)arg0;
- (id)identifier;
- (void)setName:(id)arg0;
- (id)schema;
- (id)name;
- (void)setIdentifier:(id)arg0;
- (id)subLabel;
- (void)setSubLabel:(id)arg0;

@end
