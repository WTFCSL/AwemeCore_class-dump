//
//     Generated by private class-dump
//

@class NSString, NSBundle, NSMutableDictionary;

@interface IESECBundle : NSObject {
    NSString *_bundleName;
    NSString *_identifier;
    NSBundle *_localBundle;
    IESECBundle *_parent;
    NSMutableDictionary *_assetManagers;
}

@property (class, readonly) IESECBundle *ecBundle;

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSBundle *localBundle;
@property (retain, nonatomic) IESECBundle *parent;
@property (retain, nonatomic) NSMutableDictionary *assetManagers;

+ (id)ecBundle;
+ (id)bundleWithIdentifier:(id)arg0;

- (void)setAssetManagers:(id)arg0;
- (id)objectForKey:(id)arg0 type:(id)arg1;
- (id)colorWithARGBString:(id)arg0;
- (void)color_loadManager;
- (void)addAssetManager:(Class)arg0 type:(id)arg1;
- (id /* block */)colorInTheme;
- (void)corner_loadManager;
- (void)file_loadManager;
- (long long)failTypeWithGeckoResourceStatus:(long long)arg0;
- (id)filePathCache;
- (void)setFilePathCache:(id)arg0;
- (id /* block */)asyncData;
- (id /* block */)asyncFilePath;
- (void)font_loadManager;
- (void)image_loadManager;
- (id)localList;
- (void)setLocalList:(id)arg0;
- (id /* block */)asyncImage;
- (void)value_loadManager;
- (void)setLocalBundle:(id)arg0;
- (id)localBundle;
- (id)dataCache;
- (void)setParent:(id)arg0;
- (id /* block */)data;
- (id /* block */)filePath;
- (void).cxx_destruct;
- (id /* block */)value;
- (id /* block */)image;
- (id)parent;
- (id /* block */)cornerRadius;
- (id)bundleName;
- (void)setBundleName:(id)arg0;
- (id)identifier;
- (id /* block */)colors;
- (id /* block */)font;
- (id)assetManagers;
- (void)setIdentifier:(id)arg0;
- (id /* block */)localImage;
- (void)setDataCache:(id)arg0;

@end
