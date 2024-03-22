//
//     Generated by private class-dump
//

@class NSString, NSURL, UIImage, UIView;

@interface BDImageLargeSizeMonitor : NSObject {
    BOOL _monitorEnable;
    BOOL _loadSuccess;
    unsigned long long _fileSizeLimit;
    unsigned long long _memoryLimit;
    double _viewResolutionScaleLimit;
    NSURL *_imageURL;
    double _fileSize;
    UIView *_requestView;
    UIImage *_requestImage;
    NSString *_bizTag;
    NSString *_sceneTag;
    NSString *_pageTag;
    id _userInfo;
}

@property (nonatomic) BOOL monitorEnable;
@property (nonatomic) unsigned long long fileSizeLimit;
@property (nonatomic) unsigned long long memoryLimit;
@property (nonatomic) double viewResolutionScaleLimit;
@property (nonatomic) BOOL loadSuccess;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) double fileSize;
@property (weak, nonatomic) UIView *requestView;
@property (weak, nonatomic) UIImage *requestImage;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *pageTag;
@property (retain, nonatomic) id userInfo;

- (void)setBizTag:(id)arg0;
- (id)bizTag;
- (void)setLoadSuccess:(BOOL)arg0;
- (unsigned long long)fileSizeLimit;
- (void)setFileSizeLimit:(unsigned long long)arg0;
- (double)viewResolutionScaleLimit;
- (void)setViewResolutionScaleLimit:(double)arg0;
- (BOOL)monitorEnable;
- (void)setRequestImage:(id)arg0;
- (void)setMonitorEnable:(BOOL)arg0;
- (id)sceneTag;
- (void)setSceneTag:(id)arg0;
- (void)setPageTag:(id)arg0;
- (void)trackLargeImageMonitor;
- (void)setRequestView:(id)arg0;
- (id)requestView;
- (id)requestImage;
- (id)bd_getViewPath:(id)arg0;
- (id)pathIndexOfSameClass:(id)arg0 child:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (void)setImageURL:(id)arg0;
- (double)fileSize;
- (id)imageURL;
- (void)setMemoryLimit:(unsigned long long)arg0;
- (void)setFileSize:(double)arg0;
- (id)userInfo;
- (unsigned long long)memoryLimit;
- (id)pageTag;
- (BOOL)loadSuccess;

@end
