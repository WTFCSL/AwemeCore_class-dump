//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface TTRequestModel : NSObject {
    BOOL __isNoNeedCommonParams;
    NSString *__host;
    NSString *__uri;
    NSString *__method;
    NSDictionary *__params;
    NSString *__response;
    id /* block */ __bodyBlock;
    NSDictionary *__additionGetParams;
    NSString *__fullNewURL;
}

@property (retain, nonatomic) NSString *_host;
@property (retain, nonatomic) NSString *_uri;
@property (retain, nonatomic) NSString *_method;
@property (copy, nonatomic) NSDictionary *_params;
@property (retain, nonatomic) NSString *_response;
@property (copy, nonatomic) id /* block */ _bodyBlock;
@property (nonatomic) BOOL _isNoNeedCommonParams;
@property (retain, nonatomic) NSDictionary *_additionGetParams;
@property (copy, nonatomic) NSString *_fullNewURL;

- (id)_additionGetParams;
- (void)set_additionGetParams:(id)arg0;
- (void)set_uri:(id)arg0;
- (BOOL)_isNoNeedCommonParams;
- (id)_fullNewURL;
- (id)_requestURIStr;
- (void)set_method:(id)arg0;
- (void)set_params:(id)arg0;
- (void)set_response:(id)arg0;
- (void)set_bodyBlock:(id /* block */)arg0;
- (void)set_isNoNeedCommonParams:(BOOL)arg0;
- (void)set_fullNewURL:(id)arg0;
- (id)_host;
- (id)init;
- (void).cxx_destruct;
- (id)_response;
- (id /* block */)_bodyBlock;
- (id)_method;
- (id)_params;
- (id)_uri;
- (void)set_host:(id)arg0;
- (id)_requestURL;
- (id)_requestMethod;
- (id)_requestParams;

@end