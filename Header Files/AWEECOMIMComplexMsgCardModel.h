//
//     Generated by private class-dump
//

@class AWEECOMIMCardComponentSingleLabelModel, NSString, AWEECOMIMTextComponentModel, NSArray, AWEECOMIMOperationPanelModel, NSMutableArray;

@interface AWEECOMIMComplexMsgCardModel : AWEECOMIMBaseCardModel <AWEECOMIMSubCardBgHeaderProtocol, AWEECOMIMCardComponentCommonTitleViewProtocol> {
    double _spacingBetweenCard;
    NSMutableArray *_originDataTypeArr;
    AWEECOMIMTextComponentModel *_headTextComponentModel;
    long long _headTextPostionStyle;
    NSString *_title;
    NSString *_subTitle;
    NSString *_headerBgImgURLString;
    long long _goodSubType;
    NSArray *_productItemArr;
    AWEECOMIMOperationPanelModel *_cardPanelModel;
    AWEECOMIMCardComponentSingleLabelModel *_productSingleLineModel;
    double _productTotalHeight;
    long long _productPostionStyle;
    double _memberTotalHeight;
    long long _memberPostionStyle;
    NSArray *_couponModelArr;
    long long _couponPostionStyle;
    NSMutableArray *_memberItemArrM;
    NSMutableArray *_couponItemArrM;
    struct CGSize { double width; double height; } _headTextContentSize;
}

@property (nonatomic) double spacingBetweenCard;
@property (retain, nonatomic) NSMutableArray *memberItemArrM;
@property (retain, nonatomic) NSMutableArray *couponItemArrM;
@property (readonly, nonatomic) NSMutableArray *originDataTypeArr;
@property (retain, nonatomic) AWEECOMIMTextComponentModel *headTextComponentModel;
@property (nonatomic) long long headTextPostionStyle;
@property (nonatomic) struct CGSize { double width; double height; } headTextContentSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *headerBgImgURLString;
@property (nonatomic) long long goodSubType;
@property (copy, nonatomic) NSArray *productItemArr;
@property (retain, nonatomic) AWEECOMIMOperationPanelModel *cardPanelModel;
@property (retain, nonatomic) AWEECOMIMCardComponentSingleLabelModel *productSingleLineModel;
@property (nonatomic) double productTotalHeight;
@property (nonatomic) long long productPostionStyle;
@property (nonatomic) double memberTotalHeight;
@property (readonly, nonatomic) NSArray *memberItemArr;
@property (nonatomic) long long memberPostionStyle;
@property (retain, nonatomic) NSArray *couponModelArr;
@property (nonatomic) long long couponPostionStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cardViewClass;
+ (double)spacingBetweenItems;

- (void)updateModelWithData:(id)arg0 encrypted:(BOOL)arg1;
- (void)configFootTextLayoutWithMessage:(id)arg0;
- (void)customInitBodyData;
- (BOOL)respondsToServerNotification:(id)arg0 uuid:(id)arg1 cardType:(id)arg2;
- (id)msgCommonTrackParams;
- (void)reBulildCellFullContentHeight;
- (id)headerBgImgURLString;
- (id)couponItemArrM;
- (void)configSubCardPositionStyle;
- (void)calculateCellHeight;
- (id)originDataTypeArr;
- (void)setHeadTextPostionStyle:(long long)arg0;
- (void)setProductPostionStyle:(long long)arg0;
- (void)setMemberPostionStyle:(long long)arg0;
- (void)setCouponPostionStyle:(long long)arg0;
- (void)parserBodyDictWithContentDict:(id)arg0;
- (void)setHeadTextComponentModel:(id)arg0;
- (void)parserGoodContentWithDict:(id)arg0;
- (double)subCardContentWidth;
- (id)memberItemArrM;
- (void)setGoodSubType:(long long)arg0;
- (void)setProductSingleLineModel:(id)arg0;
- (void)setProductItemArr:(id)arg0;
- (void)setCardPanelModel:(id)arg0;
- (id)cardPanelModel;
- (long long)goodSubType;
- (void)setHeaderBgImgURLString:(id)arg0;
- (void)setHeadTextContentSize:(struct CGSize { double x0; double x1; })arg0;
- (id)headTextComponentModel;
- (struct CGSize { double x0; double x1; })headTextSizeWithHeadTextComponentModel:(id)arg0;
- (id)productItemArr;
- (id)productSingleLineModel;
- (void)setMemberTotalHeight:(double)arg0;
- (id)memberItemArr;
- (double)memberTotalHeight;
- (double)spacingBetweenCard;
- (id)couponModelArr;
- (struct CGSize { double x0; double x1; })headTextContentSize;
- (void)setProductTotalHeight:(double)arg0;
- (double)productTotalHeight;
- (void)receiveCouponWithItemModel:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchCouponStatusWithCouponModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setSpacingBetweenCard:(double)arg0;
- (long long)headTextPostionStyle;
- (long long)productPostionStyle;
- (long long)memberPostionStyle;
- (void)setCouponModelArr:(id)arg0;
- (long long)couponPostionStyle;
- (void)setMemberItemArrM:(id)arg0;
- (void)setCouponItemArrM:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)initWithMessage:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;

@end
