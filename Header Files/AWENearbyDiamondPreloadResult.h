//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyDiamondPreloadResult : NSObject {
    BOOL _success;
    long long _preloadType;
    NSString *_errMsg;
    double _startPreloadTs;
    double _endPreloadTs;
    NSString *_schema;
    long long _scene;
}

@property (nonatomic) BOOL success;
@property (nonatomic) long long preloadType;
@property (copy, nonatomic) NSString *errMsg;
@property (nonatomic) double startPreloadTs;
@property (nonatomic) double endPreloadTs;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long scene;

- (void)setPreloadType:(long long)arg0;
- (id)errMsg;
- (void)setErrMsg:(id)arg0;
- (double)startPreloadTs;
- (void)setStartPreloadTs:(double)arg0;
- (double)endPreloadTs;
- (void)setEndPreloadTs:(double)arg0;
- (void)setSchema:(id)arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg0;
- (id)schema;
- (long long)scene;
- (long long)preloadType;

@end
