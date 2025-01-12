//
//     Generated by private class-dump
//

@class NSArray, NSString, IESLiveBannerCollapse, NSDictionary, NSNumber;

@interface IESLiveBannerListModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *bannerList;
@property (retain, nonatomic) NSString *containerUrl;
@property (retain, nonatomic) NSNumber *bannerHeight;
@property (retain, nonatomic) NSString *lynxUrl;
@property (nonatomic) long long containerType;
@property (retain, nonatomic) NSArray *tokenList;
@property (retain, nonatomic) IESLiveBannerCollapse *collapse;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bannerListJSONTransformer;
+ (id)topRightJSONTransformer;
+ (id)activityTopRightJSONTransformer;
+ (id)bottomRightJSONTransformer;
+ (id)activityVSInteractJSONTransformer;
+ (id)giftPaneJSONTransformer;
+ (id)giftPaneBottomRightJSONTransformer;
+ (id)openLiveJSONTransformer;
+ (id)gameLiveMiddleJSONTransformer;
+ (id)collapseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
