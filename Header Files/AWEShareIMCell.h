//
//     Generated by private class-dump
//

@class BDImageView, YYLabel, UIImageView, NSString, UILabel, DUXCheckBox;
@protocol AWEShareCellItem;

@interface AWEShareIMCell : UICollectionViewCell <AWEShareCell> {
    BOOL scalesImageWhenHighlighted;
    UIImageView *imageView;
    UILabel *titleLabel;
    UIImageView *smallImageView;
    UIImageView *selectImageView;
    UIImageView *selectContainer;
    YYLabel *descLabel;
    BDImageView *bottomCenterImageView;
    UIImageView *_activeDot;
    UIImageView *_activeDotContainer;
    UIImageView *_checkBoxContainer;
    DUXCheckBox *_checkBox;
    UIImageView *_hasShareDotCheckMark;
    UIImageView *_hasShareDotCheckMarkContainer;
    UIImageView *_airplaneDotView;
    UIImageView *_airplaneDotContainer;
    id<AWEShareCellItem> _viewModel;
}

@property (retain, nonatomic) UIImageView *activeDot;
@property (retain, nonatomic) UIImageView *activeDotContainer;
@property (retain, nonatomic) UIImageView *checkBoxContainer;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UIImageView *hasShareDotCheckMark;
@property (retain, nonatomic) UIImageView *hasShareDotCheckMarkContainer;
@property (retain, nonatomic) UIImageView *airplaneDotView;
@property (retain, nonatomic) UIImageView *airplaneDotContainer;
@property (weak, nonatomic) id<AWEShareCellItem> viewModel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *smallImageView;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *selectContainer;
@property (retain, nonatomic) BDImageView *bottomCenterImageView;
@property (retain, nonatomic) YYLabel *descLabel;
@property (nonatomic) BOOL scalesImageWhenHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setSelectImageView:(id)arg0;
- (id)selectImageView;
- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (id)smallImageView;
- (void)setSmallImageView:(id)arg0;
- (id)selectContainer;
- (void)setSelectContainer:(id)arg0;
- (id)bottomCenterImageView;
- (void)setBottomCenterImageView:(id)arg0;
- (BOOL)scalesImageWhenHighlighted;
- (void)setScalesImageWhenHighlighted:(BOOL)arg0;
- (void)setActiveDot:(id)arg0;
- (id)activeDot;
- (void)setActiveDotContainer:(id)arg0;
- (id)activeDotContainer;
- (void)setHasShareDotCheckMark:(id)arg0;
- (void)setHasShareDotCheckMarkContainer:(id)arg0;
- (id)hasShareDotCheckMarkContainer;
- (id)hasShareDotCheckMark;
- (void)setAirplaneDotView:(id)arg0;
- (id)airplaneDotView;
- (void)setAirplaneDotContainer:(id)arg0;
- (id)airplaneDotContainer;
- (void)setCheckBoxContainer:(id)arg0;
- (id)checkBoxContainer;
- (void)addLongPressGesForAvatar;
- (void)longPressGesHandler:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (void)setImageView:(id)arg0;
- (id)viewModel;
- (void)setHighlighted:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)updateWithViewModel:(id)arg0;

@end
