//
//     Generated by private class-dump
//

@class YYDiskCache, NSMutableArray, NSString;

@interface AWEAwemeViewedManager : NSObject <AWEAwemeViewedManagerProtocol> {
    NSMutableArray *_viewerListArray;
    NSMutableArray *_viewerListArrayV2;
    YYDiskCache *_diskCache;
}

@property (retain, nonatomic) NSMutableArray *viewerListArray;
@property (retain, nonatomic) NSMutableArray *viewerListArrayV2;
@property (retain, nonatomic) YYDiskCache *diskCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)dataControllerWithAwemeID:(id)arg0;
- (void)removeAllData;
- (void)setDiskCache:(id)arg0;
- (id)dataControllerWithAwemeIDV2:(id)arg0;
- (void)updateViewerListArrayV2:(id)arg0;
- (void)updateViewerListArray:(id)arg0;
- (void)setViewerListArray:(id)arg0;
- (void)setViewerListArrayV2:(id)arg0;
- (id)viewerListArray;
- (id)viewerListArrayV2;
- (void)setViewerCacheModel:(id)arg0 withAwemeID:(id)arg1;
- (id)getViewerCacheModelWithAwemeID:(id)arg0;
- (unsigned long long)totalCostSize;
- (void)setCodeGenResponseObject:(id)arg0 withAwemeID:(id)arg1;
- (id)getCodeGenViewerCacheModelWithAwemeID:(id)arg0;
- (void).cxx_destruct;
- (id)diskCache;

@end