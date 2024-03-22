//
//     Generated by private class-dump
//

@class ACCAlbumInputData, CAKModalTransitionDelegate, UIView, MASConstraint, UIButton;
@protocol CAKAlbumBottomViewProtocol;

@interface ACCAlbumExtensionSelectTemplateButton : ACCAlbumExtension {
    UIButton *_selectTemplateBtn;
    ACCAlbumInputData *_inputData;
    MASConstraint *_rightConstraint;
    CAKModalTransitionDelegate *_transitionDelegate;
    UIView<CAKAlbumBottomViewProtocol> *_bottomView;
}

@property (retain, nonatomic) UIButton *selectTemplateBtn;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (retain, nonatomic) MASConstraint *rightConstraint;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (weak, nonatomic) UIView<CAKAlbumBottomViewProtocol> *bottomView;

+ (BOOL)canBeLoadWithInputData:(id)arg0;

- (void)albumDidShowViewController:(id)arg0;
- (BOOL)albumExtensionShouldBeLoaded:(id)arg0;
- (void)albumDidSelectAssetes:(id)arg0 targetAsset:(id)arg1;
- (void)albumDidSwitchMultiSelectStatus:(BOOL)arg0;
- (void)albumDidLoadBottomView:(id)arg0;
- (void)albumDidDeleteAssetFromBottomView:(id)arg0;
- (void)albumDidLoadExtension:(id)arg0 albumViewController:(id)arg1;
- (id)selectTemplateBtn;
- (void)p_trackButtonExposure;
- (void)p_trackButtonClick;
- (void)selectTemplateBtnAction:(id)arg0;
- (void)setSelectTemplateBtn:(id)arg0;
- (id)rightConstraint;
- (void).cxx_destruct;
- (void)setRightConstraint:(id)arg0;
- (id)bottomView;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (void)setBottomView:(id)arg0;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end
