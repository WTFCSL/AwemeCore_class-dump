//
//     Generated by private class-dump
//

@class NSString;

@interface LynxResourceRequest : NSObject {
    NSString *_url;
    id _requestParams;
}

@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) id requestParams;

- (id)initWithUrl:(id)arg0 andRequestParams:(id)arg1;
- (id)getLynxResourceFetcherRequestParams;
- (id)getLynxResourceServiceRequestParams;
- (void).cxx_destruct;
- (id)url;
- (id)requestParams;
- (id)initWithUrl:(id)arg0;

@end