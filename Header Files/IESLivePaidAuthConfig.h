//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary;

@interface IESLivePaidAuthConfig : NSObject {
    BOOL _initialPaid;
    BOOL _initialPromised;
    BOOL _shouldManualPromise;
    long long _paidScene;
    unsigned long long _paidLaunchSource;
    NSNumber *_authID;
    NSDictionary *_extraAuthParams;
    NSNumber *_roomID;
    NSNumber *_pingID;
}

@property (nonatomic) long long paidScene;
@property (nonatomic) unsigned long long paidLaunchSource;
@property (nonatomic, getter=isInitialPaid) BOOL initialPaid;
@property (nonatomic, getter=isInitialPromised) BOOL initialPromised;
@property (nonatomic, getter=isShouldManualPromise) BOOL shouldManualPromise;
@property (copy, nonatomic) NSNumber *authID;
@property (copy, nonatomic) NSDictionary *extraAuthParams;
@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSNumber *pingID;

- (long long)paidScene;
- (void)setPaidScene:(long long)arg0;
- (void)setPingID:(id)arg0;
- (void)setInitialPaid:(BOOL)arg0;
- (void)setInitialPromised:(BOOL)arg0;
- (void)setShouldManualPromise:(BOOL)arg0;
- (unsigned long long)paidLaunchSource;
- (void)setPaidLaunchSource:(unsigned long long)arg0;
- (id)extraAuthParams;
- (void)setExtraAuthParams:(id)arg0;
- (id)pingID;
- (BOOL)isInitialPaid;
- (BOOL)isInitialPromised;
- (BOOL)isShouldManualPromise;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)authID;
- (void)setAuthID:(id)arg0;

@end
