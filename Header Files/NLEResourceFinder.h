//
//     Generated by private class-dump
//

@class NSString;
@protocol NLEBundleDataSource;

@interface NLEResourceFinder : NSObject <NLEResourceFinderProtocol> {
    BOOL _useUUID;
    id<NLEBundleDataSource> _bundleDataSource;
    NSString *_rootPath;
}

@property (retain, nonatomic) id<NLEBundleDataSource> bundleDataSource;
@property (copy, nonatomic) NSString *rootPath;
@property (nonatomic) BOOL useUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resourcePathForNode:(struct shared_ptr<const cut::model::NLEResourceNode> { struct NLEResourceNode *x0; struct __shared_weak_count *x1; })arg0;
- (id)resourcePathForFilePath:(id)arg0;
- (id)initWithRootPath:(id)arg0 bundleDataSource:(id)arg1;
- (id)bundleDataSource;
- (void)setBundleDataSource:(id)arg0;
- (id)initWithBundleDataSource:(id)arg0;
- (void)setUseUUID:(BOOL)arg0;
- (id)assetForResourceNode:(struct shared_ptr<const cut::model::NLEResourceNode> { struct NLEResourceNode *x0; struct __shared_weak_count *x1; })arg0;
- (id)getPathFromDataSource:(struct shared_ptr<const cut::model::NLEResourceNode> { struct NLEResourceNode *x0; struct __shared_weak_count *x1; })arg0;
- (BOOL)useUUID;
- (void).cxx_destruct;
- (id)rootPath;
- (void)setRootPath:(id)arg0;

@end
