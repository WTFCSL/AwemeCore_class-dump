//
//     Generated by private class-dump
//

@class NSString, NSBundle, NSDictionary;

@interface IESLiveResouceBundle : NSObject {
    BOOL _isImageFromAssets;
    IESLiveResouceBundle *_parent;
    NSString *_bundleName;
    NSBundle *_bundle;
    NSBundle *_mainBundle;
    NSString *_category;
    NSDictionary *_assetManagers;
}

@property (retain, nonatomic) IESLiveResouceBundle *parent;
@property (copy, nonatomic) NSString *bundleName;
@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSBundle *mainBundle;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) BOOL isImageFromAssets;
@property (copy, nonatomic) NSDictionary *assetManagers;

+ (id)hookersForCategory:(id)arg0;
+ (void)addPreHook:(id /* block */)arg0 forCategory:(id)arg1;
+ (void)addPostHook:(id /* block */)arg0 forCategory:(id)arg1;
+ (void)removeHooker:(id)arg0 forCategory:(id)arg1;
+ (void)removeAllHookersForCategory:(id)arg0;
+ (id)loadAssetBundleWithCategory:(id)arg0;
+ (id)assetBundleWithBundleName:(id)arg0;
+ (id)assetBundleNameWithDynamicKey:(id)arg0;
+ (id)assetBundleNameWithCategory:(id)arg0;
+ (void)useBundle:(id)arg0 forCategory:(id)arg1;
+ (void)useBundleName:(id)arg0 forDynamicKey:(id)arg1;
+ (id)assetBundleWithCategory:(id)arg0;
+ (void)setEnableFileCache:(BOOL)arg0;
+ (BOOL)enableFileCache;
+ (void)addHooker:(id)arg0 forCategory:(id)arg1;
+ (void)applyAdjunct:(id)arg0 forCategory:(id)arg1;
+ (id)loadBundleNamesWithCategory:(id)arg0;
+ (void)switchToBundle:(id)arg0 forCategory:(id)arg1;
+ (void)load;

- (id /* block */)alphaColor;
- (id)hook_objectForKey:(id)arg0 type:(id)arg1;
- (id)hookers;
- (id /* block */)preHookers;
- (id /* block */)postHookers;
- (void)setHookers:(id)arg0;
- (void)addPreHook:(id /* block */)arg0;
- (void)addPostHook:(id /* block */)arg0;
- (void)removeHooker:(id)arg0;
- (void)removeAllHookers;
- (id /* block */)is;
- (id /* block */)pageNoQuery;
- (id /* block */)fstring;
- (id /* block */)astring;
- (id /* block */)afstring;
- (id /* block */)infoDic;
- (void)setIsImageFromAssets:(BOOL)arg0;
- (BOOL)isImageFromAssets;
- (void)setAssetManagers:(id)arg0;
- (id)objectForKey:(id)arg0 type:(id)arg1;
- (void)addHooker:(id)arg0;
- (void)applyAdjunct:(id)arg0;
- (id /* block */)afilePath;
- (id /* block */)filePathInfolder;
- (id /* block */)colorTemplate;
- (id /* block */)colorTemplate;
- (id /* block */)colorTemplate;
- (id /* block */)bundlePath;
- (id /* block */)style;
- (id)bundle;
- (id /* block */)color;
- (id)initWithBundlePath:(id)arg0;
- (void)setParent:(id)arg0;
- (id)category;
- (id /* block */)filePath;
- (id /* block */)page;
- (void).cxx_destruct;
- (id /* block */)value;
- (void)setBundle:(id)arg0;
- (id /* block */)image;
- (id /* block */)colorName;
- (id)parent;
- (id /* block */)config;
- (void)setMainBundle:(id)arg0;
- (id)bundleName;
- (id)mainBundle;
- (void)setBundleName:(id)arg0;
- (void)setCategory:(id)arg0;
- (id)initWithBundle:(id)arg0;
- (id)assetManagers;
- (id /* block */)string;
- (id)initWithBundleName:(id)arg0;

@end
