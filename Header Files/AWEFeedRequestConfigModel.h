//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEFeedRequestConfigModel : NSObject {
    BOOL _forceRequest;
    NSDictionary *_requestExtParams;
}

@property (nonatomic) BOOL forceRequest;
@property (copy, nonatomic) NSDictionary *requestExtParams;

+ (id)configWithParams:(id)arg0;
+ (id)configWithForceRequest:(BOOL)arg0;

- (id)requestExtParams;
- (void)setRequestExtParams:(id)arg0;
- (BOOL)forceRequest;
- (void)setForceRequest:(BOOL)arg0;
- (void).cxx_destruct;

@end
