//
//     Generated by private class-dump
//

@class NSMutableArray, YYMemoryCache;

@interface AWEEnterpriseWebViewPreloadManager : NSObject {
    NSMutableArray *_urls;
    YYMemoryCache *_preRenderViewCache;
}

@property (retain, nonatomic) NSMutableArray *urls;
@property (retain, nonatomic) YYMemoryCache *preRenderViewCache;

+ (id)sharedInstance;

- (void)preRenderWithURLString:(id)arg0 scene:(id)arg1;
- (id)fetchPreRenderWebViewControllerWithURL:(id)arg0;
- (BOOL)removePreRenderWithURLString:(id)arg0;
- (BOOL)releasePreRenderWithURLString:(id)arg0;
- (BOOL)isURLPreRendered:(id)arg0;
- (id)p_renderedViewControllerWithURLString:(id)arg0;
- (id)preRenderViewCache;
- (void)releaseLeastRecentlyUsedPreRender;
- (id)p_finalPreRenderURLString:(id)arg0 scene:(id)arg1;
- (id)p_preRenderWebViewWithURLString:(id)arg0 scene:(id)arg1;
- (void)setPreRenderViewCache:(id)arg0;
- (id)urls;
- (id)init;
- (void).cxx_destruct;
- (void)setUrls:(id)arg0;

@end
