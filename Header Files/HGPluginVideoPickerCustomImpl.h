//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface HGPluginVideoPickerCustomImpl : NSObject <HGVideoPickerPluginDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    NSMutableDictionary *_callbackDict;
}

@property (retain, nonatomic) NSMutableDictionary *callbackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)albumPickerWithModel:(id)arg0;
- (void)showPicker:(id)arg0 completion:(id /* block */)arg1;
- (id)cameraPickerWithModel:(id)arg0;
- (void)hg_showVideoPickerWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setCallbackDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (id)callbackDict;

@end
