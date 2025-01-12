//
//     Generated by private class-dump
//

@class AWELiveStreamingTagView, UIView, NSString, UIImageView, NSDictionary, AWEVSJustWatchCoverView, YYLabel, AWEVSFormatTabCellViewModel, UILabel;
@protocol AWELivingTag;

@interface AWEVSFormatTabListCell : UITableViewCell {
    BOOL _justWatched;
    BOOL _isWatchedVideoForEpisode;
    NSString *_previousPageOfProfile;
    NSString *_justWatchedVideoID;
    UIImageView *_infoImageView;
    YYLabel *_titleLabel;
    UILabel *_descLabel;
    UIView<AWELivingTag> *_latestImageView;
    AWELiveStreamingTagView *_episodePurchaseTag;
    NSDictionary *_logPb;
    AWEVSJustWatchCoverView *_justWatchedCoverView;
    AWEVSFormatTabCellViewModel *_viewModel;
    UIView *_justWatchedView;
    UILabel *_justWatchedInfoLabel;
    UIImageView *_justWatchedCoverViewForAnimal;
}

@property (retain, nonatomic) UIImageView *infoImageView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView<AWELivingTag> *latestImageView;
@property (retain, nonatomic) AWELiveStreamingTagView *episodePurchaseTag;
@property (retain, nonatomic) NSDictionary *logPb;
@property (retain, nonatomic) AWEVSJustWatchCoverView *justWatchedCoverView;
@property (retain, nonatomic) AWEVSFormatTabCellViewModel *viewModel;
@property (retain, nonatomic) UIView *justWatchedView;
@property (retain, nonatomic) UILabel *justWatchedInfoLabel;
@property (retain, nonatomic) UIImageView *justWatchedCoverViewForAnimal;
@property (copy, nonatomic) NSString *previousPageOfProfile;
@property (nonatomic, getter=isJustWatched) BOOL justWatched;
@property (copy, nonatomic) NSString *justWatchedVideoID;
@property (nonatomic) BOOL isWatchedVideoForEpisode;

+ (id)identifier;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)justWatchedView;
- (void)setLogPb:(id)arg0;
- (id)logPb;
- (void)p_setupUI;
- (void)setJustWatchedView:(id)arg0;
- (id)previousPageOfProfile;
- (id)justWatchedVideoID;
- (BOOL)isWatchedVideoForEpisode;
- (id)episodePurchaseTag;
- (id)latestImageView;
- (id)justWatchedCoverView;
- (id)justWatchedCoverViewForAnimal;
- (void)p_oldSetupJustWatchView;
- (void)setJustWatchedInfoLabel:(id)arg0;
- (id)justWatchedInfoLabel;
- (void)setJustWatchedVideoID:(id)arg0;
- (void)setIsWatchedVideoForEpisode:(BOOL)arg0;
- (void)p_oldShowAnimationForJustWatched;
- (void)setupJustWatchView;
- (id)currentCoverView;
- (void)updateWithViewModel:(id)arg0 logpb:(id)arg1;
- (void)showAnimationForJustWatched;
- (void)setJustWatched:(BOOL)arg0;
- (void)setPreviousPageOfProfile:(id)arg0;
- (BOOL)isJustWatched;
- (void)setInfoImageView:(id)arg0;
- (void)setLatestImageView:(id)arg0;
- (void)setEpisodePurchaseTag:(id)arg0;
- (void)setJustWatchedCoverView:(id)arg0;
- (void)setJustWatchedCoverViewForAnimal:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)clear;
- (void)setTitleLabel:(id)arg0;
- (id)infoImageView;
- (BOOL)isLightTheme;
- (id)getImage;

@end
