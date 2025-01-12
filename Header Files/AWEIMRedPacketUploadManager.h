//
//     Generated by private class-dump
//

@class AWEIMRedPacketUploadConfig;
@protocol AWEIMRedPacketUploadManagerProtocol;

@interface AWEIMRedPacketUploadManager : NSObject {
    AWEIMRedPacketUploadConfig *_imageConfig;
    AWEIMRedPacketUploadConfig *_videoConfig;
    id<AWEIMRedPacketUploadManagerProtocol> _imageClient;
    id<AWEIMRedPacketUploadManagerProtocol> _videoClient;
    id<AWEIMRedPacketUploadManagerProtocol> _imageClient2;
}

@property (retain, nonatomic) AWEIMRedPacketUploadConfig *imageConfig;
@property (retain, nonatomic) AWEIMRedPacketUploadConfig *videoConfig;
@property (retain) id<AWEIMRedPacketUploadManagerProtocol> imageClient;
@property (retain) id<AWEIMRedPacketUploadManagerProtocol> videoClient;
@property (retain) id<AWEIMRedPacketUploadManagerProtocol> imageClient2;

+ (id)shareInstance;

- (id)videoConfig;
- (void)setVideoConfig:(id)arg0;
- (id)imageConfig;
- (void)setImageConfig:(id)arg0;
- (void)setVideoClient:(id)arg0;
- (void)setImageClient:(id)arg0;
- (BOOL)isAuthError:(id)arg0;
- (void)uploadFileWithContext:(id)arg0 leftRetry:(long long)arg1;
- (BOOL)checkConfigValid:(id)arg0;
- (id)imageClient;
- (id)videoClient;
- (id)imageClient2;
- (void)setImageClient2:(id)arg0;
- (void).cxx_destruct;
- (void)fetchConfigWithCompletion:(id /* block */)arg0;
- (void)resetConfig;

@end
