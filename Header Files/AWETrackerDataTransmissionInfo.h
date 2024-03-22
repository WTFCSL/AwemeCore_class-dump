//
//     Generated by private class-dump
//

@class NSString;

@interface AWETrackerDataTransmissionInfo : NSObject {
    BOOL _isAttached;
    NSString *_event;
    id /* block */ _block;
}

@property (retain, nonatomic) NSString *event;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL isAttached;

- (id)attachTo:(id)arg0;
- (void)setIsAttached:(BOOL)arg0;
- (id)initWithEvent:(id)arg0 withBlock:(id /* block */)arg1;
- (void)setEvent:(id)arg0;
- (id)event;
- (BOOL)isAttached;
- (id)init;
- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (id /* block */)block;

@end
