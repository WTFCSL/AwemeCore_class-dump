//
//     Generated by private class-dump
//

@protocol AWEU18VerificationThreadSafeStorageProtocol <NSObject>

- (void)saveToDiskForKeys:(id)arg0;
- (void)archiveDataToDiskForKeys:(id)arg0;
- (void)asyncReadValueFromDiskWithKeys:(id)arg0;
- (void)asyncUnarchiveDataFromDiskWithKeys:(id)arg0 classes:(id)arg1;
- (void)safeAsyncAddNumber:(id)arg0 forKey:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)safeAsyncSetValue:(id)arg0 forKey:(unsigned long long)arg1;
- (id)safeGetValueForKey:(unsigned long long)arg0;
- (void)asyncSaveDataWithVeriV2Model:(id)arg0;
- (void)cleanAllData;

@end