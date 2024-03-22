//
//     Generated by private class-dump
//

@class NSString;

@interface BDTGCertManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _certMutex;
    NSString *_clientCert;
    NSString *_serverCert;
    NSString *_serverCertSN;
}

@property (class, readonly, copy, nonatomic) NSString *clientCert;
@property (class, readonly, copy, nonatomic) NSString *serverCert;
@property (class, readonly, copy, nonatomic) NSString *serverCertSN;

@property (copy, nonatomic) NSString *clientCert;
@property (copy, nonatomic) NSString *serverCert;
@property (copy, nonatomic) NSString *serverCertSN;

+ (id)clientCert;
+ (id)serverCert;
+ (id)serverCertSN;
+ (void)updateClientCert:(id)arg0 serverCert:(id)arg1 serverCertSN:(id)arg2;
+ (void)updateClientCert:(id)arg0;
+ (void)removeClientCert;
+ (id)sharedInstance;
+ (void)start;

- (id)clientCert;
- (id)serverCert;
- (id)serverCertSN;
- (void)updateClientCert:(id)arg0 serverCert:(id)arg1 serverCertSN:(id)arg2;
- (void)p_loadCachedCert;
- (void)updateClientCert:(id)arg0;
- (void)setClientCert:(id)arg0;
- (void)setServerCert:(id)arg0;
- (void)setServerCertSN:(id)arg0;
- (void)removeClientCert;
- (id)init;
- (void).cxx_destruct;

@end
