//
//     Generated by private class-dump
//

@class NSString;

@protocol IESForestFetcherProtocol <NSObject>

+ (id)fetcherName;

@property (readonly, copy, nonatomic) NSString *name;

- (void)fetchResourceWithRequest:(id)arg0 completion:(id /* block */)arg1;
- (id)name;
- (void)cancelFetch;

@optional

- (id)debugMessage;

@end
