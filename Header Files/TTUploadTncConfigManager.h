//
//     Generated by private class-dump
//

@class TTUploadTaskParam;

@interface TTUploadTncConfigManager : NSObject {
    TTUploadTaskParam *_tncServerConfig;
}

@property (retain) TTUploadTaskParam *tncServerConfig;

- (void)ttnetServerConfigChanged:(id)arg0;
- (id)tncServerConfig;
- (void)setTncServerConfig:(id)arg0;
- (void)tncConfigParser:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
