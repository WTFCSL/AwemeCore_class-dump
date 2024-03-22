//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEECSimilarProductModel : MTLModel <AWECommentListHeaderViewExtraInfoProtocol, MTLJSONSerializing> {
    NSString *_icon;
    NSString *_iconDark;
    NSString *_title;
    NSString *_content;
    NSString *_schema;
    long long _entranceTextType;
    long long _tagLevel;
}

@property (retain, nonatomic) NSMutableDictionary *entranceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *iconDark;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) long long entranceTextType;
@property (nonatomic) long long tagLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)similarProductEntranceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)arg0;
- (id)customExtraView;
- (long long)tagLevel;
- (void)setEntranceInfo:(id)arg0;
- (id)entranceInfo;
- (id)iconDark;
- (void)setIconDark:(id)arg0;
- (long long)entranceTextType;
- (void)setEntranceTextType:(long long)arg0;
- (void)setTagLevel:(long long)arg0;
- (void)setSchema:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)iconImageName;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)schema;
- (void)setTitle:(id)arg0;
- (id)componentSeparator;

@end
