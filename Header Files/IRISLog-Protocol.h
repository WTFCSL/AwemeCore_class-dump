//
//     Generated by private class-dump
//

@class NSString;

@protocol IRISLog <NSObject>

@property (nonatomic) long long level;
@property (nonatomic) double time;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *message;

- (void)setLevel:(long long)arg0;
- (void)setMessage:(id)arg0;
- (long long)level;
- (double)time;
- (id)message;
- (void)setTime:(double)arg0;
- (void)setTag:(id)arg0;
- (id)tag;

@end
