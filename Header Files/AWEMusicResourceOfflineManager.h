//
//     Generated by private class-dump
//

@class AWEGeckoCDNManager;

@interface AWEMusicResourceOfflineManager : NSObject {
    AWEGeckoCDNManager *_manager;
}

@property (retain, nonatomic) AWEGeckoCDNManager *manager;

+ (id)cdnDomain;
+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)setManager:(id)arg0;
- (id)manager;

@end
