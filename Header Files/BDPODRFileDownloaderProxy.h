//
//     Generated by private class-dump
//

@class NSMutableSet, BDPODRCodeDownloader;

@interface BDPODRFileDownloaderProxy : NSObject {
    BDPODRCodeDownloader *_downloader;
    NSMutableSet *_mpids;
}

@property (retain, nonatomic) BDPODRCodeDownloader *downloader;
@property (retain, nonatomic) NSMutableSet *mpids;

- (void)setDownloader:(id)arg0;
- (id)mpids;
- (void)setMpids:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)downloader;

@end