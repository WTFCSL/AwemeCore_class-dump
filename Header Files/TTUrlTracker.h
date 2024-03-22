//
//     Generated by private class-dump
//

@class NSString;

@interface TTUrlTracker : JSONModel {
    BOOL _is_pcdn;
    int _protocol;
    NSString *_url;
    long long _code;
    long long _size;
    double _duration;
    double _ttfb;
    NSString *_err;
}

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL is_pcdn;
@property (nonatomic) long long code;
@property (nonatomic) long long size;
@property (nonatomic) double duration;
@property (nonatomic) int protocol;
@property (nonatomic) double ttfb;
@property (copy, nonatomic) NSString *err;

- (void)setIs_pcdn:(BOOL)arg0;
- (void)setTtfb:(double)arg0;
- (double)ttfb;
- (id)initWithParam:(id)arg0 isPcdn:(BOOL)arg1;
- (void)updateDownloadedLen:(long long)arg0;
- (void)updateNetInfo:(id)arg0 error:(id)arg1;
- (BOOL)is_pcdn;
- (void)merge:(id)arg0;
- (int)protocol;
- (void)setCode:(long long)arg0;
- (long long)code;
- (void).cxx_destruct;
- (void)setProtocol:(int)arg0;
- (void)setUrl:(id)arg0;
- (double)duration;
- (long long)size;
- (void)setSize:(long long)arg0;
- (void)dealloc;
- (id)url;
- (void)setDuration:(double)arg0;
- (id)err;
- (void)setErr:(id)arg0;
- (void)updateDuration:(double)arg0;

@end