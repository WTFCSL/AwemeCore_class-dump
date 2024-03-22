//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray;

@protocol AWECloudAlbumDataManagerProtocol <NSObject>

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSArray *selectedAssets;

- (void)setSelectedAssets:(id)arg0;
- (id)getItemAtIndex:(id)arg0;
- (void)fetchRemoteAlbumList:(id /* block */)arg0;
- (void)createNewAlbum:(id)arg0 complete:(id /* block */)arg1;
- (void)getNewAlbumThumbnail:(id /* block */)arg0;
- (void)trackAlbumSelected:(id)arg0;
- (void)addItem:(id)arg0;
- (void)setItems:(id)arg0;
- (id)items;
- (id)initWithAssets:(id)arg0;
- (id)selectedAssets;
- (long long)countOfItems;

@end
