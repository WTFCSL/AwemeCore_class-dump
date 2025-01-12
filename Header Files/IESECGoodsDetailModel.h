//
//     Generated by private class-dump
//

@class IESECGoodsDetailCustomButtonModel, NSString, IESECGoodsDetailAddressModel, IESECGoodsCommentModel, IESECGoodsDetailDetailModel, IESECGoodsDetailMiniVideoModel, IESECGoodsDetailControlModel, IESECGoodsDetailMiscModel, IESECGoodsResourceModel, IESECGoodsPOIModel, NSArray, IESECGoodsDetailAuthorEntriesModel, IESECGoodsPriceInfoModel, IESECGoodsBaseModel, IESECGoodsDetailAdditionModel;

@interface IESECGoodsDetailModel : MTLModel <MTLJSONSerializing> {
    IESECGoodsBaseModel *_base;
    IESECGoodsDetailAdditionModel *_addition;
    IESECGoodsCommentModel *_comment;
    IESECGoodsDetailAuthorEntriesModel *_entries;
    IESECGoodsDetailDetailModel *_detail;
    IESECGoodsDetailControlModel *_logicControl;
    IESECGoodsDetailMiscModel *_misc;
    IESECGoodsDetailAddressModel *_addressInfo;
    IESECGoodsPriceInfoModel *_priceInfo;
    IESECGoodsPOIModel *_poiInfo;
    NSArray *_goodsVideoList;
    IESECGoodsDetailMiniVideoModel *_miniWindowVideoModel;
    IESECGoodsResourceModel *_resourceModel;
    IESECGoodsDetailCustomButtonModel *_customBottomButton;
    NSArray *_buttons;
    NSArray *_reverseButtons;
}

@property (readonly, nonatomic) NSArray *recommendTags;
@property (readonly, nonatomic) NSArray *recommendTagsWidthValue;
@property (readonly, nonatomic) BOOL goodRatioAsFirstTag;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) NSArray *reverseButtons;
@property (retain, nonatomic) IESECGoodsBaseModel *base;
@property (retain, nonatomic) IESECGoodsDetailAdditionModel *addition;
@property (retain, nonatomic) IESECGoodsCommentModel *comment;
@property (retain, nonatomic) IESECGoodsDetailAuthorEntriesModel *entries;
@property (retain, nonatomic) IESECGoodsDetailDetailModel *detail;
@property (retain, nonatomic) IESECGoodsDetailControlModel *logicControl;
@property (retain, nonatomic) IESECGoodsDetailMiscModel *misc;
@property (retain, nonatomic) IESECGoodsDetailAddressModel *addressInfo;
@property (retain, nonatomic) IESECGoodsPriceInfoModel *priceInfo;
@property (retain, nonatomic) IESECGoodsPOIModel *poiInfo;
@property (retain, nonatomic) NSArray *goodsVideoList;
@property (retain, nonatomic) IESECGoodsDetailMiniVideoModel *miniWindowVideoModel;
@property (retain, nonatomic) IESECGoodsResourceModel *resourceModel;
@property (retain, nonatomic) IESECGoodsDetailCustomButtonModel *customBottomButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonsJSONTransformer;
+ (id)goodsVideoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)poiInfo;
- (void)setResourceModel:(id)arg0;
- (id)resourceModel;
- (void)setPoiInfo:(id)arg0;
- (void)setAddressInfo:(id)arg0;
- (id)recommendTags;
- (id)lowestPrice;
- (id)priceInfo;
- (void)setPriceInfo:(id)arg0;
- (id)misc;
- (id)customBottomButton;
- (id)logicControl;
- (id)bottomButtons;
- (id)goodsPriceInfoDictForTrack;
- (void)setLogicControl:(id)arg0;
- (void)setMisc:(id)arg0;
- (id)goodsVideoList;
- (void)setGoodsVideoList:(id)arg0;
- (id)miniWindowVideoModel;
- (void)setMiniWindowVideoModel:(id)arg0;
- (void)setCustomBottomButton:(id)arg0;
- (id)reverseButtons;
- (void)setReverseButtons:(id)arg0;
- (BOOL)goodRatioAsFirstTag;
- (id)recommendTagsWidthValue;
- (id)entries;
- (void)setEntries:(id)arg0;
- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (void)setBase:(id)arg0;
- (void)setButtons:(id)arg0;
- (id)base;
- (id)buttons;
- (id)detail;
- (id)comment;
- (id)addressInfo;
- (void)setComment:(id)arg0;
- (id)addition;
- (void)setAddition:(id)arg0;

@end
