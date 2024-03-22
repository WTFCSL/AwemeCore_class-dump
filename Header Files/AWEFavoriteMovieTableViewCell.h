//
//     Generated by private class-dump
//

@class UIButton, AWEGradientView, UIImageView, AWEFavoriteCollectionModel, UILabel, UIView, DUXTextTag;
@protocol AWEDiscoverDMediumTagViewProtocol, AWEFakeProgressSliderViewProtocol, AWEFavoriteMovieTableViewCellDelegate;

@interface AWEFavoriteMovieTableViewCell : UITableViewCell {
    id<AWEFavoriteMovieTableViewCellDelegate> _delegate;
    UIImageView *_coverImageView;
    UIView *_rightSubContainerView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    DUXTextTag *_labelTag;
    UILabel *_tagLabel;
    UILabel *_actorNameLabel;
    UIButton *_watchVideoButton;
    UIButton *_buyTicketButton;
    UIView<AWEDiscoverDMediumTagViewProtocol> *_tagView;
    AWEGradientView *_gradientView;
    UIView<AWEFakeProgressSliderViewProtocol> *_progressBar;
    UIButton *_watchDetailButton;
    AWEFavoriteCollectionModel *_model;
    UILabel *_expireTimeLabel;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *rightSubContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DUXTextTag *labelTag;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *actorNameLabel;
@property (retain, nonatomic) UIButton *watchVideoButton;
@property (retain, nonatomic) UIButton *buyTicketButton;
@property (retain, nonatomic) UIView<AWEDiscoverDMediumTagViewProtocol> *tagView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView<AWEFakeProgressSliderViewProtocol> *progressBar;
@property (retain, nonatomic) UIButton *watchDetailButton;
@property (retain, nonatomic) AWEFavoriteCollectionModel *model;
@property (retain, nonatomic) UILabel *expireTimeLabel;
@property (weak, nonatomic) id<AWEFavoriteMovieTableViewCellDelegate> delegate;

+ (id)identifier;
+ (double)cellHeight;

- (void)configWithModel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)configureUI;
- (id)labelTag;
- (id)watchVideoButton;
- (id)buyTicketButton;
- (id)watchDetailButton;
- (id)rightSubContainerView;
- (id)actorNameLabel;
- (id)expireTimeLabel;
- (id)actorNameStyle;
- (void)configWithModelForNewUI:(id)arg0;
- (void)setActorNameLabelText:(id)arg0;
- (void)clickButtonAction;
- (void)buyTicketButtonAction;
- (void)setRightSubContainerView:(id)arg0;
- (void)setLabelTag:(id)arg0;
- (void)setActorNameLabel:(id)arg0;
- (void)setWatchVideoButton:(id)arg0;
- (void)setBuyTicketButton:(id)arg0;
- (void)setWatchDetailButton:(id)arg0;
- (void)setExpireTimeLabel:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (void)setGradientView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)gradientView;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)progressBar;
- (void)setProgressBar:(id)arg0;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end