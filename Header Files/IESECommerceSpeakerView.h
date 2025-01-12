//
//     Generated by private class-dump
//

@class UIImageView, NSString;

@interface IESECommerceSpeakerView : UIView {
    BOOL _isMute;
    UIImageView *_speakerImageView;
    NSString *_speakerImageName;
    NSString *_muteSpeakerImageName;
}

@property (retain, nonatomic) UIImageView *speakerImageView;
@property (copy, nonatomic) NSString *speakerImageName;
@property (copy, nonatomic) NSString *muteSpeakerImageName;
@property (nonatomic) BOOL isMute;

- (void)setIsMute:(BOOL)arg0;
- (void)setUpSubViews;
- (void)setSpeakerViewImageName:(id)arg0 muteImageName:(id)arg1 isMute:(BOOL)arg2;
- (id)speakerImageView;
- (void)setSpeakerImageView:(id)arg0;
- (id)muteSpeakerImageName;
- (id)speakerImageName;
- (void)updateSpeakerViewBackgroundColor:(id)arg0;
- (void)setSpeakerImageName:(id)arg0;
- (void)setMuteSpeakerImageName:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (BOOL)isMute;

@end
