//
//     Generated by private class-dump
//

@class UIColor, UIImage, NSString;

@interface AWEFileUploadTool : NSObject <UIDocumentPickerDelegate, UIDocumentInteractionControllerDelegate> {
    id /* block */ _completion;
    UIColor *_tabBarTintColor;
    UIColor *_tabBarBarTintColor;
    UIImage *_tabBarBackgroundImage;
    UIImage *_tabBarShadowImage;
    UIColor *_barButtonItemTintColor;
}

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIColor *tabBarTintColor;
@property (retain, nonatomic) UIColor *tabBarBarTintColor;
@property (retain, nonatomic) UIImage *tabBarBackgroundImage;
@property (retain, nonatomic) UIImage *tabBarShadowImage;
@property (retain, nonatomic) UIColor *barButtonItemTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFileUploadTool;

- (id)modelString;
- (BOOL)isNeedChangeTabColor;
- (void)setTabBarBarTintColor:(id)arg0;
- (void)setTabBarBackgroundImage:(id)arg0;
- (void)setTabBarShadowImage:(id)arg0;
- (void)setBarButtonItemTintColor:(id)arg0;
- (void)colorReset;
- (void)callbacFailWithCode:(long long)arg0 msg:(id)arg1;
- (id)tabBarBarTintColor;
- (id)tabBarBackgroundImage;
- (id)barButtonItemTintColor;
- (id)errorCode:(long long)arg0 msg:(id)arg1;
- (void)callbacSuccessWithFileUrl:(id)arg0;
- (void)presentDocumentPickerWithUtis:(id)arg0 compeletion:(id /* block */)arg1;
- (void)uploadFile:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (id)audioSelectionJsbResponseData:(id)arg0 error:(id)arg1;
- (id)tabBarShadowImage;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)documentPickerWasCancelled:(id)arg0;
- (void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1;
- (id)tabBarTintColor;
- (void)setTabBarTintColor:(id)arg0;

@end
