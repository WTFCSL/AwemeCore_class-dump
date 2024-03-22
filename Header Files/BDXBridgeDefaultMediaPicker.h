//
//     Generated by private class-dump
//

@class UIImagePickerController, BDXBridgeChooseMediaMethodParamModel, NSString;

@interface BDXBridgeDefaultMediaPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, BDXBridgeChooseMediaPicker> {
    BDXBridgeChooseMediaMethodParamModel *_params;
    id /* block */ _completionHandler;
    UIImagePickerController *_imagePicker;
}

@property (retain, nonatomic) BDXBridgeChooseMediaMethodParamModel *params;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) UIImagePickerController *imagePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCameraDenied;
- (id)writeImageDataToDisk:(id)arg0;
- (void)finishWithResultModel:(id)arg0 status:(id)arg1;
- (float)getCropRadio:(id)arg0 sideWidth:(double)arg1;
- (BOOL)supportedWithParamModel:(id)arg0;
- (id)mediaPickerWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)createTemporaryPathforVideoFile:(id)arg0;
- (id)imageDataForImageNew:(id)arg0;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (id)imageDataForImage:(id)arg0;
- (id /* block */)completionHandler;
- (id)params;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (void)setParams:(id)arg0;
- (id)imagePicker;
- (void)setImagePicker:(id)arg0;

@end
