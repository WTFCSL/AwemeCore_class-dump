//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol AWECloudAlbumPopupContentViewProtocol, AWECloudAlbumPopupVCProtocol;

@interface AWECloudAlbumPopupContentViewController : UIViewController <AWECloudAlbumPopupContentVCProtocol> {
    UIView<AWECloudAlbumPopupContentViewProtocol> *contentView;
    id<AWECloudAlbumPopupVCProtocol> delegate;
}

@property (retain, nonatomic) UIView<AWECloudAlbumPopupContentViewProtocol> *contentView;
@property (weak, nonatomic) id<AWECloudAlbumPopupVCProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancleAction;
- (id)initWithPopupContentView:(id)arg0;
- (void).cxx_destruct;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;
- (double)contentViewHeight;

@end