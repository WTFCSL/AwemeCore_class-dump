//
//     Generated by private class-dump
//

@class CJPayServiceDetailModel, UIStackView;

@interface CJPayServiceDetailView : UIView {
    UIStackView *_dynamicView;
    CJPayServiceDetailModel *_detailModel;
}

@property (retain, nonatomic) UIStackView *dynamicView;
@property (retain, nonatomic) CJPayServiceDetailModel *detailModel;

- (void)p_setupUI;
- (id)detailModel;
- (void)setDetailModel:(id)arg0;
- (void)p_setupConstraints;
- (id)dynamicView;
- (void)setDynamicView:(id)arg0;
- (BOOL)p_checkItemModelCanUse:(id)arg0;
- (id)p_createDynamicViewList;
- (id)initWithModel:(id)arg0;
- (void).cxx_destruct;

@end
