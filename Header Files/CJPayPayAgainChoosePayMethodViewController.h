//
//     Generated by private class-dump
//

@class NSString, CJPayBytePayMethodView, UITableViewCell, NSDictionary, CJPayIntegratedChannelModel, CJPayDefaultChannelShowConfig;
@protocol CJPayPayAgainChoosePayMethodDelegate;

@interface CJPayPayAgainChoosePayMethodViewController : CJPayHalfPageBaseViewController <CJPayMethodTableViewDelegate> {
    BOOL _isSkipPwd;
    BOOL _isCombinePay;
    NSDictionary *_payDisabledFundID2ReasonMap;
    unsigned long long _showStyle;
    id<CJPayPayAgainChoosePayMethodDelegate> _delegate;
    CJPayBytePayMethodView *_payMethodView;
    CJPayIntegratedChannelModel *_cardListModel;
    UITableViewCell *_currentSelectedCell;
    CJPayDefaultChannelShowConfig *_currentChannelShowConfig;
    unsigned long long _combineType;
}

@property (retain, nonatomic) CJPayBytePayMethodView *payMethodView;
@property (retain, nonatomic) CJPayIntegratedChannelModel *cardListModel;
@property (retain, nonatomic) UITableViewCell *currentSelectedCell;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentChannelShowConfig;
@property (nonatomic) BOOL isCombinePay;
@property (nonatomic) unsigned long long combineType;
@property (copy, nonatomic) NSDictionary *payDisabledFundID2ReasonMap;
@property (nonatomic) BOOL isSkipPwd;
@property (nonatomic) unsigned long long showStyle;
@property (weak, nonatomic) id<CJPayPayAgainChoosePayMethodDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectAtIndex:(int)arg0;
- (unsigned long long)showStyle;
- (void)p_setupUI;
- (id)currentSelectedCell;
- (void)setCurrentSelectedCell:(id)arg0;
- (void)setShowStyle:(unsigned long long)arg0;
- (BOOL)isCombinePay;
- (void)p_trackerWithEventName:(id)arg0 params:(id)arg1;
- (void)p_tracker;
- (id)payMethodView;
- (void)setPayMethodView:(id)arg0;
- (void)setIsCombinePay:(BOOL)arg0;
- (void)setCombineType:(unsigned long long)arg0;
- (void)didChangeCreditPayInstallment:(id)arg0;
- (void)didSelectAtIndex:(int)arg0 methodCell:(id)arg1;
- (id)payDisabledFundID2ReasonMap;
- (void)setPayDisabledFundID2ReasonMap:(id)arg0;
- (id)cardListModel;
- (id)p_buildModels;
- (BOOL)isSkipPwd;
- (void)setCurrentChannelShowConfig:(id)arg0;
- (id)initWithEcommerceViewModel:(id)arg0;
- (void)setIsSkipPwd:(BOOL)arg0;
- (void)setCardListModel:(id)arg0;
- (id)currentChannelShowConfig;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (unsigned long long)combineType;

@end
