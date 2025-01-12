//
//     Generated by private class-dump
//

@class EcClient, NSString, WCTDatabase;

@interface EcWCDBManager : NSObject {
    WCTDatabase *_database;
    NSString *_path;
    EcClient *_client;
}

@property (weak, nonatomic) EcClient *client;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) WCTDatabase *database;

- (BOOL)insertOrReplaceObjects:(id)arg0 into:(id)arg1;
- (void)runTransaction:(id /* block */)arg0;
- (id)objectForTagId:(unsigned long long)arg0;
- (id)tagRelationModelByCloudId:(unsigned long long)arg0;
- (BOOL)deleteTagRelationModel:(id)arg0;
- (BOOL)deleteAssetByTagId:(unsigned long long)arg0;
- (id)tagRelationModelTagId:(unsigned long long)arg0 linkId:(unsigned long long)arg1;
- (id)tagRelationModelTagId:(unsigned long long)arg0 addUTCMS:(unsigned long long)arg1 updateUTCMS:(unsigned long long)arg2 linkId:(unsigned long long)arg3 limit:(long long)arg4;
- (id)tagModelByCoverLinks:(id)arg0;
- (id)tagModelByTagIds:(id)arg0;
- (id)tagModelByCursor:(id)arg0;
- (id)objectForlocalId:(id)arg0;
- (id)fetchUpdateCursor;
- (void)updateNextCursor:(id)arg0;
- (void)initEcDbTable;
- (id)objectForcloudId:(unsigned long long)arg0;
- (id)objectForUid:(unsigned long long)arg0;
- (id)tagRelationModelByTagId:(unsigned long long)arg0 cloudId:(unsigned long long)arg1;
- (BOOL)deleteLocalAssetByTagId:(unsigned long long)arg0;
- (id)uploadItemModelByTaskKey:(id)arg0;
- (BOOL)deleteUploadItemModelTask:(id)arg0;
- (BOOL)deleteUploadItemModelTaskWithAssetId:(id)arg0;
- (BOOL)deleteUploadItemModelTaskWithAssetIds:(id)arg0 taskKey:(id)arg1;
- (id)getAllNeedRemoveModel;
- (BOOL)deleteSourceFileWithAssetId:(id)arg0;
- (void)setPath:(id)arg0;
- (id)database;
- (void).cxx_destruct;
- (void)setDatabase:(id)arg0;
- (void)setClient:(id)arg0;
- (void)close;
- (id)path;
- (id)client;
- (id)initWithClient:(id)arg0;

@end
