//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIImage, UIView, CAKModalTransitionDelegate;

@interface AWEProfilePhotoPicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, TOCropViewControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate> {
    NSDictionary *_eventParams;
    id /* block */ _dismissedBlock;
    id /* block */ _cancelActionBlock;
    id /* block */ _selectedBlock;
    id /* block */ _completionBlock;
    id /* block */ _extendedCompletionBlock;
    UIView *_fromView;
    UIImage *_coverMaskImage;
    unsigned long long _fileSizeLimit;
    unsigned long long _selectedSource;
    unsigned long long _editorType;
    unsigned long long _cropingStyle;
    CAKModalTransitionDelegate *_transitionDelegate;
    struct CGSize { double width; double height; } _cropRato;
}

@property (copy, nonatomic) id /* block */ dismissedBlock;
@property (copy, nonatomic) id /* block */ cancelActionBlock;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ extendedCompletionBlock;
@property (weak, nonatomic) UIView *fromView;
@property (nonatomic) struct CGSize { double width; double height; } cropRato;
@property (retain, nonatomic) UIImage *coverMaskImage;
@property (nonatomic) unsigned long long fileSizeLimit;
@property (nonatomic) unsigned long long selectedSource;
@property (nonatomic) unsigned long long editorType;
@property (nonatomic) unsigned long long cropingStyle;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_defaultEditorType;
+ (id)sharedInstance;

- (unsigned long long)fileSizeLimit;
- (void)setFileSizeLimit:(unsigned long long)arg0;
- (void)setEventParams:(id)arg0;
- (void)setSelectedBlock:(id /* block */)arg0;
- (void)setCancelActionBlock:(id /* block */)arg0;
- (void)setExtendedCompletionBlock:(id /* block */)arg0;
- (void)setEditorType:(unsigned long long)arg0;
- (void)setCropRato:(struct CGSize { double x0; double x1; })arg0;
- (void)setCropingStyle:(unsigned long long)arg0;
- (void)setCoverMaskImage:(id)arg0;
- (id /* block */)cancelActionBlock;
- (void)showAlertWithSourceType:(unsigned long long)arg0;
- (void)showImagePicker:(long long)arg0 enableCrop:(BOOL)arg1;
- (void)didSelectWithSource:(unsigned long long)arg0;
- (void)pickPhotoInPhotoLibraryFromSource:(id)arg0 editorType:(unsigned long long)arg1 cropingStyle:(unsigned long long)arg2 coverMaskImage:(id)arg3 aspectRato:(struct CGSize { double x0; double x1; })arg4 selectedBlock:(id /* block */)arg5 dismissedBlock:(id /* block */)arg6 extendedCompletionBlock:(id /* block */)arg7;
- (void)setDismissedBlock:(id /* block */)arg0;
- (id /* block */)dismissedBlock;
- (unsigned long long)editorType;
- (unsigned long long)cropingStyle;
- (struct CGSize { double x0; double x1; })cropRato;
- (id)coverMaskImage;
- (void)showTOCropVCWithStyle:(unsigned long long)arg0 image:(id)arg1 aspectRato:(struct CGSize { double x0; double x1; })arg2 coverMaskImage:(id)arg3 completionBlock:(id /* block */)arg4;
- (long long)_tocropingStyle:(unsigned long long)arg0;
- (unsigned long long)selectedSource;
- (id /* block */)extendedCompletionBlock;
- (void)setSelectedSource:(unsigned long long)arg0;
- (id /* block */)selectedBlock;
- (void)cropViewController:(id)arg0 didCropToImage:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 angle:(long long)arg3 button:(id)arg4;
- (void)cropViewController:(id)arg0 didFinishCancelled:(BOOL)arg1;
- (BOOL)albumViewControllerHiddenForFooter:(id)arg0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)arg0;
- (id)listViewConfigForAlbumViewController:(id)arg0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)arg0;
- (BOOL)albumViewController:(id)arg0 shouldSelectAlbumAsset:(id)arg1;
- (void)albumViewController:(id)arg0 didClickAlbumAssetCell:(id)arg1;
- (void)albumViewControllerDidClickCancelButton:(id)arg0;
- (void)pickPhotoAndVideoFromSource:(id)arg0 WithReason:(id)arg1 allowSource:(unsigned long long)arg2 editorType:(unsigned long long)arg3 cropingStyle:(unsigned long long)arg4 coverMaskImage:(id)arg5 aspectRato:(struct CGSize { double x0; double x1; })arg6 otherActions:(id)arg7 selectedBlock:(id /* block */)arg8 cancelActionBlock:(id /* block */)arg9 extendedCompletionBlock:(id /* block */)arg10;
- (id)fromView;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setFromView:(id)arg0;
- (void)reset;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (id)eventParams;

@end
