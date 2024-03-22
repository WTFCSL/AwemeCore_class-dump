//
//     Generated by private class-dump
//

@class UIView, NSString, HTSEventContext, HTSLiveBusinessConfigure, IESLiveGCDTimer, IESLiveImageView, IESLivePSComponentConfigModel, UILabel;

@interface IESLiveMessageTrayBusnissView : UIView <IESLivePublicScreenComponent, IESLivePSComponentViewProtocol> {
    BOOL _didCarousel;
    id /* block */ _allAnimationFinished;
    IESLivePSComponentConfigModel *configModel;
    HTSEventContext *trackContext;
    UIView *_backgroundView;
    UIView *_contentView;
    UILabel *_contentLabel;
    IESLiveImageView *_logoImageView;
    IESLiveImageView *_tailImageView;
    double _trayHeight;
    IESLiveGCDTimer *_countDownTimer;
    HTSLiveBusinessConfigure *_configure;
    UILabel *_carouselLabel;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESLiveImageView *logoImageView;
@property (retain, nonatomic) IESLiveImageView *tailImageView;
@property (nonatomic) double trayHeight;
@property (retain, nonatomic) IESLiveGCDTimer *countDownTimer;
@property (retain, nonatomic) HTSLiveBusinessConfigure *configure;
@property (retain, nonatomic) UILabel *carouselLabel;
@property (nonatomic) BOOL didCarousel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (void)setConfigure:(id)arg0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (id /* block */)allAnimationFinished;
- (void)appear:(id /* block */)arg0;
- (void)disappear:(id /* block */)arg0;
- (void)setAllAnimationFinished:(id /* block */)arg0;
- (void)publicScreenComponentProduced;
- (void)stopTitleCarousel;
- (void)setCarouselLabel:(id)arg0;
- (id)carouselLabel;
- (void)carouselAnimation;
- (void)setupSubviewsWithConfigure:(id)arg0;
- (void)setTrayHeight:(double)arg0;
- (double)trayHeight;
- (void)trackTrayShow;
- (BOOL)didCarousel;
- (void)startTitleCarousel;
- (void)executeDisAppear:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)setDidCarousel:(BOOL)arg0;
- (id)configure;
- (id)init;
- (id)backgroundView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)contentView;
- (id)viewType;
- (void)setBackgroundView:(id)arg0;
- (void)setContentView:(id)arg0;
- (long long)targetContainer;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)tailImageView;
- (void)setTailImageView:(id)arg0;
- (id)logoImageView;
- (void)setLogoImageView:(id)arg0;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;

@end