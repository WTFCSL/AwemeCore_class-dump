//
//     Generated by private class-dump
//

@class NSString, NSLock;

@interface BDiOSDNSParserBridge : NSObject {
    NSString *_hostname;
    struct BDDNSParserImplement { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; BOOL x2; int x3; void *x4; char *x5; char *x6; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x7; long long x8; } *_implement;
    long long _startT;
    NSLock *_lock;
}

@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) struct BDDNSParserImplement { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; BOOL x2; int x3; void *x4; char *x5; char *x6; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x7; long long x8; } *implement;
@property (nonatomic) long long startT;
@property (retain, nonatomic) NSLock *lock;

- (void)setImplement:(struct BDDNSParserImplement { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; BOOL x2; int x3; void *x4; char *x5; char *x6; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x7; long long x8; } *)arg0;
- (void)setStartT:(long long)arg0;
- (struct BDDNSParserImplement { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; BOOL x2; int x3; void *x4; char *x5; char *x6; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x7; long long x8; } *)implement;
- (long long)startT;
- (int)startParse:(const char *)arg0 implement:(struct BDDNSParserImplement { void /* function */ **x0; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x1; BOOL x2; int x3; void *x4; char *x5; char *x6; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x7; long long x8; } *)arg1;
- (id)init;
- (void)setHostname:(id)arg0;
- (void).cxx_destruct;
- (id)hostname;
- (void)close;
- (id)lock;
- (void)dealloc;
- (void)setLock:(id)arg0;

@end
