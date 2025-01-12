//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEHttpTask;

@interface IESLiveHTTPTaskWrapper : NSObject <IESLiveHTTPTask> {
    long long _state;
    id<AWEHttpTask> _httpTask;
}

@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHttpTask:(id)arg0;
- (id)httpTask;
- (id)initWithHTTPTask:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (long long)state;
- (void)suspend;
- (void)cancel;

@end
