//
//     Generated by private class-dump
//

@class NSArray, NSString, UIView;

@interface AWEMusicImageSelectService : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, DUXActionSheetDelegate> {
    BOOL _isMultiSelect;
    BOOL _isNeedCrop;
    id /* block */ _completionBlock;
    NSArray *_imageDataArray;
    NSString *_selectTitle;
    long long _maxFileSize;
    long long _minWidth;
    long long _minHeight;
    long long _multiSelectNum;
    UIView *_sourceView;
    long long _cropingStyle;
    struct CGSize { double width; double height; } _cropRatio;
}

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSArray *imageDataArray;
@property (copy, nonatomic) NSString *selectTitle;
@property (nonatomic) long long maxFileSize;
@property (nonatomic) long long minWidth;
@property (nonatomic) long long minHeight;
@property (nonatomic) BOOL isMultiSelect;
@property (nonatomic) long long multiSelectNum;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) BOOL isNeedCrop;
@property (nonatomic) struct CGSize { double width; double height; } cropRatio;
@property (nonatomic) long long cropingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)actionSheet:(id)arg0 didClickButtonAtIndex:(long long)arg1;
- (void)actionSheetDidClickCancelButton:(id)arg0;
- (void)actionSheetDidClickMaskArea:(id)arg0;
- (void)didActionSheetDismiss:(id)arg0;
- (struct CGSize { double x0; double x1; })cropRatio;
- (void)setCropRatio:(struct CGSize { double x0; double x1; })arg0;
- (id)imageDataArray;
- (void)setImageDataArray:(id)arg0;
- (void)setCropingStyle:(long long)arg0;
- (long long)cropingStyle;
- (BOOL)isSatisfyImageSizeWithImage:(id)arg0;
- (void)setMultiSelectNum:(long long)arg0;
- (void)setIsNeedCrop:(BOOL)arg0;
- (void)showTOCropVCWithStyle:(long long)arg0 imageData:(id)arg1 aspectRato:(struct CGSize { double x0; double x1; })arg2;
- (void)setSelectTitle:(id)arg0;
- (id)selectTitle;
- (BOOL)isNeedCrop;
- (long long)multiSelectNum;
- (void)showAwemeImagePickerWithIsMultiSelect:(BOOL)arg0 multiSelectNum:(long long)arg1 isNeedCrop:(BOOL)arg2 cropRatio:(struct CGSize { double x0; double x1; })arg3 cropingStyle:(long long)arg4 maxFileSize:(unsigned long long)arg5;
- (void)selectImageWithSourceView:(id)arg0 allowSource:(unsigned long long)arg1 isMultiSelect:(BOOL)arg2 multiSelectNum:(long long)arg3 isNeedCrop:(BOOL)arg4 cropRatio:(struct CGSize { double x0; double x1; })arg5 cropingStyle:(long long)arg6 maxFileSize:(unsigned long long)arg7 minWidth:(unsigned long long)arg8 minHeight:(unsigned long long)arg9 completionBlock:(id /* block */)arg10;
- (long long)maxFileSize;
- (void)setSourceView:(id)arg0;
- (long long)minWidth;
- (id)sourceView;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setMinHeight:(long long)arg0;
- (void)setMinWidth:(long long)arg0;
- (void)reset;
- (long long)minHeight;
- (void)setMaxFileSize:(long long)arg0;
- (BOOL)isMultiSelect;
- (void)setIsMultiSelect:(BOOL)arg0;

@end
