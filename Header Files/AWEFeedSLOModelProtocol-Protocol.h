//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol AWEFeedSLOModelProtocol <NSObject>

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, copy, nonatomic) NSString *errorDomain;
@property (readonly, copy, nonatomic) NSString *errorDesc;
@property (readonly, copy, nonatomic) NSString *errorExtra;
@property (readonly, copy, nonatomic) NSDictionary *extra;

- (id)errorExtra;
- (long long)status;
- (id)errorDomain;
- (id)extra;
- (long long)errorCode;
- (id)errorDesc;

@end