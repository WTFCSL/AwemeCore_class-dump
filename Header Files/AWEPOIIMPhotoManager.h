//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIIMPhotoManager : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    id /* block */ _photoFinishBlock;
}

@property (copy, nonatomic) id /* block */ photoFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPhotoFinishBlock:(id /* block */)arg0;
- (void)presentPhotoController:(id)arg0;
- (id /* block */)photoFinishBlock;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;

@end
