//
//     Generated by private class-dump
//

@class NSError;

@interface AWEContactsRequestResultModel : NSObject {
    BOOL _isPermitted;
    BOOL _isFirstRequestTime;
    BOOL _isRefused;
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isPermitted;
@property (nonatomic) BOOL isFirstRequestTime;
@property (nonatomic) BOOL isRefused;

- (BOOL)isFirstRequestTime;
- (void)setIsFirstRequestTime:(BOOL)arg0;
- (void)setIsPermitted:(BOOL)arg0;
- (void)setIsRefused:(BOOL)arg0;
- (BOOL)isRefused;
- (void).cxx_destruct;
- (BOOL)isPermitted;
- (void)setError:(id)arg0;
- (id)error;

@end
