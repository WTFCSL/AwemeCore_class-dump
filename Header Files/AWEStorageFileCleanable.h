//
//     Generated by private class-dump
//

@class __AWEStorageFileInternal;

@interface AWEStorageFileCleanable : NSObject {
    __AWEStorageFileInternal *_fileInternal;
}

+ (id)storageWithDomain:(id)arg0;
+ (id)universalStorage;
+ (void)autoCleanFileWithCompletion:(id /* block */)arg0;

- (void)writeDictionary:(id)arg0 toFileForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)readDictionaryFromFileForKey:(id)arg0 completion:(id /* block */)arg1;
- (void)removeAllFileInDomainWithCompletion:(id /* block */)arg0;
- (void)readStringFromFileForKey:(id)arg0 completion:(id /* block */)arg1;
- (void)writeString:(id)arg0 toFileForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)readArrayFromFileForKey:(id)arg0 completion:(id /* block */)arg1;
- (void)writeArray:(id)arg0 toFileForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)readObjectFromFileForKey:(id)arg0 completion:(id /* block */)arg1;
- (void)writeObject:(id)arg0 toFileForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)readDataFromFileForKey:(id)arg0 completion:(id /* block */)arg1;
- (void)writeData:(id)arg0 toFileForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)removeFileInDomainForKey:(id)arg0 completion:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDomain:(id)arg0;

@end