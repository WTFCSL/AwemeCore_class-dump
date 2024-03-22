//
//     Generated by private class-dump
//

@class EcTagRelationModel, EcLocalAssetModel, EcCloudAssetModel;

@interface EcUniformAsset : NSObject {
    EcTagRelationModel *_tagRelation;
    EcLocalAssetModel *_localAsset;
    EcCloudAssetModel *_cloudAsset;
}

@property (retain, nonatomic) EcTagRelationModel *tagRelation;
@property (retain, nonatomic) EcLocalAssetModel *localAsset;
@property (retain, nonatomic) EcCloudAssetModel *cloudAsset;

- (id)localAsset;
- (void)setLocalAsset:(id)arg0;
- (id)cloudAsset;
- (id)tagRelation;
- (void)setTagRelation:(id)arg0;
- (void)setCloudAsset:(id)arg0;
- (void).cxx_destruct;

@end
