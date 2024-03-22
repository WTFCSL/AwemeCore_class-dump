//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLiveGameOpenPlatfromRequestModel : NSOperation {
    NSString *_methodType;
    NSString *_URLString;
    NSString *_data;
    NSDictionary *_headers;
    double _timeout;
    id /* block */ _successBlock;
    id /* block */ _failureBlock;
}

@property (copy, nonatomic) NSString *methodType;
@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *data;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (void)setMethodType:(id)arg0;
- (id)methodType;
- (id)initWithJSBResultDic:(id)arg0;
- (id)URLString;
- (id /* block */)failureBlock;
- (id)data;
- (void)setFailureBlock:(id /* block */)arg0;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (id)headers;
- (void)setData:(id)arg0;
- (double)timeout;
- (void)setTimeout:(double)arg0;
- (void)setURLString:(id)arg0;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg0;

@end
