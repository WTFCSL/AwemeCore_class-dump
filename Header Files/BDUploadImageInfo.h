//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDUploadImageInfo : NSObject {
    long long _fileIndex;
    NSString *_storeId;
    NSDictionary *_metainfoDict;
    NSDictionary *_encryInfo;
}

@property (nonatomic) long long fileIndex;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSDictionary *metainfoDict;
@property (copy, nonatomic) NSDictionary *encryInfo;

- (id)metainfoDict;
- (void)setMetainfoDict:(id)arg0;
- (id)encryInfo;
- (void)setEncryInfo:(id)arg0;
- (void).cxx_destruct;
- (id)storeId;
- (void)setStoreId:(id)arg0;
- (long long)fileIndex;
- (void)setFileIndex:(long long)arg0;

@end
