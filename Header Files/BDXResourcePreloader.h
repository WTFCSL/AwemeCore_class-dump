//
//     Generated by private class-dump
//

@interface BDXResourcePreloader : NSObject

+ (void)schemaPreload:(id)arg0 taskConfig:(id)arg1;
+ (void)loadResource:(id)arg0 taskConfig:(id)arg1;
+ (void)dealNotificationAction:(id)arg0;
+ (id)resourcePreloaderSerialQueue;
+ (id)concurrentOperationQueue;
+ (void)_loadResource:(id)arg0 taskConfig:(id)arg1;
+ (void)preloadImageWithConfig:(id)arg0 preloadItem:(id)arg1 taskConfig:(id)arg2;
+ (void)gurdPreloadWithConfig:(id)arg0 preloadItem:(id)arg1 taskConfig:(id)arg2;
+ (void)commonPreloadWithConfig:(id)arg0 preloadItem:(id)arg1 taskConfig:(id)arg2;
+ (void)monitorFetchEventWithURLString:(id)arg0 success:(BOOL)arg1 metric:(id)arg2 res_tag:(id)arg3 res_version:(id)arg4 res_from:(id)arg5 res_url:(id)arg6 res_channel:(id)arg7 res_message:(id)arg8;
+ (id)serialOperationQueue;

@end
