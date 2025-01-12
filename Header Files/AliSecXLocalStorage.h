//
//     Generated by private class-dump
//

@interface AliSecXLocalStorage : NSObject

+ (BOOL)isFileExist:(id)arg0;
+ (id)loadStringFromKeychain:(id)arg0;
+ (id)loadStringFromKeychain:(id)arg0 error:(id *)arg1;
+ (BOOL)saveStringToKeychain:(id)arg0 Value:(id)arg1 error:(id *)arg2;
+ (BOOL)isFileExist:(id)arg0 fromFolder:(long long)arg1 withPath:(id)arg2;
+ (BOOL)createFile:(id)arg0 fromFolder:(long long)arg1 withPath:(id)arg2 error:(id *)arg3;
+ (unsigned long long)getFileSize:(id)arg0 fromFolder:(long long)arg1 withPath:(id)arg2 error:(id *)arg3;
+ (id)loadDataFromFile:(id)arg0 fromFolder:(long long)arg1 withPath:(id)arg2;
+ (long long)saveDataToFile:(id)arg0 Value:(id)arg1 fromFolder:(long long)arg2 withPath:(id)arg3;
+ (id)getDocumentsFolderFileListFromFolder:(long long)arg0 withPath:(id)arg1 error:(id *)arg2;
+ (BOOL)removeFile:(id)arg0 fromFolder:(long long)arg1 withPath:(id)arg2 error:(id *)arg3;
+ (long long)saveStringToKeychain:(id)arg0 Value:(id)arg1;
+ (BOOL)createFile:(id)arg0;
+ (BOOL)removeFile:(id)arg0 error:(id *)arg1;
+ (id)getFirstLevelFolderPath:(long long)arg0;
+ (BOOL)deleteItemFromKeychain:(id)arg0 error:(id *)arg1;
+ (BOOL)deleteItemFromKeychain:(id)arg0 service:(id)arg1;
+ (id)loadStringFromKeychain:(id)arg0 service:(id)arg1;
+ (BOOL)deleteItemFromKeychain:(id)arg0;
+ (id)loadDataFromKeychain:(id)arg0;
+ (long long)saveDataToKeychain:(id)arg0 Value:(id)arg1;
+ (unsigned long long)getFileSize:(id)arg0 error:(id *)arg1;

@end
