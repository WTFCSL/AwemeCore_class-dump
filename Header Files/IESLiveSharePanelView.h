//
//     Generated by private class-dump
//

@class NSString, NSArray, UICollectionView, CAShapeLayer, UILabel, UICollectionViewFlowLayout, UIButton;

@interface IESLiveSharePanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _shouldShowSubmitButton;
    id /* block */ _sumbitAction;
    id /* block */ _closeBlock;
    UILabel *_mainTitleLabel;
    UILabel *_tipLabel;
    UIButton *_closeButton;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIButton *_submitButton;
    NSArray *_items;
    CAShapeLayer *_maskLayer;
}

@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UIButton *submitButton;
@property (nonatomic) BOOL shouldShowSubmitButton;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (copy, nonatomic) id /* block */ sumbitAction;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (void)onCloseAction:(id)arg0;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:(id)arg0;
- (void)updateDataSource:(id)arg0;
- (void)setSumbitAction:(id /* block */)arg0;
- (void)onSubmitAction:(id)arg0;
- (BOOL)shouldShowSubmitButton;
- (void)refreshSumbitButton:(BOOL)arg0;
- (void)showSubmitButton;
- (void)hideSubmitButton;
- (void)setShouldShowSubmitButton:(BOOL)arg0;
- (id /* block */)sumbitAction;
- (void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1;
- (void)setItems:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)items;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)itemAtIndexPath:(id)arg0;
- (void)layoutSubviews;
- (id)initWithItems:(id)arg0;
- (id)maskLayer;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setMaskLayer:(id)arg0;
- (id)submitButton;
- (void)setSubmitButton:(id)arg0;

@end