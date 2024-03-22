//
//     Generated by private class-dump
//

@class UIStackView, NSString, UILabel, UIView;
@protocol IESECStoreAccountInfoViewDelegate;

@interface IESECStoreSimpleAccountInfoView : UIView <IESECStoreAccountInfoViewProtocol> {
    id<IESECStoreAccountInfoViewDelegate> delegate;
    UIStackView *_stackView;
    UIStackView *_fansSectionView;
    UILabel *_fansNumberLabel;
    UILabel *_fansUnitLabel;
    UILabel *_fansTextLabel;
    UIStackView *_saleSectionView;
    UILabel *_salesNumberLabel;
    UILabel *_salesUnitLabel;
    UILabel *_salesTextLabel;
    UIView *_separatorView;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIStackView *fansSectionView;
@property (retain, nonatomic) UILabel *fansNumberLabel;
@property (retain, nonatomic) UILabel *fansUnitLabel;
@property (retain, nonatomic) UILabel *fansTextLabel;
@property (retain, nonatomic) UIStackView *saleSectionView;
@property (retain, nonatomic) UILabel *salesNumberLabel;
@property (retain, nonatomic) UILabel *salesUnitLabel;
@property (retain, nonatomic) UILabel *salesTextLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fansNumberLabel;
- (void)setFansNumberLabel:(id)arg0;
- (void)updateAccountInfoViewWithStyle:(unsigned long long)arg0;
- (id)fansTextLabel;
- (id)salesTextLabel;
- (id)fansUnitLabel;
- (id)salesNumberLabel;
- (id)salesUnitLabel;
- (void)jumpToStoreDetailFromFansArea;
- (void)jumpToStoreDetailFromSalesArea;
- (void)updateAccountInfoViewWithModel:(id)arg0;
- (void)updateAccountInfoViewWithPercent:(double)arg0;
- (void)setFansUnitLabel:(id)arg0;
- (void)setFansTextLabel:(id)arg0;
- (void)setSalesNumberLabel:(id)arg0;
- (void)setSalesUnitLabel:(id)arg0;
- (void)setSalesTextLabel:(id)arg0;
- (id)fansSectionView;
- (id)saleSectionView;
- (void)setFansSectionView:(id)arg0;
- (void)setSaleSectionView:(id)arg0;
- (void).cxx_destruct;
- (void)setSeparatorView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)stackView;
- (void)setStackView:(id)arg0;
- (id)separatorView;
- (void)setDelegate:(id)arg0;
- (void)setupViews;
- (double)viewHeight;

@end
