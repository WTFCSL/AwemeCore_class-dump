//
//     Generated by private class-dump
//

@protocol AWEStorageDelegate <NSObject>

- (void)willReadValueForKey:(id)arg0 identifier:(id)arg1;
- (void)didReadValueForKey:(id)arg0 from:(long long)arg1 identifier:(id)arg2;
- (void)willDeserialization:(id)arg0 key:(id)arg1 identifier:(id)arg2;
- (void)didDeserialization:(id)arg0 deserializedValue:(id)arg1 key:(id)arg2 identifier:(id)arg3;
- (void)didSetValue:(id)arg0 key:(id)arg1 error:(id)arg2 identifier:(id)arg3;
- (void)willWrite:(id)arg0 key:(id)arg1 identifier:(id)arg2;
- (void)didWrite:(id)arg0 key:(id)arg1 identifier:(id)arg2;
- (void)willSerialize:(id)arg0 key:(id)arg1 identifier:(id)arg2;
- (void)didSerialize:(id)arg0 key:(id)arg1 encodedData:(id)arg2 identifier:(id)arg3;
- (void)willSetValue:(id)arg0 key:(id)arg1 domain:(id)arg2 identifier:(id)arg3;
- (void)willGetValueForKey:(id)arg0 domain:(id)arg1 identifier:(id)arg2;
- (void)didGetValue:(id)arg0 Key:(id)arg1 error:(id)arg2 identifier:(id)arg3;

@end
