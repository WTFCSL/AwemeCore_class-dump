//
//     Generated by private class-dump
//

@protocol AWECloudAlbumDetailListCellModelProtocol, AWECloudAlbumDetailCellDelegate;

@protocol AWECloudAlbumDetailCellProtocol <NSObject>

@property (retain, nonatomic) id<AWECloudAlbumDetailListCellModelProtocol> cellModel;
@property (weak, nonatomic) id<AWECloudAlbumDetailCellDelegate> delegate;

- (void)setCellModel:(id)arg0;
- (void)refresh;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)cellModel;

@end
