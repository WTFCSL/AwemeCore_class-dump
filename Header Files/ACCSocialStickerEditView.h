//
//     Generated by private class-dump
//

@class ACCSocialStickerView, AWEVideoPublishViewModel, ACCSocialStickerEditToolbar, AWEEditGradientView, UIView, ACCAnimatedButton;

@interface ACCSocialStickerEditView : UIView {
    BOOL _isEdting;
    ACCSocialStickerView *_editingStickerView;
    id /* block */ _onEditFinishedBlock;
    id /* block */ _finishEditAnimationBlock;
    id /* block */ _startEditBlock;
    ACCAnimatedButton *_saveButton;
    AWEEditGradientView *_upperMaskView;
    UIView *_lowerMaskView;
    UIView *_orignalSuperView;
    ACCSocialStickerEditToolbar *_editToolbar;
    AWEVideoPublishViewModel *_publishModel;
}

@property (retain, nonatomic) ACCAnimatedButton *saveButton;
@property (retain, nonatomic) AWEEditGradientView *upperMaskView;
@property (retain, nonatomic) UIView *lowerMaskView;
@property (weak, nonatomic) UIView *orignalSuperView;
@property (retain, nonatomic) ACCSocialStickerEditToolbar *editToolbar;
@property (retain, nonatomic) ACCSocialStickerView *editingStickerView;
@property (nonatomic) BOOL isEdting;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ onEditFinishedBlock;
@property (copy, nonatomic) id /* block */ finishEditAnimationBlock;
@property (copy, nonatomic) id /* block */ startEditBlock;

+ (id)editViewWithPublishModel:(id)arg0;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setOnEditFinishedBlock:(id /* block */)arg0;
- (id)editingStickerView;
- (void)didClickedSaveButton:(id)arg0;
- (void)handleKeyboardChangeFrameNoti:(id)arg0;
- (id)upperMaskView;
- (id)lowerMaskView;
- (id /* block */)onEditFinishedBlock;
- (void)setEditingStickerView:(id)arg0;
- (void)startEditStickerView:(id)arg0;
- (id)orignalSuperView;
- (void)setOrignalSuperView:(id)arg0;
- (void)setLowerMaskView:(id)arg0;
- (void)setUpperMaskView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 publishModel:(id)arg1;
- (void)setFinishEditAnimationBlock:(id /* block */)arg0;
- (void)setStartEditBlock:(id /* block */)arg0;
- (void)didClickedTextMaskView;
- (BOOL)isEdting;
- (void)setIsEdting:(BOOL)arg0;
- (id /* block */)startEditBlock;
- (id /* block */)finishEditAnimationBlock;
- (id)editToolbar;
- (void)setEditToolbar:(id)arg0;
- (void)stopEdit;
- (void).cxx_destruct;
- (void)setup;
- (void)dealloc;
- (id)saveButton;
- (void)setSaveButton:(id)arg0;
- (void)addObservers;
- (void)removeObservers;

@end
