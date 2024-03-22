//
//     Generated by private class-dump
//

@class UIColor, AWETaskModel, NSTimer, UIImageView, UILabel, UIImage;

@interface AWEMissionParticipationInfoView : UIView {
    UILabel *_label;
    UIColor *_lineImageColor;
    UIImage *_particImage;
    AWETaskModel *_mission;
    NSTimer *_timer;
    UIImageView *_imageView;
    UILabel *_alreadyInLabel;
    UIImageView *_lineImageView;
}

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *alreadyInLabel;
@property (retain, nonatomic) UIImageView *lineImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIColor *lineImageColor;
@property (retain, nonatomic) UIImage *particImage;
@property (retain, nonatomic) AWETaskModel *mission;

- (id)mission;
- (void)setMission:(id)arg0;
- (void)updateWithMission:(id)arg0;
- (void)setLineImageColor:(id)arg0;
- (void)setParticImage:(id)arg0;
- (void)_updateWithMission:(id)arg0;
- (id)particImage;
- (id)alreadyInLabel;
- (id)lineImageColor;
- (id)lineImageView;
- (void)timerDidFired:(id)arg0;
- (void)setAlreadyInLabel:(id)arg0;
- (void)setLineImageView:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (id)imageView;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setTimer:(id)arg0;
- (id)label;
- (void)willMoveToWindow:(id)arg0;

@end
