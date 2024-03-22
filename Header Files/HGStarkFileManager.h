//
//     Generated by private class-dump
//

@interface HGStarkFileManager : NSObject

+ (struct HGSCFileMatchResult { BOOL x0; BOOL x1; unsigned long long x2; })tryMatchSCFileUrl:(id)arg0 withScheme:(id)arg1 baseName:(id)arg2;
+ (id)scFileInfoWithRelativePath:(id)arg0 uniqueID:(id)arg1;
+ (id)convertToSCFileWithPath:(id)arg0 uniqueID:(id)arg1;
+ (id)generateSCFilePathWithType:(long long)arg0 extension:(id)arg1 uniqueID:(id)arg2;
+ (id)generateRandomFilePathWithType:(long long)arg0 uniqueID:(id)arg1 extension:(id)arg2 addFileScheme:(BOOL)arg3;
+ (BOOL)hasWriteRightsForPath:(id)arg0 uniqueID:(id)arg1;
+ (BOOL)hasWriteRightsBelowFolderPath:(id)arg0 uniqueID:(id)arg1;
+ (BOOL)hasAccessRightsForPath:(id)arg0 uniqueID:(id)arg1;

@end