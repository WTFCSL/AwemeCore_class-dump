//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface HGTTFileManager : NSObject <HGWarmBootMessage> {
    NSMutableDictionary *_uniqueIDPathSet;
    NSMutableDictionary *_uniqueIdIndexDict;
    NSMutableDictionary *_indexUniqueIdDict;
    long long _folderIndex;
}

@property (retain, nonatomic) NSMutableDictionary *uniqueIdIndexDict;
@property (retain, nonatomic) NSMutableDictionary *indexUniqueIdDict;
@property (nonatomic) long long folderIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct HGMatchResult { BOOL x0; BOOL x1; unsigned long long x2; BOOL x3; long long x4; })tryMatchTTFileUrl:(id)arg0 withScheme:(id)arg1 baseName:(id)arg2;
+ (id)getUniqueIDByFolderIndex:(long long)arg0;
+ (id)falsifyTTFilePathIfNeeded:(id)arg0 sandbox:(id)arg1;
+ (void)removeFalsifiedFolderWithUniqueID:(id)arg0;
+ (id)generateTTFilePathWithType:(long long)arg0 extension:(id)arg1 sandbox:(id)arg2;
+ (id)generateRandomFilePathWithType:(long long)arg0 sandbox:(id)arg1 extension:(id)arg2 addFileScheme:(BOOL)arg3;
+ (id)convertToTTFileWithPath:(id)arg0 sandbox:(id)arg1;
+ (id)convertToTTFileWithRPath:(id)arg0 folderType:(long long)arg1 sandbox:(id)arg2;
+ (id)convertToFileWithTTFilePath:(id)arg0 sandbox:(id)arg1;
+ (id)ttFileInfoWithRelativePath:(id)arg0 sanbox:(id)arg1 addFileScheme:(BOOL)arg2;
+ (id)shareInstance;

- (void)cleanWarmCacheWithUniqueID:(id)arg0;
- (long long)folderIndex;
- (void)setFolderIndex:(long long)arg0;
- (id)uniqueIdIndexDict;
- (id)indexUniqueIdDict;
- (void)setUniqueIdIndexDict:(id)arg0;
- (void)setIndexUniqueIdDict:(id)arg0;
- (void).cxx_destruct;

@end
