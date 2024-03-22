//
//     Generated by private class-dump
//

@class AWEURLModel, NSString, NSDictionary, AWEProfileFunctionEntryBadgeModel;

@interface AWEProfileFunctionEntryModel : MTLModel <MTLJSONSerializing> {
    long long _entryID;
    NSString *_title;
    NSString *_subTitle;
    NSString *_gotoURL;
    AWEURLModel *_iconLight;
    AWEURLModel *_iconDark;
    AWEProfileFunctionEntryBadgeModel *_badge;
    NSString *_extraParam;
    NSString *_mobParam;
    unsigned long long _cardType;
    NSDictionary *_extraParamDict;
    NSDictionary *_cardDataDict;
    NSDictionary *_mobParamDict;
}

@property (nonatomic) long long entryID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *gotoURL;
@property (retain, nonatomic) AWEURLModel *iconLight;
@property (retain, nonatomic) AWEURLModel *iconDark;
@property (retain, nonatomic) AWEProfileFunctionEntryBadgeModel *badge;
@property (retain, nonatomic) NSString *extraParam;
@property (copy, nonatomic) NSString *mobParam;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) NSDictionary *extraParamDict;
@property (retain, nonatomic) NSDictionary *cardDataDict;
@property (retain, nonatomic) NSDictionary *mobParamDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)badgeJSONTransformer;
+ (id)iconLightJSONTransformer;
+ (id)iconDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraParam;
- (void)setExtraParam:(id)arg0;
- (id)iconDark;
- (void)setIconDark:(id)arg0;
- (id)iconLight;
- (void)setIconLight:(id)arg0;
- (id)cardDataDict;
- (id)gotoURL;
- (id)extraParamDict;
- (id)mobParamDictToStr;
- (void)setGotoURL:(id)arg0;
- (void)setExtraParamDict:(id)arg0;
- (id)mobParam;
- (id)mobParamDict;
- (void)setMobParam:(id)arg0;
- (void)setCardDataDict:(id)arg0;
- (void)setMobParamDict:(id)arg0;
- (void).cxx_destruct;
- (void)setBadge:(id)arg0;
- (id)badge;
- (id)title;
- (long long)entryID;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg0;
- (void)setEntryID:(long long)arg0;

@end
