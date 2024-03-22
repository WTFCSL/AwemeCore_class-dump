//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPadPolymericCampaignModel : MTLModel <MTLJSONSerializing> {
    NSString *_identifier;
    NSString *_title;
    NSString *_subTitle;
    NSString *_cover;
    NSString *_tag;
    NSString *_jumpUrl;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *jumpUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg0;
- (void).cxx_destruct;
- (id)identifier;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setIdentifier:(id)arg0;
- (void)setTitle:(id)arg0;

@end