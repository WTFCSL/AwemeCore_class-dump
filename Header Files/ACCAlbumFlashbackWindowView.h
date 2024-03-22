//
//     Generated by private class-dump
//

@class UIView, NSString, UIImage, NSDate, AWEAlbumFlashbackWindowConfigModel, UIImageView, UIButton, UILabel;

@interface ACCAlbumFlashbackWindowView : UIView {
    BOOL _isShowing;
    NSString *_coverId;
    UIImage *_cover;
    NSDate *_date;
    UIImageView *_iconView;
    UIView *_maskView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_closeBtn;
    AWEAlbumFlashbackWindowConfigModel *_configModel;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) AWEAlbumFlashbackWindowConfigModel *configModel;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) NSString *coverId;
@property (retain, nonatomic) UIImage *cover;
@property (retain, nonatomic) NSDate *date;

- (void)setIsShowing:(BOOL)arg0;
- (id)cover;
- (void)setCover:(id)arg0;
- (void)closeBtnClicked;
- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (id)coverId;
- (void)setCoverId:(id)arg0;
- (void)updateFlashbackView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 configModel:(id)arg1;
- (void)hideFlashbackFLoatView;
- (void)hideFlashbackInnerView;
- (void)showFlashBackFloatView;
- (void)showFlashBackInnerView;
- (void)configFloatViewUI;
- (void)configInnerViewUI;
- (id)setupInTodayText;
- (void)configGestureRecognizer;
- (void)floatWindowClicked;
- (void)setSubtitleLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setDate:(id)arg0;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)maskView;
- (id)subtitleLabel;
- (BOOL)isShowing;
- (id)date;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
