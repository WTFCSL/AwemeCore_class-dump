//
//     Generated by private class-dump
//

@class NSString, PHAsset;

@interface EcAssetImportModel : NSObject {
    BOOL _deleteOnEnd;
    long long _type;
    long long _subtype;
    NSString *_localId;
    NSString *_path;
    PHAsset *_asset;
}

@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *localId;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL deleteOnEnd;
@property (retain, nonatomic) PHAsset *asset;

- (BOOL)deleteOnEnd;
- (void)setDeleteOnEnd:(BOOL)arg0;
- (void)setPath:(id)arg0;
- (long long)subtype;
- (void).cxx_destruct;
- (id)localId;
- (void)setLocalId:(id)arg0;
- (id)path;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setSubtype:(long long)arg0;
- (id)asset;
- (void)setAsset:(id)arg0;

@end
