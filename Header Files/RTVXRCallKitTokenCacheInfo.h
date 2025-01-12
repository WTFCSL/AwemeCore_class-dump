//
//     Generated by private class-dump
//

@class NSString;

@interface RTVXRCallKitTokenCacheInfo : NSObject <NSSecureCoding> {
    NSString *_token;
    NSString *_userID;
    double _timeStamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, nonatomic) double timeStamp;

+ (BOOL)supportsSecureCoding;

- (id)initWithToken:(id)arg0 userID:(id)arg1 timstamp:(double)arg2;
- (id)userID;
- (void).cxx_destruct;
- (double)timeStamp;
- (id)token;
- (id)initWithCoder:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
