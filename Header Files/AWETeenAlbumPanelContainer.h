//
//     Generated by private class-dump
//

@class AWETeenAlbumPanelCollectionView, AWETeenAlbumDataController, AWETeenAlbumPanelCollectView, UILabel, AWETeenAlbumPanelNoDataView, DUXTeenPopover;

@interface AWETeenAlbumPanelContainer : AWETeenBasePanelContainer {
    AWETeenAlbumPanelCollectionView *_collectionView;
    AWETeenAlbumPanelCollectView *_albumCollectView;
    AWETeenAlbumDataController *_dataController;
    UILabel *_titleLabel;
    UILabel *_episodeLabel;
    AWETeenAlbumPanelNoDataView *_noDataView;
    DUXTeenPopover *_popover;
}

@property (retain, nonatomic) AWETeenAlbumPanelCollectionView *collectionView;
@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *episodeLabel;
@property (retain, nonatomic) AWETeenAlbumPanelNoDataView *noDataView;
@property (retain, nonatomic) AWETeenAlbumPanelCollectView *albumCollectView;
@property (retain, nonatomic) DUXTeenPopover *popover;

- (void)setDataController:(id)arg0;
- (id)initWithDataController:(id)arg0;
- (void)p_setupView;
- (id)episodeLabel;
- (void)setEpisodeLabel:(id)arg0;
- (void)p_addCollectionView;
- (void)p_addHeader;
- (id)albumCollectView;
- (void)presentWithPlayingIndex:(long long)arg0;
- (void)showAlbumCollectSuccessPopover;
- (void)setAlbumCollectView:(id)arg0;
- (void)didDismiss;
- (void).cxx_destruct;
- (id)collectionView;
- (id)popover;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (void)setPopover:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)dataController;
- (id)noDataView;
- (void)setNoDataView:(id)arg0;

@end
