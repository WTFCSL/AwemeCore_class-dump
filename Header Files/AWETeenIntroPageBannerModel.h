//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWETeenIntroPageBannerModel : MTLModel <MTLJSONSerializing> {
    NSArray *_bannerList;
}

@property (retain, nonatomic) NSArray *bannerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bannerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bannerList;
- (void)setBannerList:(id)arg0;
- (void).cxx_destruct;

@end
