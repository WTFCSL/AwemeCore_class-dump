//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol AVMDLCustomHttpDNSParser, OS_dispatch_queue, AVMDLiOSDNSProtocol;

@interface AVMDLiOSDNSParserAction : NSObject <AVMDLiOSCancelable> {
    BOOL _isUserCancel;
    BOOL _mainFinished;
    BOOL _backupFinished;
    id /* block */ _outResult;
    NSObject<OS_dispatch_queue> *_dnsQueue;
    NSString *_hostname;
    double _waitSecond;
    long long _backupType;
    long long _mainType;
    long long _enableParallel;
    id<AVMDLiOSDNSProtocol> _mainParser;
    id<AVMDLiOSDNSProtocol> _backParser;
    id<AVMDLCustomHttpDNSParser> _customParser;
    id /* block */ _result;
}

@property (nonatomic) BOOL isUserCancel;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) double waitSecond;
@property (nonatomic) long long backupType;
@property (nonatomic) long long mainType;
@property (nonatomic) long long enableParallel;
@property (retain, nonatomic) id<AVMDLiOSDNSProtocol> mainParser;
@property (retain, nonatomic) id<AVMDLiOSDNSProtocol> backParser;
@property (weak, nonatomic) id<AVMDLCustomHttpDNSParser> customParser;
@property (copy, nonatomic) id /* block */ result;
@property BOOL mainFinished;
@property BOOL backupFinished;
@property (copy, nonatomic) id /* block */ outResult;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dnsQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_parserWithType:(long long)arg0;
- (BOOL)backupFinished;
- (id)mainParser;
- (void)_startBackupParser;
- (void)setMainFinished:(BOOL)arg0;
- (double)waitSecond;
- (id)backParser;
- (void)setBackParser:(id)arg0;
- (BOOL)mainFinished;
- (void)setBackupFinished:(BOOL)arg0;
- (id)_getItemInfo:(id)arg0 info:(id)arg1;
- (id)_errorDomain:(long long)arg0;
- (void)setWaitSecond:(double)arg0;
- (void)setMainParser:(id)arg0;
- (BOOL)isUserCancel;
- (void)setIsUserCancel:(BOOL)arg0;
- (void)setOutResult:(id /* block */)arg0;
- (id /* block */)outResult;
- (void)setCustomHttpDNS:(id)arg0;
- (id)dnsQueue;
- (void)setDnsQueue:(id)arg0;
- (double)waitSec;
- (long long)mainDNSType;
- (long long)backupDNSType;
- (void)configMainParseType:(long long)arg0 backup:(long long)arg1 wait:(double)arg2 enableParallel:(long long)arg3;
- (void)_dealWithResult:(id)arg0 error:(id)arg1 dnsType:(long long)arg2;
- (void)setLocalDnsQueue:(id)arg0;
- (void)setMainType:(long long)arg0;
- (long long)enableParallel;
- (void)setEnableParallel:(long long)arg0;
- (id)customParser;
- (void)setCustomParser:(id)arg0;
- (void)setResult:(id /* block */)arg0;
- (void)setHostname:(id)arg0;
- (void).cxx_destruct;
- (void)start:(id /* block */)arg0;
- (id /* block */)result;
- (id)hostname;
- (id)host;
- (void)cancel;
- (BOOL)cancelled;
- (id)initWithHost:(id)arg0;
- (void)dealloc;
- (long long)backupType;
- (void)setBackupType:(long long)arg0;
- (long long)parallel;
- (long long)mainType;

@end
