//
//     Generated by private class-dump
//

@class AWEHPRealTimeActivityResourceModel, AWEHPRealTimeActivityInfo;

@interface AWEHPRealTimeActivityBatchInfo : NSObject {
    AWEHPRealTimeActivityResourceModel *_dynamicInfo;
    AWEHPRealTimeActivityInfo *_backupInfo;
}

@property (retain, nonatomic) AWEHPRealTimeActivityResourceModel *dynamicInfo;
@property (retain, nonatomic) AWEHPRealTimeActivityInfo *backupInfo;

- (void)setDynamicInfo:(id)arg0;
- (id)initWithDynamicInfo:(id)arg0 backupInfo:(id)arg1;
- (BOOL)isSameChannelInfo:(id)arg0;
- (long long)getVersionID;
- (id)getChannelInfo;
- (void).cxx_destruct;
- (id)backupInfo;
- (BOOL)isEqual:(id)arg0;
- (id)dynamicInfo;
- (void)setBackupInfo:(id)arg0;

@end
