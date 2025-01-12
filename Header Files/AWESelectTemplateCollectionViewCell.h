//
//     Generated by private class-dump
//

@class CAGradientLayer, AWEScrollStringLabel, UIImageView, AWESelectTemplateCollectionViewCellConfig, UILabel, UIView;
@protocol ACCMVTemplateModelProtocol;

@interface AWESelectTemplateCollectionViewCell : UICollectionViewCell {
    BOOL _isSelect;
    BOOL _isNoTemplateVideo;
    id<ACCMVTemplateModelProtocol> _templateModel;
    UIImageView *_imageView;
    UILabel *_label;
    CAGradientLayer *_labelGradientLayer;
    AWEScrollStringLabel *_scrollLabel;
    CAGradientLayer *_fadeLayer;
    UIView *_selectedMaskView;
    UIImageView *_selectedIconImgView;
    UILabel *_selectedLabel;
    UIView *_notemplateView;
    UIImageView *_notemplateImageView;
    AWESelectTemplateCollectionViewCellConfig *_config;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CAGradientLayer *labelGradientLayer;
@property (retain, nonatomic) AWEScrollStringLabel *scrollLabel;
@property (retain, nonatomic) CAGradientLayer *fadeLayer;
@property (retain, nonatomic) UIView *selectedMaskView;
@property (retain, nonatomic) UIImageView *selectedIconImgView;
@property (retain, nonatomic) UILabel *selectedLabel;
@property (retain, nonatomic) UIView *notemplateView;
@property (retain, nonatomic) UIImageView *notemplateImageView;
@property (retain, nonatomic) AWESelectTemplateCollectionViewCellConfig *config;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL isNoTemplateVideo;

+ (double)selectTemplateCollectionViewCellHeight:(double)arg0;
+ (double)imageAndLabelPadding;
+ (id)identifier;

- (void)updateConfig:(id)arg0;
- (void)setIsSelect:(BOOL)arg0;
- (BOOL)isSelect;
- (id)selectedMaskView;
- (void)setSelectedMaskView:(id)arg0;
- (void)setIsNoTemplateVideo:(BOOL)arg0;
- (BOOL)isNoTemplateVideo;
- (void)updateWithCellModel:(id)arg0;
- (id)labelGradientLayer;
- (id)scrollLabel;
- (id)selectedIconImgView;
- (id)notemplateView;
- (id)notemplateImageView;
- (void)updateTitleViewState:(BOOL)arg0;
- (void)setLabelGradientLayer:(id)arg0;
- (void)setScrollLabel:(id)arg0;
- (void)setSelectedIconImgView:(id)arg0;
- (void)setNotemplateView:(id)arg0;
- (void)setNotemplateImageView:(id)arg0;
- (id)accessibilityLabel;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)imageView;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)label;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (void)setupUI;
- (id)fadeLayer;
- (void)setFadeLayer:(id)arg0;
- (id)templateModel;
- (void)setTemplateModel:(id)arg0;
- (id)selectedLabel;
- (void)setSelectedLabel:(id)arg0;

@end
