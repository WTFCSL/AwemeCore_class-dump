//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEPLVConfigurableBannerModel : MTLModel <MTLJSONSerializing> {
    NSString *_schema;
    NSString *_title;
    NSString *_coverUrl;
    NSNumber *_bannerID;
}

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSNumber *bannerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (void)setBannerID:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)schema;
- (void)setTitle:(id)arg0;
- (id)bannerID;

@end
