//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface BDNovelCommonVipImageHelper : NSObject {
    NSMutableDictionary *_iconMap;
}

@property (retain, nonatomic) NSMutableDictionary *iconMap;

+ (id)getIconForKey:(id)arg0;
+ (id)checkNoImage;
+ (id)checkOkImage;
+ (long long)vipCheckRequestMaxCount;
+ (id)toutiaoImages;
+ (id)douyinImages;
+ (void)refreshConfig;
+ (id)shared;

- (id)iconMap;
- (void)setIconMap:(id)arg0;
- (void)refreshConfig;
- (id)init;
- (void).cxx_destruct;

@end