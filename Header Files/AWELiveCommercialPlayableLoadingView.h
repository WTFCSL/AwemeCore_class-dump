//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWELiveCommercialPlayableLoadingView : UIView {
    UIImageView *_playableGameView;
    UILabel *_playableGameName;
    UILabel *_loadingLabel;
    UIImageView *_playableFlipIconView;
    UILabel *_tipsLabel;
}

@property (retain, nonatomic) UIImageView *playableGameView;
@property (retain, nonatomic) UILabel *playableGameName;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UIImageView *playableFlipIconView;
@property (retain, nonatomic) UILabel *tipsLabel;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (void)handleOrientationChanged:(long long)arg0 withCompletion:(id /* block */)arg1;
- (void)configPlayableLoadingViewWithAdInfo:(id)arg0;
- (id)playableGameView;
- (id)playableGameName;
- (id)playableFlipIconView;
- (void)setPlayableGameView:(id)arg0;
- (void)setPlayableGameName:(id)arg0;
- (void)setPlayableFlipIconView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg0;

@end
