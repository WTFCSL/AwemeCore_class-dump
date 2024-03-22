//
//     Generated by private class-dump
//

@class AWEStorage;

@interface AWEIMUserDBConfig : NSObject {
    AWEStorage *_configStorage;
}

@property (readonly, nonatomic) AWEStorage *configStorage;

+ (long long)fullUpdateExpireMinute;
+ (long long)memoryCacheSize_ABTest;
+ (BOOL)syncSetup_ABTest;
+ (BOOL)checkFullUser_ABTest;
+ (BOOL)enableCleanHistoryVersionDBFile;
+ (BOOL)useNewDB_ABTest;
+ (id)track_ABTest;
+ (id)sharedInstance;

- (id)configStorage;
- (id)init;
- (void).cxx_destruct;

@end