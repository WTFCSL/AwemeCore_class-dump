//
//     Generated by private class-dump
//

@class NSDictionary;

@interface HybridGurdSyncResourcesResult : NSObject {
    BOOL _successfully;
    BOOL _throttled;
    NSDictionary *_info;
}

@property (nonatomic, getter=isSuccessfully) BOOL successfully;
@property (copy, nonatomic) NSDictionary *info;
@property (nonatomic, getter=isThrottled) BOOL throttled;

- (BOOL)isSuccessfully;
- (void)setSuccessfully:(BOOL)arg0;
- (void)setThrottled:(BOOL)arg0;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;
- (BOOL)isThrottled;

@end
