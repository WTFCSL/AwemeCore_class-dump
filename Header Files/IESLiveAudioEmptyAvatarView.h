//
//     Generated by private class-dump
//

@class UILabel, UIImageView;
@protocol IESLiveAudioSeatViewModelOutputForAll;

@interface IESLiveAudioEmptyAvatarView : UIView {
    id<IESLiveAudioSeatViewModelOutputForAll> _viewModel;
    UIImageView *_joinImage;
    UILabel *_textLabel;
    UIImageView *_lockedImageView;
    UIImageView *_guestBattleImageView;
    UIImageView *_dynamicImageView;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *joinImage;
@property (retain, nonatomic) UIImageView *lockedImageView;
@property (retain, nonatomic) UIImageView *guestBattleImageView;
@property (retain, nonatomic) UIImageView *dynamicImageView;
@property (weak, nonatomic) id<IESLiveAudioSeatViewModelOutputForAll> viewModel;

- (void)updateHiddenWithType:(long long)arg0;
- (id)joinImage;
- (id)lockedImageView;
- (id)guestBattleImageView;
- (id)dynamicImageView;
- (void)updateJoinUrls;
- (void)setJoinImage:(id)arg0;
- (void)setLockedImageView:(id)arg0;
- (void)setGuestBattleImageView:(id)arg0;
- (void)setDynamicImageView:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setTextLabel:(id)arg0;

@end
