//
//     Generated by private class-dump
//

@class AWECloudAlbumDetailDownloadViewModel, AWECloudAlbumDetailDownloadHandler, NSString;
@protocol AWECloudAlbumDetailAlertServiceProtocol;

@interface AWECloudAlbumDetailDownloadComponent : AWECloudAlbumDetailBaseComponent <AWECADDHandlerDelegate, AWECADDHandlerDataSource> {
    id<AWECloudAlbumDetailAlertServiceProtocol> _alertService;
    AWECloudAlbumDetailDownloadViewModel *_viewModel;
    AWECloudAlbumDetailDownloadHandler *_handler;
}

@property (weak, nonatomic) id<AWECloudAlbumDetailAlertServiceProtocol> alertService;
@property (retain, nonatomic) AWECloudAlbumDetailDownloadViewModel *viewModel;
@property (retain, nonatomic) AWECloudAlbumDetailDownloadHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidLoad;
- (id)serviceBinding;
- (id)alertService;
- (void)setAlertService:(id)arg0;
- (void)download_shouldExitSelectMode;
- (id)download_client;
- (id)download_taskKey;
- (id)download_containerView;
- (id)download_createAlertView;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (void)setHandler:(id)arg0;
- (id)viewModel;
- (id)handler;

@end
