//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEImageAlbumEditAssetsExportOutputData : NSObject <ACCImageAlbumEditAssetsExportOutputDataProtocol> {
    NSArray *_originalImages;
    NSArray *_compressedFramsImages;
}

@property (copy, nonatomic) NSArray *originalImages;
@property (copy, nonatomic) NSArray *compressedFramsImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)originalImages;
- (id)compressedFramsImages;
- (void)setOriginalImages:(id)arg0;
- (void)setCompressedFramsImages:(id)arg0;
- (void)filtrationValidImageInfoIfNeed;
- (id)downloadTrackInfo;
- (void).cxx_destruct;

@end
