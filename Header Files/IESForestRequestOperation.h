//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, IESForestWorkflow;

@interface IESForestRequestOperation : NSObject <IESForestRequestOperation> {
    NSString *_url;
    NSMutableArray *_completions;
    IESForestWorkflow *_workflow;
}

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) IESForestWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendCompletion:(id /* block */)arg0;
- (id)initWithRequest:(id)arg0 forestKit:(id)arg1;
- (void)setCompletions:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (BOOL)cancel;
- (id)completions;
- (id)url;
- (id)workflow;
- (void)setWorkflow:(id)arg0;

@end
