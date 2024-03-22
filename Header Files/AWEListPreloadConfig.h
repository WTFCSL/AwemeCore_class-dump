//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWEListPreloadConfig : NSObject {
    BOOL _banPreload;
    BOOL _wifiOnly;
    BOOL _startWhenScrollToTop;
    NSNumber *_displayPercent;
    NSNumber *_preloadSize;
}

@property (retain, nonatomic) NSNumber *displayPercent;
@property (retain, nonatomic) NSNumber *preloadSize;
@property (nonatomic) BOOL banPreload;
@property (nonatomic) BOOL wifiOnly;
@property (nonatomic) BOOL startWhenScrollToTop;

- (id)preloadSize;
- (void)setPreloadSize:(id)arg0;
- (BOOL)wifiOnly;
- (void)setWifiOnly:(BOOL)arg0;
- (void)setBanPreload:(BOOL)arg0;
- (void)setDisplayPercent:(id)arg0;
- (void)setStartWhenScrollToTop:(BOOL)arg0;
- (id)displayPercent;
- (BOOL)banPreload;
- (BOOL)startWhenScrollToTop;
- (void).cxx_destruct;
- (id)defaultConfig;

@end
