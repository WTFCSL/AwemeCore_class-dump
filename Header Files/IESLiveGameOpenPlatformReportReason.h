//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameOpenPlatformReportReason : NSObject {
    long long _reasonId;
    NSString *_reason;
}

@property (nonatomic) long long reasonId;
@property (copy, nonatomic) NSString *reason;

- (id)initWithPBData:(id)arg0;
- (long long)reasonId;
- (id)initWithReasonId:(long long)arg0 reasonDescription:(id)arg1;
- (void)setReasonId:(long long)arg0;
- (void).cxx_destruct;
- (id)reason;
- (void)setReason:(id)arg0;

@end
