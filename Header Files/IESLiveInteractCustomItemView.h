//
//     Generated by private class-dump
//

@class UIImageView, UILabel;
@protocol IESLiveWebImageService, IESLiveWebPPlayer;

@interface IESLiveInteractCustomItemView : IESLiveInteractEntranceBaseView {
    BOOL _isAudioLive;
    UIImageView *_iconImageView;
    UIImageView<IESLiveWebPPlayer> *_animationView;
    id<IESLiveWebImageService> _webImageService;
    unsigned long long _status;
    UILabel *_bottomTitleLbl;
    id /* block */ _currentSceneProvider;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) UILabel *bottomTitleLbl;
@property (nonatomic) BOOL isAudioLive;
@property (copy, nonatomic) id /* block */ currentSceneProvider;

- (void)didSetAttachingDIContext;
- (BOOL)isAudioLive;
- (void)setIsAudioLive:(BOOL)arg0;
- (id)webImageService;
- (void)setWebImageService:(id)arg0;
- (void)renderStatus:(unsigned long long)arg0;
- (void)setBottomTitleLbl:(id)arg0;
- (id)bottomTitleLbl;
- (void)p_animateWithResourceName:(id)arg0;
- (id /* block */)currentSceneProvider;
- (id)p_iconNameForIntimateChatWithStatus:(unsigned long long)arg0;
- (id)p_iconNameForMultiAudioWithStatus:(unsigned long long)arg0;
- (id)p_iconNameForBigPartyWithStatus:(unsigned long long)arg0;
- (id)p_iconNameForGiftPKWithStatus:(unsigned long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isAudioLive:(BOOL)arg1 currentSceneProvider:(id /* block */)arg2;
- (void)setCurrentSceneProvider:(id /* block */)arg0;
- (unsigned long long)currentStatus;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg0;
- (id)iconImageView;
- (void)loadViews;
- (void)setIconImageView:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;

@end
