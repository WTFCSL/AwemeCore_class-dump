//
//     Generated by private class-dump
//

@class NSString;

@interface UserInfo : NSObject {
    NSString *_bizUid;
    NSString *_bizSecUid;
    long long _epUid;
}

@property (copy, nonatomic) NSString *bizUid;
@property (copy, nonatomic) NSString *bizSecUid;
@property (nonatomic) long long epUid;

- (long long)epUid;
- (void)setEpUid:(long long)arg0;
- (id)bizUid;
- (void)setBizUid:(id)arg0;
- (id)bizSecUid;
- (void)setBizSecUid:(id)arg0;
- (id)initWithBizUid:(id)arg0 bizSecUid:(id)arg1 epUid:(long long)arg2;
- (void).cxx_destruct;

@end
