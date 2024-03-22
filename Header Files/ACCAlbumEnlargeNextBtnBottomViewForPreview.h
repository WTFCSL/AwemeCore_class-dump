//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIVisualEffectView, UILabel, UIView, UIButton;

@interface ACCAlbumEnlargeNextBtnBottomViewForPreview : UIView <CAKAlbumPreviewPageBottomViewProtocol> {
    UIVisualEffectView *effectView;
    UIButton *selectPhotoButton;
    UIView *_selectPhotoView;
    UIButton *_nextButton;
    UILabel *_selectHintLabel;
    UIImageView *_unCheckImageView;
    UILabel *_numberLabel;
    UIImageView *_numberBackGroundImageView;
}

@property (retain, nonatomic) UIImageView *unCheckImageView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIImageView *numberBackGroundImageView;
@property (retain, nonatomic) UIView *selectPhotoView;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (retain, nonatomic) UIButton *selectPhotoButton;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectPhotoButton;
- (void)setSelectPhotoButton:(id)arg0;
- (id)selectHintLabel;
- (void)setSelectHintLabel:(id)arg0;
- (void)updateSelectPhotoStatus:(BOOL)arg0;
- (void)updateNextButtonStatus:(BOOL)arg0;
- (void)updatePhotoSelected:(id)arg0 greyMode:(BOOL)arg1;
- (void)updateRepeatSelected:(id)arg0 greyMode:(BOOL)arg1;
- (void)addSelectPhotoGesture:(id)arg0;
- (void)hideBottomView:(BOOL)arg0;
- (void)makeConstraint;
- (void)setSelectPhotoView:(id)arg0;
- (id)selectPhotoView;
- (id)unCheckImageView;
- (id)numberBackGroundImageView;
- (void)setUnCheckImageView:(id)arg0;
- (void)setNumberBackGroundImageView:(id)arg0;
- (id)init;
- (id)effectView;
- (void).cxx_destruct;
- (void)setEffectView:(id)arg0;
- (void)setupUI;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg0;

@end