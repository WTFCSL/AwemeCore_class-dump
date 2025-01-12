//
//     Generated by private class-dump
//

@class NSMutableDictionary;
@protocol HTSBundleLoaderDelegate;

@interface HTSBundleLoader : NSObject {
    NSMutableDictionary *_bundleTracker;
    id<HTSBundleLoaderDelegate> _delegate;
}

@property (retain, nonatomic) NSMutableDictionary *bundleTracker;
@property (weak, nonatomic) id<HTSBundleLoaderDelegate> delegate;

+ (BOOL)loadName:(id)arg0;
+ (void)unloadName:(id)arg0;
+ (id)sharedLoader;

- (void)setBundleTracker:(id)arg0;
- (BOOL)loadName:(id)arg0;
- (id)bundleTracker;
- (void)unloadName:(id)arg0;
- (void *)pointerForBundleName:(id)arg0 symbolName:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (id)initPrivate;
- (void)setDelegate:(id)arg0;

@end
