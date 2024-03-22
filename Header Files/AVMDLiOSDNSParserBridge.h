//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSLock;

@interface AVMDLiOSDNSParserBridge : NSObject {
    NSMutableArray *_parserActions;
    NSString *_hostname;
    struct AVMDLDNSParserImplement { void /* function */ **x0; int x1; void /* function */ **x2; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x3; BOOL x4; int x5; void *x6; char *x7; char *x8; struct AVMDLNetWorkManager *x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; long long x11; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x12; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x13; int x14; } *_implement;
    long long _startT;
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableArray *parserActions;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) struct AVMDLDNSParserImplement { void /* function */ **x0; int x1; void /* function */ **x2; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x3; BOOL x4; int x5; void *x6; char *x7; char *x8; struct AVMDLNetWorkManager *x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; long long x11; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x12; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x13; int x14; } *implement;
@property (nonatomic) long long startT;
@property (retain, nonatomic) NSLock *lock;

- (void)setImplement:(struct AVMDLDNSParserImplement { void /* function */ **x0; int x1; void /* function */ **x2; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x3; BOOL x4; int x5; void *x6; char *x7; char *x8; struct AVMDLNetWorkManager *x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; long long x11; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x12; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x13; int x14; } *)arg0;
- (void)setStartT:(long long)arg0;
- (struct AVMDLDNSParserImplement { void /* function */ **x0; int x1; void /* function */ **x2; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x3; BOOL x4; int x5; void *x6; char *x7; char *x8; struct AVMDLNetWorkManager *x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; long long x11; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x12; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x13; int x14; } *)implement;
- (long long)startT;
- (int)startParse:(const char *)arg0 implement:(struct AVMDLDNSParserImplement { void /* function */ **x0; int x1; void /* function */ **x2; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x3; BOOL x4; int x5; void *x6; char *x7; char *x8; struct AVMDLNetWorkManager *x9; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x10; long long x11; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x12; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x13; int x14; } *)arg1;
- (int)switchTypeToInternal:(long long)arg0;
- (id)getIpList:(id)arg0;
- (id)parserActions;
- (void)setParserActions:(id)arg0;
- (id)init;
- (void)setHostname:(id)arg0;
- (void).cxx_destruct;
- (id)hostname;
- (void)close;
- (id)lock;
- (void)dealloc;
- (void)setLock:(id)arg0;

@end