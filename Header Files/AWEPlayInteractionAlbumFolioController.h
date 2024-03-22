//
//     Generated by private class-dump
//

@class NSString, AFDAlbumFolioView;

@interface AWEPlayInteractionAlbumFolioController : AWEPlayInteractionNewBaseController <AFDPlayInteractionRichContentExtension> {
    AFDAlbumFolioView *_folioView;
}

@property (retain, nonatomic) AFDAlbumFolioView *folioView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)arg0;
- (void)richAwemeWillBeginDragging;
- (void)richAwemeDidEndDragging;
- (void)richContentContainerWillBeginDragging:(id)arg0;
- (void)richContentContainerDidEndDragging:(id)arg0;
- (void)setupConetext;
- (id)folioView;
- (void)updateFolioInfo;
- (struct AWEAlbumFolioInfo { long long x0; long long x1; })getCurrentFolioInfo;
- (void)setFolioView:(id)arg0;
- (BOOL)leftContainerHasBullet;
- (BOOL)canShowRightTopFolio;
- (BOOL)canShowRightTopFolioWithNote;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;

@end
