//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEPOIItemAnchorContentModel, NSDictionary, AWEPOIAnchorLifeExtraModel, AWEURLModel;

@interface AWEPOITradeAnchorInfo : MTLModel <AWECommentListHeaderViewExtraInfoProtocol, MTLJSONSerializing> {
    float _minorExtendTime;
    NSString *_spuId;
    NSString *_mpAppId;
    AWEURLModel *_icon;
    AWEPOIItemAnchorContentModel *_commentContent;
    NSArray *_minorTags;
    NSDictionary *_anchorSuffix;
    NSArray *_minorExtendActions;
    NSString *_feedLogExtra;
    AWEPOIAnchorLifeExtraModel *_lifeExtra;
    long long _routeType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *mpAppId;
@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) AWEPOIItemAnchorContentModel *commentContent;
@property (retain, nonatomic) NSArray *minorTags;
@property (copy, nonatomic) NSDictionary *anchorSuffix;
@property (retain, nonatomic) NSArray *minorExtendActions;
@property (nonatomic) float minorExtendTime;
@property (copy, nonatomic) NSString *feedLogExtra;
@property (retain, nonatomic) AWEPOIAnchorLifeExtraModel *lifeExtra;
@property (nonatomic) long long routeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)minorTagsJSONTransformer;
+ (id)commentContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)anchorSuffix;
- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)arg0;
- (BOOL)extraIsAdminArea;
- (unsigned long long)extraInfoType;
- (id)minorTags;
- (id)spuId;
- (void)setSpuId:(id)arg0;
- (id)commentContent;
- (id)lifeExtra;
- (void)setLifeExtra:(id)arg0;
- (void)setMinorTags:(id)arg0;
- (void)setAnchorSuffix:(id)arg0;
- (id)mpAppId;
- (void)setMpAppId:(id)arg0;
- (void)setCommentContent:(id)arg0;
- (id)minorExtendActions;
- (void)setMinorExtendActions:(id)arg0;
- (float)minorExtendTime;
- (void)setMinorExtendTime:(float)arg0;
- (id)feedLogExtra;
- (void)setFeedLogExtra:(id)arg0;
- (long long)routeType;
- (id)icon;
- (id)init;
- (void).cxx_destruct;
- (id)iconImageName;
- (void)setIcon:(id)arg0;
- (void)setRouteType:(long long)arg0;
- (id)componentSeparator;

@end
