//
//     Generated by private class-dump
//

@class AFDButton, CAShapeLayer, UIImageView, UILabel, DUXCheckBox;

@interface AWEProfileEditFlowAvatarView : AWEProfileEditFlowStepView {
    AFDButton *_choosePhotoButton;
    UILabel *_choosePhotoLabel;
    UILabel *_publishAsStoryLabel;
    DUXCheckBox *_publishAsStoryCheckBox;
    CAShapeLayer *_avatarDashedLineBorderLayer;
    UIImageView *_cameraImageView;
}

@property (retain, nonatomic) AFDButton *choosePhotoButton;
@property (retain, nonatomic) UILabel *choosePhotoLabel;
@property (retain, nonatomic) UILabel *publishAsStoryLabel;
@property (retain, nonatomic) DUXCheckBox *publishAsStoryCheckBox;
@property (retain, nonatomic) CAShapeLayer *avatarDashedLineBorderLayer;
@property (retain, nonatomic) UIImageView *cameraImageView;

- (void)awe_themeReload;
- (void)configWithViewModel:(id)arg0;
- (void)p_updateUI;
- (id)choosePhotoButton;
- (id)cameraImageView;
- (id)publishAsStoryLabel;
- (id)publishAsStoryCheckBox;
- (id)avatarDashedLineBorderLayer;
- (void)p_choosePhoto:(id)arg0;
- (void)p_selectPublishAsStory:(id)arg0;
- (void)tapNextButton:(id)arg0;
- (void)setChoosePhotoButton:(id)arg0;
- (void)setPublishAsStoryLabel:(id)arg0;
- (void)setPublishAsStoryCheckBox:(id)arg0;
- (void)setAvatarDashedLineBorderLayer:(id)arg0;
- (void)setCameraImageView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)choosePhotoLabel;
- (void)setChoosePhotoLabel:(id)arg0;

@end
