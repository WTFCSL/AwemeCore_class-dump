//
//     Generated by private class-dump
//

@interface RTVFeedFirstFrameResultModel : NSObject {
    long long _awemeType;
    long long _result;
}

@property (readonly, nonatomic) long long awemeType;
@property (readonly, nonatomic) long long result;

+ (id)modelWithResult:(long long)arg0;

- (long long)awemeType;
- (id)initWithAwemeType:(long long)arg0 result:(long long)arg1;
- (BOOL)isSuccess;
- (long long)result;

@end
