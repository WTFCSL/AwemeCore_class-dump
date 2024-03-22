//
//     Generated by private class-dump
//

@class NSString;

@interface SECDecisionResult : NSObject {
    BOOL _isPassed;
    unsigned long long _action;
    NSString *_reason;
}

@property (nonatomic) BOOL isPassed;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) NSString *reason;

- (BOOL)isPassed;
- (id)initWithResult:(BOOL)arg0 action:(unsigned long long)arg1 reason:(id)arg2;
- (id)initWithResult:(BOOL)arg0 action:(unsigned long long)arg1;
- (void)setIsPassed:(BOOL)arg0;
- (void).cxx_destruct;
- (id)reason;
- (void)setAction:(unsigned long long)arg0;
- (unsigned long long)action;
- (void)setReason:(id)arg0;

@end
