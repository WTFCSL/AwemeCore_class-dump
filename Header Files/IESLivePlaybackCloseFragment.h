//
//     Generated by private class-dump
//

@class UIButton, HTSLiveToolbarItem, NSString;

@interface IESLivePlaybackCloseFragment : IESLivePlaybackComponent <IESLivePlaybackCustomAutoHideAnimService, IESVSVideoPlayAction> {
    BOOL _isHideComponent;
    BOOL _isPortraitStream;
    long long _orientation;
    UIButton *_closeButton;
    HTSLiveToolbarItem *_closeItemPlaceHolder;
    HTSLiveToolbarItem *_closeToolbarItem;
}

@property (nonatomic) BOOL isHideComponent;
@property (nonatomic) BOOL isPortraitStream;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) HTSLiveToolbarItem *closeItemPlaceHolder;
@property (retain, nonatomic) HTSLiveToolbarItem *closeToolbarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentOrientationChanged:(long long)arg0;
- (void)setIsPortraitStream:(BOOL)arg0;
- (BOOL)isPortraitStream;
- (void)setIsHideComponent:(BOOL)arg0;
- (BOOL)isHideComponent;
- (id)closeToolbarItem;
- (void)_clickCloseButton:(id)arg0;
- (void)setCloseToolbarItem:(id)arg0;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (void)onVideoFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)lockStatusChange:(BOOL)arg0;
- (void)reloadCloseButtonForLandscapeState:(BOOL)arg0;
- (id)closeItemPlaceHolder;
- (void)setCloseItemPlaceHolder:(id)arg0;
- (void).cxx_destruct;
- (long long)orientation;
- (void)setOrientation:(long long)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)_createCloseButton;

@end
