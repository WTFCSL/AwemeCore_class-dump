//
//     Generated by private class-dump
//

@class BDCReaderThemeConfig, BDCReaderZoomConfig;

@interface BDCReaderConfig : NSObject {
    BOOL _shouldPreloadChapter;
    BDCReaderThemeConfig *_themeConfig;
    BDCReaderZoomConfig *_zoomConfig;
    unsigned long long _pageMode;
}

@property (retain, nonatomic) BDCReaderThemeConfig *themeConfig;
@property (retain, nonatomic) BDCReaderZoomConfig *zoomConfig;
@property (nonatomic) unsigned long long pageMode;
@property (nonatomic) BOOL shouldPreloadChapter;

- (id)themeConfig;
- (void)setThemeConfig:(id)arg0;
- (id)zoomConfig;
- (void)setZoomConfig:(id)arg0;
- (unsigned long long)pageMode;
- (void)setPageMode:(unsigned long long)arg0;
- (BOOL)shouldPreloadChapter;
- (void)setShouldPreloadChapter:(BOOL)arg0;
- (id)safeNovelConfig;
- (id)init;
- (void).cxx_destruct;

@end
