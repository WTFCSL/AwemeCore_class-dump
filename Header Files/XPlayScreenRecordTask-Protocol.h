//
//     Generated by private class-dump
//

@class NSString;
@protocol XPlayScreenRecordTaskDelegate;

@protocol XPlayScreenRecordTask <NSObject>

@property (weak, nonatomic) id<XPlayScreenRecordTaskDelegate> delegate;
@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSString *logId;

- (id)logId;
- (long long)state;
- (void)stop;
- (id)delegate;
- (void)start;
- (void)setDelegate:(id)arg0;

@end