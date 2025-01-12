//
//     Generated by private class-dump
//

@class NSString, UIImageView, CAShapeLayer, UILabel, BDCTFlow, UIButton;

@interface BDCTTakeOCRPhotoViewController : BDCTTakePhotoBaseViewController <UITextViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    int _maxSide;
    id /* block */ _completionBlock;
    BDCTFlow *_flow;
    CAShapeLayer *_maskLayer;
    UIButton *_backButton;
    UIImageView *_cropFrameImageView;
    UIImageView *_cropInnerImageView;
    UIButton *_photoButton;
    UILabel *_bottomTipLabel;
    UILabel *_sideTipLabel;
    UIButton *_selectAlbumPhotoButton;
    double _compressRatioWeb;
    double _compressRatioNet;
}

@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *cropFrameImageView;
@property (retain, nonatomic) UIImageView *cropInnerImageView;
@property (retain, nonatomic) UIButton *photoButton;
@property (retain, nonatomic) UILabel *bottomTipLabel;
@property (retain, nonatomic) UILabel *sideTipLabel;
@property (retain, nonatomic) UIButton *selectAlbumPhotoButton;
@property (nonatomic) int maxSide;
@property (nonatomic) double compressRatioWeb;
@property (nonatomic) double compressRatioNet;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) BDCTFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithParams:(id)arg0 completion:(id /* block */)arg1;

- (void)setMaxSide:(int)arg0;
- (id)cropFrameImageView;
- (id)cropInnerImageView;
- (id)sideTipLabel;
- (id)bottomTipLabel;
- (id)selectAlbumPhotoButton;
- (id)getMaskPath;
- (id)addImage:(id)arg0 withImage:(id)arg1;
- (void)takePhoto;
- (id)createAttributedText;
- (void)selectPhotoFromAlbum;
- (void)finishTakeOCRWithDisplayImage:(id)arg0 ocrResult:(id)arg1;
- (void)handleSelectedImage:(id)arg0 metaData:(id)arg1 from:(id)arg2;
- (void)showAlertWithTitle:(id)arg0 message:(id)arg1;
- (id)compressImage:(id)arg0 metaData:(id)arg1;
- (id)rotateAndCropImage:(id)arg0 withRectCorners:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 image:(id)arg1;
- (void)quite;
- (int)maxSide;
- (double)compressRatioWeb;
- (void)setCropFrameImageView:(id)arg0;
- (void)setCropInnerImageView:(id)arg0;
- (void)setBottomTipLabel:(id)arg0;
- (void)setSideTipLabel:(id)arg0;
- (void)setSelectAlbumPhotoButton:(id)arg0;
- (void)setCompressRatioWeb:(double)arg0;
- (double)compressRatioNet;
- (void)setCompressRatioNet:(double)arg0;
- (void)layoutViews;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id /* block */)completionBlock;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)cancel;
- (void)viewDidLoad;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg0;
- (id)photoButton;
- (void)setPhotoButton:(id)arg0;
- (id)flow;
- (void)setFlow:(id)arg0;
- (id)cropImage:(id)arg0;

@end
