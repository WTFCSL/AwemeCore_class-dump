//
//     Generated by private class-dump
//

@class NSString;

@interface AWESavedDeleteBlockTokenManager : NSObject {
    NSString *_latestToken;
    double _cancelTime;
}

@property (copy, nonatomic) NSString *latestToken;
@property (nonatomic) double cancelTime;

+ (id)sharedInstance;

- (void)setCancelTime:(double)arg0;
- (double)cancelTime;
- (void)setLatestToken:(id)arg0;
- (id)latestToken;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;

@end