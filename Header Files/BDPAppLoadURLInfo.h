//
//     Generated by private class-dump
//

@class NSURL, BDPUniqueID, NSString;

@interface BDPAppLoadURLInfo : NSObject {
    NSURL *_requestURL;
    BDPUniqueID *_uniqueID;
    unsigned long long _folder;
    NSString *_realPath;
    NSString *_pluginName;
    NSString *_webviewId;
}

@property (copy, nonatomic) NSURL *requestURL;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long folder;
@property (copy, nonatomic) NSString *realPath;
@property (copy, nonatomic) NSString *pluginName;
@property (copy, nonatomic) NSString *webviewId;

- (void)setRealPath:(id)arg0;
- (id)realPath;
- (id)webviewId;
- (void)setWebviewId:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (unsigned long long)folder;
- (void)setFolder:(unsigned long long)arg0;
- (id)requestURL;
- (void)setRequestURL:(id)arg0;
- (id)pluginName;
- (void)setPluginName:(id)arg0;

@end
