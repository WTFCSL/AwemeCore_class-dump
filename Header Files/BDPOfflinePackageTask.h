//
//     Generated by private class-dump
//

@class BDPOfflinePackage;

@interface BDPOfflinePackageTask : NSObject {
    long long _taskStatus;
    BDPOfflinePackage *_offlinePackage;
}

@property (nonatomic) long long taskStatus;
@property (retain, nonatomic) BDPOfflinePackage *offlinePackage;

- (void)setTaskStatus:(long long)arg0;
- (void)setOfflinePackage:(id)arg0;
- (id)offlinePackage;
- (void).cxx_destruct;
- (long long)taskStatus;

@end
