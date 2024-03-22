//
//     Generated by private class-dump
//

@class UIView, AWEVideoHallPageContext, UIImageView, UIButton, BDImageView, AWETheaterEntranceGuideModel, DUXButton, UILabel;

@interface AWEVideoHallEntranceGuideCell : UICollectionViewCell {
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_tipContentLabel;
    UIButton *_closeButton;
    DUXButton *_addButton;
    AWEVideoHallPageContext *_context;
    AWETheaterEntranceGuideModel *_model;
    BDImageView *_panelImageView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipContentLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) DUXButton *addButton;
@property (retain, nonatomic) AWEVideoHallPageContext *context;
@property (retain, nonatomic) AWETheaterEntranceGuideModel *model;
@property (retain, nonatomic) BDImageView *panelImageView;

- (id)tipContentLabel;
- (void)setTipContentLabel:(id)arg0;
- (void)configWithContext:(id)arg0 model:(id)arg1;
- (void)setPanelImageView:(id)arg0;
- (id)panelImageView;
- (void)didClickActionButton;
- (void)p_closeButtonTapped;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (id)context;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)addButton;
- (void)setAddButton:(id)arg0;

@end