//
//     Generated by private class-dump
//

@class TIMXDBEncryptConfig, TIMXSDKInstance;

@interface TIMXDBEncryptHelper : NSObject {
    TIMXDBEncryptConfig *_config;
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXDBEncryptConfig *config;

- (double)dbFileSize;
- (id)initWithRootObject:(id)arg0 config:(id)arg1;
- (id)databaseWithKey:(id)arg0 userID:(id)arg1;
- (void)removeDatabase;
- (double)encDBFileSize;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (float)fileSize:(id)arg0;

@end
