//
//     Generated by private class-dump
//

@class AWEAdTaskContext;

@interface AWEAdPromiseContext : NSObject {
    BOOL _adTaskTypeRunSuccess;
    AWEAdTaskContext *_adTaskContext;
}

@property (retain, nonatomic) AWEAdTaskContext *adTaskContext;
@property (nonatomic) BOOL adTaskTypeRunSuccess;

- (void)setAdTaskContext:(id)arg0;
- (id)adTaskContext;
- (void)setAdTaskTypeRunSuccess:(BOOL)arg0;
- (BOOL)adTaskTypeRunSuccess;
- (void).cxx_destruct;

@end
