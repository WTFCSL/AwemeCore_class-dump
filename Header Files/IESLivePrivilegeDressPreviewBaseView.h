//
//     Generated by private class-dump
//

@class UIButton, IESLivePrivilegeDressPreviewModel;

@interface IESLivePrivilegeDressPreviewBaseView : UIView {
    id /* block */ _previewButtonTapBlock;
    IESLivePrivilegeDressPreviewModel *_previewModel;
    id /* block */ _removeBlock;
    UIButton *_previewButton;
}

@property (retain, nonatomic) UIButton *previewButton;
@property (copy, nonatomic) id /* block */ previewButtonTapBlock;
@property (retain, nonatomic) IESLivePrivilegeDressPreviewModel *previewModel;
@property (copy, nonatomic) id /* block */ removeBlock;

- (void)setRemoveBlock:(id /* block */)arg0;
- (id /* block */)removeBlock;
- (void)setPreviewModel:(id)arg0;
- (id)previewModel;
- (void)setPreviewButton:(id)arg0;
- (void)setupPreviewButton;
- (id /* block */)previewButtonTapBlock;
- (void)previewButtonClick:(id)arg0;
- (id)initWithPreviewModel:(id)arg0 DIContext:(id)arg1;
- (void)setPreviewButtonTapBlock:(id /* block */)arg0;
- (void)removeFromSuperview;
- (void).cxx_destruct;
- (void)startAnimation;
- (id)previewButton;

@end
