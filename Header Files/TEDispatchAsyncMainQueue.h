//
//     Generated by private class-dump
//

@class NSString, CADisplayLink;

@interface TEDispatchAsyncMainQueue : NSObject <TEDispatchAsyncQueueProtocol> {
    CADisplayLink *_displayLink;
    id /* block */ displayCallbackBlock;
}

@property (copy, nonatomic) id /* block */ displayCallbackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)displayCallbackBlock;
- (void)displayLinkCallbackWithNoPlayerItem:(id)arg0;
- (void)setDisplayCallbackBlock:(id /* block */)arg0;
- (void)run;
- (id)init;
- (void).cxx_destruct;
- (void)ready;
- (void)stop;
- (void)pause;

@end
