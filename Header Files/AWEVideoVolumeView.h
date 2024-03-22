//
//     Generated by private class-dump
//

@class HTSVideoSoundEffectPanelView, NSString, UIView, ACCButton;

@interface AWEVideoVolumeView : UIView <ACCPanelViewProtocol> {
    HTSVideoSoundEffectPanelView *_panelView;
    ACCButton *_buttonDone;
    UIView *_gestureTapView;
}

@property (retain, nonatomic) HTSVideoSoundEffectPanelView *panelView;
@property (retain, nonatomic) ACCButton *buttonDone;
@property (retain, nonatomic) UIView *gestureTapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panelView;
- (void)setPanelView:(id)arg0;
- (double)panelViewHeight;
- (id)buttonDone;
- (id)gestureTapView;
- (void)setGestureTapView:(id)arg0;
- (void)setButtonDone:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void *)identifier;
- (id)panelName;

@end
