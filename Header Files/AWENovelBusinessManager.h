//
//     Generated by private class-dump
//

@interface AWENovelBusinessManager : NSObject

+ (BOOL)handleNovelReader:(id)arg0 urlString:(id)arg1 novelPageType:(id)arg2;
+ (BOOL)handleNovelTab:(id)arg0 urlString:(id)arg1 novelPageType:(id)arg2;
+ (BOOL)handleWebView:(id)arg0 urlString:(id)arg1 novelPageType:(id)arg2;
+ (BOOL)handleComic:(id)arg0 urlString:(id)arg1 novelPageType:(id)arg2;
+ (BOOL)handleNovelLynx:(id)arg0 urlString:(id)arg1 novelPageType:(id)arg2;
+ (BOOL)handleStoryReader:(id)arg0 urlString:(id)arg1 novelPageType:(id)arg2;
+ (BOOL)handleNovelVip:(id)arg0 urlString:(id)arg1 novelPageType:(id)arg2;
+ (BOOL)handleNovelVipRestore:(id)arg0 urlString:(id)arg1 novelPageType:(id)arg2;
+ (void)goNewLynxStoryReaderWithOriginParamObj:(id)arg0 urlString:(id)arg1;
+ (void)goNewWebStoryReaderWithOriginParamObj:(id)arg0 urlString:(id)arg1;
+ (BOOL)openURL:(id)arg0;

- (BOOL)canOpenURL:(id)arg0;

@end
