//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, UIView;

@interface AWEPhotosPreviewViewControllerConfigurationBuilder : NSObject {
    BOOL _showSaveButton;
    BOOL _disableZoomTransition;
    BOOL _allowLoop;
    BOOL _showCloseButton;
    NSString *_uniqueId;
    NSDictionary *_trackParamDict;
    NSArray *_thumbnailURLs;
    NSArray *_imageURLs;
    NSArray *_titles;
    NSArray *_watermarks;
    NSArray *_imageReqConfigs;
    long long _defaultIdx;
    UIView *_scrollToMoreView;
    id /* block */ _scrollToMoreCallback;
}

@property (copy, nonatomic) NSString *uniqueId;
@property (nonatomic) BOOL showSaveButton;
@property (nonatomic) BOOL disableZoomTransition;
@property (nonatomic) BOOL allowLoop;
@property (nonatomic) BOOL showCloseButton;
@property (retain, nonatomic) NSDictionary *trackParamDict;
@property (copy, nonatomic) NSArray *thumbnailURLs;
@property (copy, nonatomic) NSArray *imageURLs;
@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *watermarks;
@property (copy, nonatomic) NSArray *imageReqConfigs;
@property (nonatomic) long long defaultIdx;
@property (retain, nonatomic) UIView *scrollToMoreView;
@property (copy, nonatomic) id /* block */ scrollToMoreCallback;

- (BOOL)disableZoomTransition;
- (void)setDisableZoomTransition:(BOOL)arg0;
- (void)setDefaultIdx:(long long)arg0;
- (void)setAllowLoop:(BOOL)arg0;
- (BOOL)showSaveButton;
- (void)setShowSaveButton:(BOOL)arg0;
- (BOOL)allowLoop;
- (id)trackParamDict;
- (void)setTrackParamDict:(id)arg0;
- (id)watermarks;
- (void)setWatermarks:(id)arg0;
- (id)imageReqConfigs;
- (void)setImageReqConfigs:(id)arg0;
- (long long)defaultIdx;
- (id)scrollToMoreView;
- (void)setScrollToMoreView:(id)arg0;
- (id /* block */)scrollToMoreCallback;
- (void)setScrollToMoreCallback:(id /* block */)arg0;
- (id)uniqueId;
- (void)setUniqueId:(id)arg0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)arg0;
- (id)titles;
- (void)setTitles:(id)arg0;
- (id)imageURLs;
- (void)setImageURLs:(id)arg0;
- (id)thumbnailURLs;
- (void)setThumbnailURLs:(id)arg0;
- (void)setShowCloseButton:(BOOL)arg0;
- (BOOL)showCloseButton;

@end