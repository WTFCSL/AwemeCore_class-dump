//
//     Generated by private class-dump
//

@class IESMetadataStorageConfiguration, IESMetadataIndexesMap, IESMetadataStorageInfo, IESMetadataMappedFile;

@interface IESMetadataStorage : NSObject {
    IESMetadataStorageConfiguration *_configuration;
    IESMetadataStorageInfo *_storageInfo;
    IESMetadataMappedFile *_mappedFile;
    IESMetadataIndexesMap *_indexesMap;
}

@property (retain, nonatomic) IESMetadataStorageConfiguration *configuration;
@property (retain, nonatomic) IESMetadataStorageInfo *storageInfo;
@property (retain, nonatomic) IESMetadataMappedFile *mappedFile;
@property (retain, nonatomic) IESMetadataIndexesMap *indexesMap;
@property (readonly, nonatomic) int version;

+ (id)storageWithConfiguration:(id)arg0;

- (id)storageInfo;
- (void)setStorageInfo:(id)arg0;
- (id)metadatasArrayWithTransformBlock:(id /* block */)arg0 compareBlock:(id /* block */)arg1;
- (void)setupStorageIfNeeded;
- (id)mappedFile;
- (void)saveStorageInfoToLocal;
- (id)metadataContentDataAtIndex:(int)arg0 offset:(int)arg1;
- (int)indexForMetadata:(struct NSObject { Class x0; } *)arg0;
- (void)resetFileWithMetadatasArray:(id)arg0;
- (BOOL)writeMetadata:(struct NSObject { Class x0; } *)arg0 index:(int)arg1 error:(id *)arg2;
- (void)setMappedFile:(id)arg0;
- (void)setIndexesMap:(id)arg0;
- (id)storageInfoFromLocal;
- (BOOL)writeMetadataBinaryData:(id)arg0 index:(int)arg1 offset:(int)arg2 error:(id *)arg3;
- (id)metadatasArrayWithTransformBlock:(id /* block */)arg0;
- (int)writeMetadata:(struct NSObject { Class x0; } *)arg0 error:(id *)arg1;
- (void)deleteMetadata:(struct NSObject { Class x0; } *)arg0;
- (void)deleteAllMetadata;
- (void)setNeedCheckDuplicatedMetadatas;
- (id)indexesMap;
- (void).cxx_destruct;
- (int)version;
- (id)configuration;
- (void)setConfiguration:(id)arg0;

@end