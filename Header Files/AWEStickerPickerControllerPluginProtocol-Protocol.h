//
//     Generated by private class-dump
//

@protocol AWEStickerPickerControllerPluginProtocol <NSObject>

@optional

- (void)controllerViewDidLoad:(id)arg0;
- (void)controllerViewLayout:(id)arg0;
- (void)controller:(id)arg0 willShowOnView:(id)arg1;
- (void)controller:(id)arg0 didShowOnView:(id)arg1;
- (void)controller:(id)arg0 willDimissFromView:(id)arg1;
- (void)controller:(id)arg0 didDismissFromView:(id)arg1;
- (void)controller:(id)arg0 didSelectNewSticker:(id)arg1 oldSticker:(id)arg2;
- (void)controller:(id)arg0 didSelectCategory:(id)arg1;
- (void)controllerWillSelecteDefaultCategory:(id)arg0;
- (id)layoutManager;
- (void)setLayoutManager:(id)arg0;
- (void)controllerWillHideSearchKeyBoard:(id)arg0;
- (void)controllerWillShowSearchKeyBoard:(id)arg0;

@end
