//
//     Generated by private class-dump
//

@class BDPUniqueID;

@interface BDPVideoPreloadPluginBindAppModel : BDPVideoPreloadPluginModel {
    BOOL _callFromWorker;
    BDPUniqueID *_uniqueID;
    long long _pageID;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long pageID;
@property (nonatomic) BOOL callFromWorker;

- (BOOL)callFromWorker;
- (void)setCallFromWorker:(BOOL)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setPageID:(long long)arg0;
- (void)setUniqueID:(id)arg0;
- (long long)pageID;

@end
