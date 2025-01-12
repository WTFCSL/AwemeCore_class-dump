//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEU18VerificationThreadSafeStorage : NSObject <AWEU18VerificationThreadSafeStorageProtocol> {
    NSMutableDictionary *_storage;
    NSObject<OS_dispatch_queue> *_storageQueue;
}

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveToDiskForKeys:(id)arg0;
- (void)archiveDataToDiskForKeys:(id)arg0;
- (void)asyncReadValueFromDiskWithKeys:(id)arg0;
- (void)asyncUnarchiveDataFromDiskWithKeys:(id)arg0 classes:(id)arg1;
- (void)safeAsyncAddNumber:(id)arg0 forKey:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)safeAsyncSetValue:(id)arg0 forKey:(unsigned long long)arg1;
- (id)safeGetValueForKey:(unsigned long long)arg0;
- (void)asyncSaveDataWithVeriV2Model:(id)arg0;
- (void)cleanAllData;
- (id)getKeyStrWithNumber:(id)arg0;
- (void)setStorage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)storage;
- (id)storageQueue;
- (void)setStorageQueue:(id)arg0;

@end
