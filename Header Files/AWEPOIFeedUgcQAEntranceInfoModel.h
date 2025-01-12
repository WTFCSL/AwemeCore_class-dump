//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSValue, NSNumber, AWEURLModel;

@interface AWEPOIFeedUgcQAEntranceInfoModel : MTLModel <AWEPOIDetailFeedUgcModelABParamsProtocol, MTLJSONSerializing> {
    BOOL _showMoreFold;
    NSString *_qaPageUrl;
    AWEURLModel *_iconUrl;
    NSString *_shortPromptText;
    NSString *_qaCountText;
    NSString *_fullPromptText;
    NSString *_footerPromptText;
    long long _emptyRateCardStyle;
    NSString *_headerModuleTitle;
    AWEURLModel *_rateImg;
    NSString *_rateContent;
    NSString *_nextRateContent;
    NSString *_schemaContent;
    NSString *_schemaUrl;
    NSDictionary *_mobParams;
}

@property (retain, nonatomic) NSValue *qaSize;
@property (retain, nonatomic) NSValue *simpleQaSize;
@property (retain, nonatomic) NSValue *guidedQaSize;
@property (retain, nonatomic) NSNumber *shortPromptTop;
@property (retain, nonatomic) NSNumber *countTop;
@property (nonatomic) BOOL hasTrackedShow;
@property (copy, nonatomic) NSDictionary *abParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *qaPageUrl;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (copy, nonatomic) NSString *shortPromptText;
@property (copy, nonatomic) NSString *qaCountText;
@property (copy, nonatomic) NSString *fullPromptText;
@property (copy, nonatomic) NSString *footerPromptText;
@property (nonatomic) long long emptyRateCardStyle;
@property (copy, nonatomic) NSString *headerModuleTitle;
@property (retain, nonatomic) AWEURLModel *rateImg;
@property (copy, nonatomic) NSString *rateContent;
@property (copy, nonatomic) NSString *nextRateContent;
@property (copy, nonatomic) NSString *schemaContent;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) BOOL showMoreFold;
@property (copy, nonatomic) NSDictionary *mobParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mobParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)schemaUrl;
- (void)setSchemaUrl:(id)arg0;
- (id)rateContent;
- (void)setRateContent:(id)arg0;
- (id)abParams;
- (void)setAbParams:(id)arg0;
- (BOOL)hasTrackedShow;
- (void)setHasTrackedShow:(BOOL)arg0;
- (id)mobParams;
- (void)setMobParams:(id)arg0;
- (BOOL)shouldShowRateCard;
- (id)rateImg;
- (id)nextRateContent;
- (id)schemaContent;
- (id)headerModuleTitle;
- (BOOL)showMoreFold;
- (id)footerPromptText;
- (id)qaPageUrl;
- (id)qaSize;
- (id)shortPromptTop;
- (id)countTop;
- (id)shortPromptText;
- (id)qaCountText;
- (id)simpleQaSize;
- (void)setCountTop:(id)arg0;
- (void)setShortPromptTop:(id)arg0;
- (id)fullPromptText;
- (unsigned long long)ugcDisplayStyle;
- (BOOL)hitTitleAB;
- (void)setQaSize:(id)arg0;
- (void)setSimpleQaSize:(id)arg0;
- (id)guidedQaSize;
- (void)setGuidedQaSize:(id)arg0;
- (void)setHeaderModuleTitle:(id)arg0;
- (long long)emptyRateCardStyle;
- (void)setQaPageUrl:(id)arg0;
- (void)setShortPromptText:(id)arg0;
- (void)setQaCountText:(id)arg0;
- (void)setFullPromptText:(id)arg0;
- (void)setFooterPromptText:(id)arg0;
- (void)setEmptyRateCardStyle:(long long)arg0;
- (void)setRateImg:(id)arg0;
- (void)setNextRateContent:(id)arg0;
- (void)setSchemaContent:(id)arg0;
- (void)setShowMoreFold:(BOOL)arg0;
- (void).cxx_destruct;

@end
