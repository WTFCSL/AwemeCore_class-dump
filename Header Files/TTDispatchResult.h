//
//     Generated by private class-dump
//

@class NSString;

@interface TTDispatchResult : NSObject {
    NSString *_finalUrl;
    NSString *_etag;
    NSString *_epoch;
}

@property (copy, nonatomic) NSString *finalUrl;
@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSString *epoch;

- (id)finalUrl;
- (void)setFinalUrl:(id)arg0;
- (id)initWithUrl:(id)arg0 etag:(id)arg1 epoch:(id)arg2;
- (void).cxx_destruct;
- (id)etag;
- (id)epoch;
- (void)setEtag:(id)arg0;
- (void)setEpoch:(id)arg0;

@end
