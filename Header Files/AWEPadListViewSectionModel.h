//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEPadListViewHeaderModel, NSDictionary, AWEPLVSectionGridConfigModel, AWEPadPolymericChannelCardSizeFormulaModel;

@interface AWEPadListViewSectionModel : MTLModel <MTLJSONSerializing, AWEPLVSectionModelProtocol> {
    BOOL _enableLight;
    long long _sectionType;
    long long _sectionInteractType;
    NSString *_identifier;
    AWEPadPolymericChannelCardSizeFormulaModel *_cardSizeFormula;
    NSArray *_cardList;
    AWEPadListViewHeaderModel *_sectionHeader;
    NSDictionary *_sectionConfigRawData;
    NSDictionary *_logPB;
    AWEPLVSectionGridConfigModel *_sectionGridConfig;
    NSDictionary *_cardConfig;
}

@property (nonatomic) long long sectionType;
@property (nonatomic) long long sectionInteractType;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEPadPolymericChannelCardSizeFormulaModel *cardSizeFormula;
@property (retain, nonatomic) NSArray *cardList;
@property (retain, nonatomic) AWEPadListViewHeaderModel *sectionHeader;
@property (retain, nonatomic) NSDictionary *sectionConfigRawData;
@property (retain, nonatomic) NSDictionary *logPB;
@property (retain, nonatomic) AWEPLVSectionGridConfigModel *sectionGridConfig;
@property (retain, nonatomic) NSDictionary *cardConfig;
@property (nonatomic) BOOL enableLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardListJSONTransformer;
+ (id)sectionHeaderJSONTransformer;
+ (id)sectionGridConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cardList;
- (void)setCardList:(id)arg0;
- (id)cardConfig;
- (void)setCardConfig:(id)arg0;
- (id)logPB;
- (void)setLogPB:(id)arg0;
- (id)cardSizeFormula;
- (long long)sectionInteractType;
- (void)setSectionInteractType:(long long)arg0;
- (void)setCardSizeFormula:(id)arg0;
- (id)sectionConfigRawData;
- (void)setSectionConfigRawData:(id)arg0;
- (id)sectionGridConfig;
- (void)setSectionGridConfig:(id)arg0;
- (BOOL)enableLight;
- (void)setEnableLight:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setSectionType:(long long)arg0;
- (long long)sectionType;
- (id)identifier;
- (id)sectionHeader;
- (void)setIdentifier:(id)arg0;
- (void)setSectionHeader:(id)arg0;

@end
