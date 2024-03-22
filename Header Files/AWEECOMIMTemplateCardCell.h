//
//     Generated by private class-dump
//

@class AWEECOMIMDynamicCardErrorView, NSDictionary, UIView, AWEECOMIMDynamicCardContainerView, AWEECOMIMTemplateCardModel;
@protocol AWEECOMIMCardComponentLoadingViewProtocol;

@interface AWEECOMIMTemplateCardCell : AWEECOMIMBaseUserMsgCell {
    AWEECOMIMDynamicCardContainerView *_cardView;
    AWEECOMIMDynamicCardErrorView *_errorView;
    UIView<AWEECOMIMCardComponentLoadingViewProtocol> *_loadingView;
    NSDictionary *_dynamicDataDict;
}

@property (retain, nonatomic) AWEECOMIMDynamicCardContainerView *cardView;
@property (retain, nonatomic) AWEECOMIMDynamicCardErrorView *errorView;
@property (retain, nonatomic) UIView<AWEECOMIMCardComponentLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) NSDictionary *dynamicDataDict;
@property (retain, nonatomic) AWEECOMIMTemplateCardModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)arg0 withModel:(id)arg1;

- (void)setCellModel:(id)arg0;
- (void)didCustomInit;
- (void)fetchDynamicDataAndUpdateCardView;
- (void)updateTemplateModelCallback;
- (void)cardViewDidChangeHeight;
- (id)dynamicDataDict;
- (void)setDynamicDataDict:(id)arg0;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)errorView;
- (void)setErrorView:(id)arg0;

@end
