//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface BDPODRCodeDownloaderManager : NSObject {
    NSMutableDictionary *_downloaderMap;
}

@property (retain, nonatomic) NSMutableDictionary *downloaderMap;

+ (id)sharedManager;

- (id)downloaderMap;
- (void)setDownloaderMap:(id)arg0;
- (id)downloaderWithModel:(id)arg0 codesXzPath:(id)arg1 decompressPath:(id)arg2;
- (void)releaseDownloaderIfNeedWithModel:(id)arg0;
- (void).cxx_destruct;

@end