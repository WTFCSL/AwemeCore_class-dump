//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, BDPCDDynamicCardParserUtil, BDPCDDynamicCardParserConfig;

@interface BDPCDDynamicCardTemplateModel : NSObject {
    BOOL _enableQuery;
    BOOL _canParse;
    BOOL _isSupport;
    BOOL _openWindowAndRefresh;
    BOOL _cardHeaderHasEnableQuery;
    NSString *_cardID;
    NSString *_templateType;
    NSString *_cardEntityType;
    NSString *_cardSourceScene;
    BOOL *_needLowVersionTemplate;
    NSString *_rawNeedLowVersionTemplate;
    long long _schemaVersion;
    NSString *_rawSchemaVersion;
    NSString *_cardVersion;
    NSString *_cardType;
    NSString *_appSDKVersion;
    NSDictionary *_staticData;
    NSArray *_containerUIModelArr;
    NSString *_unSupportStr;
    NSString *_btmCid;
    BDPCDDynamicCardParserUtil *_parserUtil;
    NSString *_unitBtmIdStr;
    long long _cardState;
    id /* block */ _btnTapCallback;
    id /* block */ _transferSchemaWithBtmIDCallback;
    id /* block */ _transferSchemaCallback;
    id /* block */ _fetchDataAndUpdateCardViewCallback;
    id /* block */ _dealBtmCustomActionCallback;
    id /* block */ _dealNoBtmCidCallback;
    BDPCDDynamicCardParserConfig *_config;
    NSString *_buttonNamesStr;
    NSDictionary *_nodeDict;
    NSDictionary *_rootDict;
    NSDictionary *_originExtDict;
    NSDictionary *_dynamicData;
}

@property (retain, nonatomic) BDPCDDynamicCardParserUtil *parserUtil;
@property (copy, nonatomic) NSDictionary *nodeDict;
@property (copy, nonatomic) NSDictionary *rootDict;
@property (copy, nonatomic) NSDictionary *originExtDict;
@property (copy, nonatomic) NSDictionary *dynamicData;
@property (nonatomic) BOOL cardHeaderHasEnableQuery;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *templateType;
@property (copy, nonatomic) NSString *cardEntityType;
@property (copy, nonatomic) NSString *cardSourceScene;
@property (nonatomic) BOOL enableQuery;
@property (nonatomic) BOOL *needLowVersionTemplate;
@property (copy, nonatomic) NSString *rawNeedLowVersionTemplate;
@property (nonatomic) long long schemaVersion;
@property (copy, nonatomic) NSString *rawSchemaVersion;
@property (copy, nonatomic) NSString *cardVersion;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *appSDKVersion;
@property (copy, nonatomic) NSDictionary *staticData;
@property (copy, nonatomic) NSArray *containerUIModelArr;
@property (nonatomic) BOOL canParse;
@property (nonatomic) BOOL isSupport;
@property (copy, nonatomic) NSString *unSupportStr;
@property (copy, nonatomic) NSString *btmCid;
@property (copy, nonatomic) NSString *unitBtmIdStr;
@property (nonatomic) long long cardState;
@property (copy, nonatomic) id /* block */ btnTapCallback;
@property (copy, nonatomic) id /* block */ transferSchemaWithBtmIDCallback;
@property (copy, nonatomic) id /* block */ transferSchemaCallback;
@property (copy, nonatomic) id /* block */ fetchDataAndUpdateCardViewCallback;
@property (copy, nonatomic) id /* block */ dealBtmCustomActionCallback;
@property (copy, nonatomic) id /* block */ dealNoBtmCidCallback;
@property (nonatomic) BOOL openWindowAndRefresh;
@property (retain, nonatomic) BDPCDDynamicCardParserConfig *config;
@property (copy, nonatomic) NSString *buttonNamesStr;

+ (BOOL)validateResponse:(id)arg0;
+ (id)messageFromResponse:(id)arg0;

- (void)setIsSupport:(BOOL)arg0;
- (BOOL)isSupport;
- (long long)cardState;
- (void)setCardState:(long long)arg0;
- (id)btmCid;
- (void)setBtmCid:(id)arg0;
- (void)setButtonNamesStr:(id)arg0;
- (id)buttonNamesStr;
- (id)cardSourceScene;
- (id)staticData;
- (id)cardEntityType;
- (BOOL)canParse;
- (BOOL)openWindowAndRefresh;
- (void)setOpenWindowAndRefresh:(BOOL)arg0;
- (BOOL)enableQuery;
- (void)setUnitBtmIdStr:(id)arg0;
- (void)dealCustomActionWithCustomActionList:(id)arg0 contextDict:(id)arg1;
- (id)containerUIModelArr;
- (id)unSupportStr;
- (void)fetchDynamicDataWithIdentifier:(id)arg0 completion:(id /* block */)arg1;
- (void)setBtnTapCallback:(id /* block */)arg0;
- (void)setTransferSchemaCallback:(id /* block */)arg0;
- (void)setTransferSchemaWithBtmIDCallback:(id /* block */)arg0;
- (void)setFetchDataAndUpdateCardViewCallback:(id /* block */)arg0;
- (void)setDealBtmCustomActionCallback:(id /* block */)arg0;
- (void)setDealNoBtmCidCallback:(id /* block */)arg0;
- (id)initWithExtDict:(id)arg0 config:(id)arg1;
- (void)setContainerUIModelArr:(id)arg0;
- (id)dynamicData;
- (void)setDynamicData:(id)arg0;
- (void)setOriginExtDict:(id)arg0;
- (id)originExtDict;
- (id)cardVersion;
- (void)setNodeDict:(id)arg0;
- (id)nodeDict;
- (void)setCardVersion:(id)arg0;
- (void)setCanParse:(BOOL)arg0;
- (void)setStaticData:(id)arg0;
- (void)initTemplateDict:(id)arg0;
- (BOOL)cardHeaderHasEnableQuery;
- (void)updateTemplate:(id)arg0 shouldRebind:(BOOL)arg1;
- (void)rebindCardUIModelArr;
- (void)updateTemplateWithDynamicData:(id)arg0;
- (id)parserUtil;
- (id)getAllButtonName:(id)arg0;
- (id)getButtonName:(id)arg0;
- (void)fetchCardInfoV2WithCompletion:(id /* block */)arg0;
- (void)postTemplateCardActionV2WithParams:(id)arg0 completion:(id /* block */)arg1;
- (id)templateCardActionData:(id)arg0;
- (void)updateWithDynamicData:(id)arg0 uniqueId:(id)arg1;
- (void)fetchCardInfoWithCompletion:(id /* block */)arg0;
- (id)unitBtmIdStr;
- (id /* block */)transferSchemaWithBtmIDCallback;
- (id /* block */)transferSchemaCallback;
- (id /* block */)btnTapCallback;
- (id /* block */)fetchDataAndUpdateCardViewCallback;
- (void)postTemplateCardActionWithParams:(id)arg0 completion:(id /* block */)arg1;
- (id /* block */)dealNoBtmCidCallback;
- (id /* block */)dealBtmCustomActionCallback;
- (void)updateWithDynamicData:(id)arg0;
- (void)setCardEntityType:(id)arg0;
- (void)setCardSourceScene:(id)arg0;
- (void)setEnableQuery:(BOOL)arg0;
- (BOOL *)needLowVersionTemplate;
- (void)setNeedLowVersionTemplate:(BOOL *)arg0;
- (id)rawNeedLowVersionTemplate;
- (void)setRawNeedLowVersionTemplate:(id)arg0;
- (id)rawSchemaVersion;
- (void)setRawSchemaVersion:(id)arg0;
- (id)appSDKVersion;
- (void)setAppSDKVersion:(id)arg0;
- (void)setUnSupportStr:(id)arg0;
- (void)setParserUtil:(id)arg0;
- (id)rootDict;
- (void)setRootDict:(id)arg0;
- (void)setCardHeaderHasEnableQuery:(BOOL)arg0;
- (long long)schemaVersion;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setTemplateType:(id)arg0;
- (void)setSchemaVersion:(long long)arg0;
- (id)templateType;
- (id)cardType;
- (void)setCardType:(id)arg0;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end
