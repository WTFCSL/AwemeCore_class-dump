//
//     Generated by private class-dump
//

@class AWESelectTemplateViewModel, NSArray, AWESelectTemplatePlayerViewModel, AWESelectTemplateChoseSegmentView, UIView, UIButton;

@interface AWESelectTemplateEditScene : AWEScene {
    BOOL _isCutSameScene;
    AWESelectTemplateViewModel *_viewModel;
    AWESelectTemplatePlayerViewModel *_playerViewModel;
    id /* block */ _completeBlock;
    id /* block */ _cancelBlock;
    AWESelectTemplateChoseSegmentView *_selectCilpView;
    NSArray *_originTemplateAssets;
    NSArray *_originVideoMaterials;
    NSArray *_originVideoSlots;
    UIView *_textMaskView;
    UIButton *_cancelButton;
    UIButton *_saveButton;
    UIButton *_comicFaceReminder;
}

@property (retain, nonatomic) AWESelectTemplateChoseSegmentView *selectCilpView;
@property (retain, nonatomic) NSArray *originTemplateAssets;
@property (retain, nonatomic) NSArray *originVideoMaterials;
@property (copy, nonatomic) NSArray *originVideoSlots;
@property (retain, nonatomic) UIView *textMaskView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UIButton *comicFaceReminder;
@property (weak, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (weak, nonatomic) AWESelectTemplatePlayerViewModel *playerViewModel;
@property (nonatomic) BOOL isCutSameScene;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (void)setPlayerViewModel:(id)arg0;
- (id)playerViewModel;
- (void)sceneDidLoad:(id)arg0;
- (void)sceneWillApper:(id)arg0 operation:(long long)arg1 duration:(double)arg2;
- (void)sceneDidApper:(id)arg0 operation:(long long)arg1;
- (void)sceneWillDisapper:(id)arg0 operation:(long long)arg1 duration:(double)arg2;
- (void)sceneDidDisapper:(id)arg0 operation:(long long)arg1;
- (void)sceneDidUnload:(id)arg0;
- (void)sceneVc_enterBackgroundNotification;
- (void)sceneVc_enterForegroundNotification;
- (id)textMaskView;
- (void)setTextMaskView:(id)arg0;
- (BOOL)isCutSameScene;
- (void)setOriginTemplateAssets:(id)arg0;
- (void)setOriginVideoMaterials:(id)arg0;
- (void)setOriginVideoSlots:(id)arg0;
- (void)displayFragmentsReload;
- (id)selectCilpView;
- (id)comicFaceReminder;
- (void)playerCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)onEditTextButtonAction:(id)arg0;
- (void)recoverOriginTemplateData;
- (id)originVideoSlots;
- (id)originTemplateAssets;
- (id)originVideoMaterials;
- (void)setIsCutSameScene:(BOOL)arg0;
- (void)setSelectCilpView:(id)arg0;
- (void)setComicFaceReminder:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setCancelBlock:(id /* block */)arg0;
- (id)saveButton;
- (void)setSaveButton:(id)arg0;

@end
