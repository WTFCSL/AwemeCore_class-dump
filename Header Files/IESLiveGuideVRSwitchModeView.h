//
//     Generated by private class-dump
//

@class HTSEventContext, UIImageView, UIView, UILabel, UITapGestureRecognizer;

@interface IESLiveGuideVRSwitchModeView : UIView {
    HTSEventContext *_trackContext;
    UIView *_containerView;
    UIImageView *_fisheyeIcon;
    UILabel *_switchLabel;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *fisheyeIcon;
@property (retain, nonatomic) UILabel *switchLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)switchLabel;
- (void)setSwitchLabel:(id)arg0;
- (void)trackVRCameraSwitchItemClickType:(id)arg0;
- (id)initWithTrackContext:(id)arg0;
- (void)setFisheyeIcon:(id)arg0;
- (id)fisheyeIcon;
- (void)switchViewTypeWithVRMode;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)tapGesture;
- (id)containerView;
- (void)setupUI;
- (void)setTapGesture:(id)arg0;

@end
