//
//     Generated by private class-dump
//

@protocol TVLCheckerDelegate;

@interface TVLChecker : NSObject {
    id<TVLCheckerDelegate> _delegate;
}

@property (weak, nonatomic) id<TVLCheckerDelegate> delegate;

+ (id)checkerWithConfiguration:(id)arg0;

- (void)hasDetectedEventWithKey:(id)arg0 eventInfo:(id)arg1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
