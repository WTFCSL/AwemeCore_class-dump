//
//     Generated by private class-dump
//

@class IESECSKUTaskContext;

@interface IESECSKUBaseTask : NSObject {
    IESECSKUTaskContext *_context;
    id /* block */ _completion;
}

@property (retain, nonatomic) IESECSKUTaskContext *context;
@property (copy, nonatomic) id /* block */ completion;

- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setContext:(id)arg0;
- (id)context;
- (id)runTask;

@end
