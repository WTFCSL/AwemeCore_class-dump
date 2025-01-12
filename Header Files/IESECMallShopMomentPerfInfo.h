//
//     Generated by private class-dump
//

@interface IESECMallShopMomentPerfInfo : NSObject {
    BOOL _flagRenderCache;
    double _t_real_open_time;
    double _t_tab_init_start;
    double _t_page_init_start;
    double _t_page_init_end;
    double _t_request_start;
    double _t_request_end;
    double _t_page_show;
    double _t_page_cache_show;
    long long _load_status;
    long long _error_code;
}

@property (nonatomic) double t_real_open_time;
@property (nonatomic) double t_tab_init_start;
@property (nonatomic) double t_page_init_start;
@property (nonatomic) double t_page_init_end;
@property (nonatomic) double t_request_start;
@property (nonatomic) double t_request_end;
@property (nonatomic) double t_page_show;
@property (nonatomic) double t_page_cache_show;
@property (nonatomic) long long load_status;
@property (nonatomic) long long error_code;
@property (nonatomic) BOOL flagRenderCache;

- (void)setT_page_init_start:(double)arg0;
- (void)setT_page_init_end:(double)arg0;
- (void)setT_request_start:(double)arg0;
- (void)setT_request_end:(double)arg0;
- (void)setT_tab_init_start:(double)arg0;
- (double)t_real_open_time;
- (void)setT_real_open_time:(double)arg0;
- (double)t_tab_init_start;
- (double)t_page_init_start;
- (double)t_page_init_end;
- (double)t_request_start;
- (double)t_request_end;
- (double)t_page_cache_show;
- (double)t_page_show;
- (long long)load_status;
- (BOOL)flagRenderCache;
- (void)setT_page_show:(double)arg0;
- (void)setT_page_cache_show:(double)arg0;
- (void)setLoad_status:(long long)arg0;
- (void)setFlagRenderCache:(BOOL)arg0;
- (long long)error_code;
- (void)setError_code:(long long)arg0;
- (id)toDict;

@end
