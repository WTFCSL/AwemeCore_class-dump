//
//     Generated by private class-dump
//

@protocol BDPMetaCacheManageable <NSObject>

- (id)getUpdateMetaWithID:(id)arg0;
- (id)getInUseMetaWithID:(id)arg0;
- (void)removePkgCacheWithModel:(id)arg0;
- (void)setInUseMetaWithID:(id)arg0 appModel:(id)arg1;
- (void)setUpdateMetaWithID:(id)arg0 appModel:(id)arg1;
- (id)allInuseAppIds;
- (void)setBatchInuseMetas:(id)arg0;

@end