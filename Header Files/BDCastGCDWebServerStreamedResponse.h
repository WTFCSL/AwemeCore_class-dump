//
//     Generated by private class-dump
//

@class NSString;

@interface BDCastGCDWebServerStreamedResponse : BDCastGCDWebServerResponse {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *contentType;

+ (id)responseWithContentType:(id)arg0 asyncStreamBlock:(id /* block */)arg1;
+ (id)responseWithContentType:(id)arg0 streamBlock:(id /* block */)arg1;

- (void)asyncReadDataWithCompletion:(id /* block */)arg0;
- (id)initWithContentType:(id)arg0 streamBlock:(id /* block */)arg1;
- (id)initWithContentType:(id)arg0 asyncStreamBlock:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)description;

@end
