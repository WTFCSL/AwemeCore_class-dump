//
//     Generated by private class-dump
//

@class NSString;

@interface SSBlockTask : NSObject <ACCConfigConsumer> {
    BOOL _didStart;
    id /* block */ _block;
}

@property (nonatomic) BOOL didStart;
@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (id /* block */)block;
- (BOOL)didStart;
- (void)setDidStart:(BOOL)arg0;
- (void)executeWithCompletion:(id /* block */)arg0;

@end
