//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicPlaylistEditUploadService : NSObject {
    NSString *_coverURL;
}

@property (retain, nonatomic) NSString *coverURL;

+ (id)sharedInstance;

- (void)uploadPlaylistModel:(id)arg0 originalInfo:(id)arg1 isMiniLuna:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)notifyPlaylistChangedWithModel:(id)arg0 originalInfo:(id)arg1;
- (void)uploadToPictureBedWithImage:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
