//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEVideosInsertResult : NSObject {
    BOOL _skipURLTransfer;
    BOOL _requireLogin;
    unsigned long long _insertPage;
    NSDictionary *_loginTrackerInfo;
}

@property (nonatomic) unsigned long long insertPage;
@property (nonatomic) BOOL skipURLTransfer;
@property (copy, nonatomic) NSDictionary *loginTrackerInfo;
@property (nonatomic) BOOL requireLogin;

- (void)setRequireLogin:(BOOL)arg0;
- (BOOL)requireLogin;
- (void)setInsertPage:(unsigned long long)arg0;
- (void)setSkipURLTransfer:(BOOL)arg0;
- (id)initWithInsertPage:(unsigned long long)arg0 skipURLTransfer:(BOOL)arg1 requireLogin:(BOOL)arg2;
- (unsigned long long)insertPage;
- (BOOL)skipURLTransfer;
- (id)loginTrackerInfo;
- (void)setLoginTrackerInfo:(id)arg0;
- (void).cxx_destruct;

@end