//
//     Generated by private class-dump
//

@class CAKAlbumAssetCacheKey, PHFetchResult, NSString, NSDate, CKAAlbumCollectionModel, PHAssetCollection;

@interface CAKCollectionModel : NSObject <CAKCollectionModelProtocol> {
    PHAssetCollection *assetCollection;
    NSDate *lastUpdateDate;
    PHFetchResult *result;
    CAKAlbumAssetCacheKey *resultKey;
    CKAAlbumCollectionModel *_collectionModel;
}

@property (retain, nonatomic) CKAAlbumCollectionModel *collectionModel;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) PHFetchResult *result;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (retain, nonatomic) CAKAlbumAssetCacheKey *resultKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getCoverImageWithCompletion:(id /* block */)arg0;
- (id)resultKey;
- (void)updateResult:(id)arg0;
- (void)setResultKey:(id)arg0;
- (id)initWithCKACollectionModel:(id)arg0;
- (id)initWithCollectionModel:(id)arg0 fetchResult:(id)arg1;
- (void)setResult:(id)arg0;
- (void)setLastUpdateDate:(id)arg0;
- (void).cxx_destruct;
- (void)setCollectionModel:(id)arg0;
- (id)collectionName;
- (id)collectionModel;
- (id)result;
- (id)localIdentifier;
- (id)lastUpdateDate;
- (long long)count;
- (id)assetCollection;
- (void)setAssetCollection:(id)arg0;
- (BOOL)isCameraRoll;

@end
