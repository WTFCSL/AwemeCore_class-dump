//
//     Generated by private class-dump
//

@class UIView, NSString, AWENewHotSearchModel, AWEHotSpotInnerContext, UIImageView, UIButton, LOTAnimationView, UILabel;

@interface AWETwoLineHotPointPanelTableViewCell : UITableViewCell <AWEHotPointPanelTableViewCellProtocol> {
    UILabel *_indexLabel;
    UIImageView *_hotSpotImageView;
    UILabel *_hotSpotContentLabel;
    UIImageView *_hotCountIconView;
    UILabel *_useCountLabel;
    UIImageView *_tagImageView;
    LOTAnimationView *_hotLiveLottieView;
    UILabel *_relationLabel;
    UIImageView *_risingHotSpotImageView;
    UIButton *_actionButton;
    UIView *_hotSpotImageMaskView;
    UIView *_contentLabelMaskView;
    UIView *_useCountLabelMaskView;
    AWENewHotSearchModel *_model;
    AWEHotSpotInnerContext *_context;
}

@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIImageView *hotSpotImageView;
@property (retain, nonatomic) UILabel *hotSpotContentLabel;
@property (retain, nonatomic) UIImageView *hotCountIconView;
@property (retain, nonatomic) UILabel *useCountLabel;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) LOTAnimationView *hotLiveLottieView;
@property (retain, nonatomic) UILabel *relationLabel;
@property (retain, nonatomic) UIImageView *risingHotSpotImageView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *hotSpotImageMaskView;
@property (retain, nonatomic) UIView *contentLabelMaskView;
@property (retain, nonatomic) UIView *useCountLabelMaskView;
@property (retain, nonatomic) AWENewHotSearchModel *model;
@property (retain, nonatomic) AWEHotSpotInnerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void)hideMaskView;
- (id)relationLabel;
- (void)setRelationLabel:(id)arg0;
- (void)setTagImageView:(id)arg0;
- (id)tagImageView;
- (void)configUI;
- (id)hotLiveLottieView;
- (void)setHotLiveLottieView:(id)arg0;
- (void)configureWithModel:(id)arg0 showAction:(BOOL)arg1 indexPath:(id)arg2;
- (id)risingHotSpotImageView;
- (id)hotCountIconView;
- (id)useCountLabel;
- (void)configureWithModel:(id)arg0 indexPath:(id)arg1;
- (void)showMaskViewWithIndexPath:(id)arg0;
- (void)bindContext:(id)arg0;
- (void)setIndexLabel:(id)arg0;
- (void)setRisingHotSpotImageView:(id)arg0;
- (void)setHotCountIconView:(id)arg0;
- (void)setUseCountLabel:(id)arg0;
- (id)hotSpotImageView;
- (id)hotSpotContentLabel;
- (void)configMaskViewUI;
- (id)hotSpotImageMaskView;
- (id)contentLabelMaskView;
- (id)useCountLabelMaskView;
- (void)setHotSpotImageView:(id)arg0;
- (void)setHotSpotContentLabel:(id)arg0;
- (void)setHotSpotImageMaskView:(id)arg0;
- (void)setContentLabelMaskView:(id)arg0;
- (void)setUseCountLabelMaskView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)context;
- (id)indexLabel;
- (void)action;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)prepareForReuse;
- (id)actionButton;
- (void)setActionButton:(id)arg0;

@end
