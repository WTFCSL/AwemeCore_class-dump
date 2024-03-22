//
//     Generated by private class-dump
//

@class UILabel, ACCAnimatedButton, UIView;

@interface AWECaptionBottomOptimizedView : AWECaptionBottomView {
    ACCAnimatedButton *_backButton;
    ACCAnimatedButton *_saveButton;
    UILabel *_styleTitle;
    UIView *_bottomSeparateLine;
    UILabel *_styleButtonLabel;
    UILabel *_editButtonLabel;
    UILabel *_deleteButtonLabel;
}

@property (retain, nonatomic) UIView *bottomSeparateLine;
@property (retain, nonatomic) UILabel *styleButtonLabel;
@property (retain, nonatomic) UILabel *editButtonLabel;
@property (retain, nonatomic) UILabel *deleteButtonLabel;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) ACCAnimatedButton *saveButton;
@property (retain, nonatomic) UILabel *styleTitle;

- (id)styleTitle;
- (void)resetCaptionBackgroundView;
- (void)resetStyleBackgroundView;
- (id)bottomSeparateLine;
- (id)subtitleLabelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setStyleButtonLabel:(id)arg0;
- (void)setEditButtonLabel:(id)arg0;
- (id)createCaptionCollectionView;
- (void)setStyleTitle:(id)arg0;
- (void)setBottomSeparateLine:(id)arg0;
- (id)styleButtonLabel;
- (id)editButtonLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setupUI;
- (id)saveButton;
- (void)setSaveButton:(id)arg0;
- (id)deleteButtonLabel;
- (void)setDeleteButtonLabel:(id)arg0;

@end
