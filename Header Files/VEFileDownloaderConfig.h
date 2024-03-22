//
//     Generated by private class-dump
//

@class NSURL, NSDictionary, VEExternalCache;

@interface VEFileDownloaderConfig : NSObject {
    NSURL *_url;
    NSURL *_cacheDir;
    NSDictionary *_headerParams;
    VEExternalCache *_externalCache;
    id /* block */ _VEDownloaderInfoCallback;
}

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSURL *cacheDir;
@property (copy, nonatomic) NSDictionary *headerParams;
@property (retain, nonatomic) VEExternalCache *externalCache;
@property (copy, nonatomic) id /* block */ VEDownloaderInfoCallback;

- (void)setCacheDir:(id)arg0;
- (id)cacheDir;
- (id)headerParams;
- (void)setHeaderParams:(id)arg0;
- (id)externalCache;
- (void)setExternalCache:(id)arg0;
- (id /* block */)VEDownloaderInfoCallback;
- (void)setVEDownloaderInfoCallback:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)url;

@end