//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, CAKModalTransitionDelegate;

@interface AWEPluginVideoCustomImpl : NSObject <BDPVideoPickerPluginDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate> {
    NSMutableDictionary *_callbackDict;
    CAKModalTransitionDelegate *_transitionDelegate;
}

@property (retain, nonatomic) NSMutableDictionary *callbackDict;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)setCallbackDict:(id)arg0;
- (id)listViewConfigForAlbumViewController:(id)arg0;
- (id)albumViewControllerConfigForFooter:(id)arg0;
- (id)albumViewControllerConfigForSelectedAssetsView:(id)arg0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)arg0;
- (void)albumViewController:(id)arg0 didClickNextButtonWithSourceType:(long long)arg1 fetchedAlbumAssets:(id)arg2;
- (void)albumViewController:(id)arg0 didDismissWithPanProgress:(double)arg1;
- (void)albumViewControllerDidClickCancelButton:(id)arg0;
- (void)bdp_showVideoPickerWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)bdp_showAwemeVideoPickerWithModel:(id)arg0 completion:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (id)callbackDict;

@end
