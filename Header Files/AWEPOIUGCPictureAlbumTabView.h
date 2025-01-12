//
//     Generated by private class-dump
//

@class UIButton, AWEPOIUGCSelectAlbumImpl, NSDictionary, NSString, UIView, CAKAlbumViewController, AWEVideoPublishViewModel;

@interface AWEPOIUGCPictureAlbumTabView : UIView <CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate> {
    id /* block */ _closeActionBlock;
    id /* block */ _jumpToQuickShootBlock;
    AWEVideoPublishViewModel *_publishViewModel;
    UIView *_fakeStatusView;
    UIButton *_closeButton;
    NSDictionary *_publishModelChangeMap;
    AWEPOIUGCSelectAlbumImpl *_impm;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly, nonatomic) CAKAlbumViewController *albumViewController;
@property (retain, nonatomic) UIView *fakeStatusView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSDictionary *publishModelChangeMap;
@property (retain, nonatomic) AWEPOIUGCSelectAlbumImpl *impm;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (copy, nonatomic) id /* block */ jumpToQuickShootBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishViewModel;
- (void)closeButtonClicked:(id)arg0;
- (void)setPublishViewModel:(id)arg0;
- (id /* block */)closeActionBlock;
- (void)setCloseActionBlock:(id /* block */)arg0;
- (id)albumViewController;
- (void)recoverOriginalPublishModelMap;
- (id)initWithPublishViewModel:(id)arg0;
- (void)jumpToQuickShoot;
- (void)setJumpToQuickShootBlock:(id /* block */)arg0;
- (void)saveOriginalPublishModelMap:(id)arg0;
- (void)p_setupAlbumView;
- (id)fakeStatusView;
- (id)impm;
- (void)setPublishModelChangeMap:(id)arg0;
- (id)publishModelChangeMap;
- (void)updatePublishModelWithMap:(id)arg0;
- (void)p_updateAlbumViewWithAssets:(id)arg0;
- (void)p_completionWithAssets:(id)arg0;
- (id)commonCustomCellConfig;
- (id /* block */)jumpToQuickShootBlock;
- (void)albumEndAppearanceTransition;
- (void)setFakeStatusView:(id)arg0;
- (void)setImpm:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (void)willDisappear;
- (void)willShow;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
