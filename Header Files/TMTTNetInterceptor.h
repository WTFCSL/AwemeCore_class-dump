//
//     Generated by private class-dump
//

@class TTResponseFilterObject, TTResponseMutableDataFilterObject, TTRequestFilterObject;

@interface TMTTNetInterceptor : NSObject {
    TTRequestFilterObject *_reqFilter;
    TTResponseFilterObject *_respFilter;
    TTResponseMutableDataFilterObject *_mutableRespFilter;
}

@property (retain, nonatomic) TTRequestFilterObject *reqFilter;
@property (retain, nonatomic) TTResponseFilterObject *respFilter;
@property (retain, nonatomic) TTResponseMutableDataFilterObject *mutableRespFilter;

+ (id)sharedInstance;

- (void)startIntercepting;
- (void)startMutableResponseIntercepting;
- (void)stopIntercepting;
- (void)stopMutableResponseIntercepting;
- (id)reqFilter;
- (void)requestFilter:(id)arg0;
- (void)setReqFilter:(id)arg0;
- (id)respFilter;
- (void)responseFilter:(id)arg0 response:(id)arg1 data:(id)arg2 responseError:(id)arg3;
- (void)setRespFilter:(id)arg0;
- (id)mutableRespFilter;
- (void)responseFilter:(id)arg0 response:(id)arg1 mutableData:(id *)arg2 mutableResponseError:(id *)arg3;
- (void)setMutableRespFilter:(id)arg0;
- (void).cxx_destruct;

@end
