//
//     Generated by private class-dump
//

@class NSString;

@protocol CSJResponseModel <NSObject>

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) long long returnValue;

- (long long)returnValue;
- (void)setRequestID:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (id)requestID;
- (void)setReturnValue:(long long)arg0;

@end
