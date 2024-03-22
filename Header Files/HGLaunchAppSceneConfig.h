//
//     Generated by private class-dump
//

@class NSArray;

@interface HGLaunchAppSceneConfig : NSObject {
    BOOL _canLaunchApp;
    BOOL _canDownloadApp;
    NSArray *_launchAllowList;
    NSArray *_launchGrayList;
    NSArray *_downloadAllowList;
    NSArray *_downloadGrayList;
}

@property (nonatomic) BOOL canLaunchApp;
@property (nonatomic) BOOL canDownloadApp;
@property (copy, nonatomic) NSArray *launchAllowList;
@property (copy, nonatomic) NSArray *launchGrayList;
@property (copy, nonatomic) NSArray *downloadAllowList;
@property (copy, nonatomic) NSArray *downloadGrayList;

+ (id)modelCustomPropertyMapper;

- (id)launchAllowList;
- (id)launchGrayList;
- (id)downloadAllowList;
- (id)downloadGrayList;
- (void)setCanLaunchApp:(BOOL)arg0;
- (void)setCanDownloadApp:(BOOL)arg0;
- (BOOL)canDownloadApp;
- (BOOL)canLaunchAppInScene:(id)arg0;
- (BOOL)canDownloadAppInScene:(id)arg0;
- (void)setLaunchAllowList:(id)arg0;
- (void)setLaunchGrayList:(id)arg0;
- (void)setDownloadAllowList:(id)arg0;
- (void)setDownloadGrayList:(id)arg0;
- (void).cxx_destruct;
- (BOOL)canLaunchApp;

@end
