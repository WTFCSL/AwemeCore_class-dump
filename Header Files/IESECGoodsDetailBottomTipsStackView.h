//
//     Generated by private class-dump
//

@class IESECLLDCLynxManager, NSString, IESECGoodsDetailBottomDataModel, UIView, NSMutableArray, IESECGoodsDetailBottomMetaModel;

@interface IESECGoodsDetailBottomTipsStackView : UIStackView <IESECGoodsDetailContainerBottomTipsViewProtocol> {
    IESECGoodsDetailBottomDataModel *_dataModel;
    IESECGoodsDetailBottomMetaModel *_metaModel;
    NSMutableArray *_tipsModels;
    NSString *_pageIdentifier;
    IESECLLDCLynxManager *_lynxManager;
    UIView *_lynxView;
}

@property (retain, nonatomic) IESECGoodsDetailBottomDataModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailBottomMetaModel *metaModel;
@property (retain, nonatomic) NSMutableArray *tipsModels;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (weak, nonatomic) UIView *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesec_respondEvent:(id)arg0;
- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (double)tipsHeight;
- (id)lynxManager;
- (void)setLynxManager:(id)arg0;
- (void)registerJSB;
- (id)metaModel;
- (void)setMetaModel:(id)arg0;
- (void)updateContentWithViewModel:(id)arg0 lynxManager:(id)arg1;
- (id)tipsModels;
- (unsigned long long)tipsCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1 lynxManager:(id)arg2;
- (void)setTipsModels:(id)arg0;
- (void)updateContent;
- (void)removeAllViews;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)dataModel;
- (void)setDataModel:(id)arg0;
- (void)setupUI;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;

@end
