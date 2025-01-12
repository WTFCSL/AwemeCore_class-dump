//
//     Generated by private class-dump
//

@class NSString, NSError;

@interface IESLatchLoaderAPIEvent : NSObject <IESLatchLoaderEvent> {
    double startTime;
    NSError *error;
    NSString *_apiName;
    unsigned long long _cacheStatus;
}

@property (copy, nonatomic) NSString *apiName;
@property (nonatomic) unsigned long long cacheStatus;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)cacheStatus;
- (void)setCacheStatus:(unsigned long long)arg0;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)startTime;
- (void)setError:(id)arg0;
- (id)error;
- (void)setApiName:(id)arg0;
- (id)apiName;

@end
