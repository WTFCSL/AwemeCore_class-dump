//
//     Generated by private class-dump
//

@class NSString, AWEWatchLaterFinishWatchingSeparateView, UIImageView, AWEFeedInsetsLabel, UIView, AWEWatchLaterCellProgressView, UILabel;

@interface AWEBarPanelWatchLaterCell : UICollectionViewCell <AWEBarPanelCellProtocol> {
    BOOL _isManageMode;
    UIView *_coverContainerView;
    UIImageView *_coverImageView;
    AWEFeedInsetsLabel *_tipLabel;
    AWEWatchLaterCellProgressView *_progressView;
    UIView *_infoContainerView;
    UILabel *_titleLabel;
    UILabel *_watchTimeLabel;
    UIImageView *_authorImageView;
    UILabel *_authorLabel;
    UIImageView *_digImageView;
    UILabel *_digLabel;
    UIImageView *_chooseButton;
    UIImageView *_typeIcon;
    UILabel *_typeLabel;
    AWEWatchLaterFinishWatchingSeparateView *_separateView;
}

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEFeedInsetsLabel *tipLabel;
@property (retain, nonatomic) AWEWatchLaterCellProgressView *progressView;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *watchTimeLabel;
@property (retain, nonatomic) UIImageView *authorImageView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UIImageView *digImageView;
@property (retain, nonatomic) UILabel *digLabel;
@property (retain, nonatomic) UIImageView *chooseButton;
@property (retain, nonatomic) UIImageView *typeIcon;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) AWEWatchLaterFinishWatchingSeparateView *separateView;
@property (nonatomic) BOOL isManageMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAuthorLabel:(id)arg0;
- (id)authorLabel;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setSeparateView:(id)arg0;
- (id)separateView;
- (void)updatePlayTime:(double)arg0;
- (id)chooseButton;
- (void)setChooseButton:(id)arg0;
- (id)infoContainerView;
- (void)setInfoContainerView:(id)arg0;
- (id)authorImageView;
- (void)setAuthorImageView:(id)arg0;
- (void)updatePlayProgress:(double)arg0;
- (void)updateWithModel:(id)arg0 needManageMode:(BOOL)arg1 useRecordTime:(BOOL)arg2;
- (void)switchToLocated:(BOOL)arg0;
- (void)setIsManageMode:(BOOL)arg0;
- (id)coverContainerView;
- (id)watchTimeLabel;
- (id)digImageView;
- (id)digLabel;
- (id)typeIcon;
- (BOOL)isManageMode;
- (void)switchToManageSelected:(BOOL)arg0;
- (void)showSeparateView;
- (void)setCoverContainerView:(id)arg0;
- (void)setWatchTimeLabel:(id)arg0;
- (void)setDigImageView:(id)arg0;
- (void)setDigLabel:(id)arg0;
- (void)setTypeIcon:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)typeLabel;
- (void)setTypeLabel:(id)arg0;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;

@end