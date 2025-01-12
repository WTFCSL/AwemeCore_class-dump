//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveListABConfigModel : MTLModel <MTLJSONSerializing> {
    BOOL _useListProductCardDesign;
    BOOL _listCellHeaderHotAtmosphere;
    BOOL _listCellHeaderCampaignAtmosphere;
    long long _searchButtonStyle;
    long long _cartAddEnhanceStyle;
    long long _liteListStyle;
    long long _showAuthorConnect;
}

@property (nonatomic) long long searchButtonStyle;
@property (nonatomic) long long cartAddEnhanceStyle;
@property (nonatomic) long long liteListStyle;
@property (nonatomic) long long showAuthorConnect;
@property (nonatomic) BOOL useListProductCardDesign;
@property (nonatomic) BOOL listCellHeaderHotAtmosphere;
@property (nonatomic) BOOL listCellHeaderCampaignAtmosphere;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)searchButtonStyle;
- (void)setSearchButtonStyle:(long long)arg0;
- (long long)cartAddEnhanceStyle;
- (void)setCartAddEnhanceStyle:(long long)arg0;
- (long long)liteListStyle;
- (void)setLiteListStyle:(long long)arg0;
- (long long)showAuthorConnect;
- (void)setShowAuthorConnect:(long long)arg0;
- (BOOL)useListProductCardDesign;
- (void)setUseListProductCardDesign:(BOOL)arg0;
- (BOOL)listCellHeaderHotAtmosphere;
- (void)setListCellHeaderHotAtmosphere:(BOOL)arg0;
- (BOOL)listCellHeaderCampaignAtmosphere;
- (void)setListCellHeaderCampaignAtmosphere:(BOOL)arg0;

@end
