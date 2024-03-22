//
//     Generated by private class-dump
//

@class UILabel, VoteSetting, IESLiveImageView;
@protocol IESLiveSubscription;

@interface IESLiveRevenueInteractVoteThemeCell : UITableViewCell {
    id<IESLiveSubscription> _disposable;
    VoteSetting *_voteTheme;
    UILabel *_themeLabel;
    IESLiveImageView *_selectedView;
}

@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) VoteSetting *voteTheme;
@property (retain, nonatomic) UILabel *themeLabel;
@property (retain, nonatomic) IESLiveImageView *selectedView;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setSelectedView:(id)arg0;
- (id)themeLabel;
- (void)setThemeLabel:(id)arg0;
- (void)setVoteTheme:(id)arg0;
- (id)voteTheme;
- (void)showSelectedView;
- (void)updateVoteTheme:(id)arg0 viewModel:(id)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupUI;
- (id)selectedView;

@end
